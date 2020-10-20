/*
    Copyright 2013-2020 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "sendsshpublickeyrequest.h"
#include "sendsshpublickeyrequest_p.h"
#include "sendsshpublickeyresponse.h"
#include "ec2instanceconnectrequest_p.h"

namespace QtAws {
namespace EC2InstanceConnect {

/*!
 * \class QtAws::EC2InstanceConnect::SendSSHPublicKeyRequest
 * \brief The SendSSHPublicKeyRequest class provides an interface for EC2InstanceConnect SendSSHPublicKey requests.
 *
 * \inmodule QtAwsEC2InstanceConnect
 *
 *  AWS EC2 Connect Service is a service that enables system administrators to publish temporary SSH keys to their EC2
 *  instances in order to establish connections to their instances without leaving a permanent authentication
 *
 * \sa EC2InstanceConnectClient::sendSSHPublicKey
 */

/*!
 * Constructs a copy of \a other.
 */
SendSSHPublicKeyRequest::SendSSHPublicKeyRequest(const SendSSHPublicKeyRequest &other)
    : EC2InstanceConnectRequest(new SendSSHPublicKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendSSHPublicKeyRequest object.
 */
SendSSHPublicKeyRequest::SendSSHPublicKeyRequest()
    : EC2InstanceConnectRequest(new SendSSHPublicKeyRequestPrivate(EC2InstanceConnectRequest::SendSSHPublicKeyAction, this))
{

}

/*!
 * \reimp
 */
bool SendSSHPublicKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendSSHPublicKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendSSHPublicKeyRequest::response(QNetworkReply * const reply) const
{
    return new SendSSHPublicKeyResponse(*this, reply);
}

/*!
 * \class QtAws::EC2InstanceConnect::SendSSHPublicKeyRequestPrivate
 * \brief The SendSSHPublicKeyRequestPrivate class provides private implementation for SendSSHPublicKeyRequest.
 * \internal
 *
 * \inmodule QtAwsEC2InstanceConnect
 */

/*!
 * Constructs a SendSSHPublicKeyRequestPrivate object for EC2InstanceConnect \a action,
 * with public implementation \a q.
 */
SendSSHPublicKeyRequestPrivate::SendSSHPublicKeyRequestPrivate(
    const EC2InstanceConnectRequest::Action action, SendSSHPublicKeyRequest * const q)
    : EC2InstanceConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendSSHPublicKeyRequest
 * class' copy constructor.
 */
SendSSHPublicKeyRequestPrivate::SendSSHPublicKeyRequestPrivate(
    const SendSSHPublicKeyRequestPrivate &other, SendSSHPublicKeyRequest * const q)
    : EC2InstanceConnectRequestPrivate(other, q)
{

}

} // namespace EC2InstanceConnect
} // namespace QtAws
