/*
    Copyright 2013-2021 Paul Colby

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
namespace Ec2InstanceConnect {

/*!
 * \class QtAws::Ec2InstanceConnect::SendSSHPublicKeyRequest
 * \brief The SendSSHPublicKeyRequest class provides an interface for Ec2InstanceConnect SendSSHPublicKey requests.
 *
 * \inmodule QtAwsEc2InstanceConnect
 *
 *  Amazon EC2 Instance Connect enables system administrators to publish one-time use SSH public keys to EC2, providing
 *  users a simple and secure way to connect to their
 *
 * \sa Ec2InstanceConnectClient::sendSSHPublicKey
 */

/*!
 * Constructs a copy of \a other.
 */
SendSSHPublicKeyRequest::SendSSHPublicKeyRequest(const SendSSHPublicKeyRequest &other)
    : Ec2InstanceConnectRequest(new SendSSHPublicKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendSSHPublicKeyRequest object.
 */
SendSSHPublicKeyRequest::SendSSHPublicKeyRequest()
    : Ec2InstanceConnectRequest(new SendSSHPublicKeyRequestPrivate(Ec2InstanceConnectRequest::SendSSHPublicKeyAction, this))
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
 * \class QtAws::Ec2InstanceConnect::SendSSHPublicKeyRequestPrivate
 * \brief The SendSSHPublicKeyRequestPrivate class provides private implementation for SendSSHPublicKeyRequest.
 * \internal
 *
 * \inmodule QtAwsEc2InstanceConnect
 */

/*!
 * Constructs a SendSSHPublicKeyRequestPrivate object for Ec2InstanceConnect \a action,
 * with public implementation \a q.
 */
SendSSHPublicKeyRequestPrivate::SendSSHPublicKeyRequestPrivate(
    const Ec2InstanceConnectRequest::Action action, SendSSHPublicKeyRequest * const q)
    : Ec2InstanceConnectRequestPrivate(action, q)
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
    : Ec2InstanceConnectRequestPrivate(other, q)
{

}

} // namespace Ec2InstanceConnect
} // namespace QtAws
