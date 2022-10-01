// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
