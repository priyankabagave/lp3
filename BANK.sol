//SPDX-License-Identifier: MIT
pragma solidity >=0.5.0 <0.9.0;
contract Banking{
    mapping(address=>uint256) public user_account;
    function create_account()public 
    payable 
    returns(string memory){
        if(msg.value==0){
            user_account[msg.sender]=0;
            return "Account Created";
        }
        user_account[msg.sender] = msg.value;
        return "Account Created";
    }
    function deposit() public 
    payable 
    returns(string memory){
        user_account[msg.sender] = user_account[msg.sender]+msg.value;
        return "Deposit Successful";
    }
    function withdraw(uint256 amount) public
     payable 
     returns(string memory){
        user_account[msg.sender] = user_account[msg.sender]-amount;
        return "Withdraw Successful";
    }
    function transfer(address payable userAddress,uint256 amount) 
    public returns(string memory){
        user_account[msg.sender] = user_account[msg.sender]-amount;
        user_account[userAddress] = user_account[userAddress]+amount;
        return "Transfer Successful";
    }
    function userbalance() public view returns(uint256){
        return user_account[msg.sender];
    }
}