// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendserialconsolesshpublickeyrequest.h"
#include "sendserialconsolesshpublickeyrequest_p.h"
#include "sendserialconsolesshpublickeyresponse.h"
#include "ec2instanceconnectrequest_p.h"

namespace QtAws {
namespace Ec2InstanceConnect {

/*!
 * \class QtAws::Ec2InstanceConnect::SendSerialConsoleSSHPublicKeyRequest
 * \brief The SendSerialConsoleSSHPublicKeyRequest class provides an interface for Ec2InstanceConnect SendSerialConsoleSSHPublicKey requests.
 *
 * \inmodule QtAwsEc2InstanceConnect
 *
 *  Amazon EC2 Instance Connect enables system administrators to publish one-time use SSH public keys to EC2, providing
 *  users a simple and secure way to connect to their
 *
 * \sa Ec2InstanceConnectClient::sendSerialConsoleSSHPublicKey
 */

/*!
 * Constructs a copy of \a other.
 */
SendSerialConsoleSSHPublicKeyRequest::SendSerialConsoleSSHPublicKeyRequest(const SendSerialConsoleSSHPublicKeyRequest &other)
    : Ec2InstanceConnectRequest(new SendSerialConsoleSSHPublicKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendSerialConsoleSSHPublicKeyRequest object.
 */
SendSerialConsoleSSHPublicKeyRequest::SendSerialConsoleSSHPublicKeyRequest()
    : Ec2InstanceConnectRequest(new SendSerialConsoleSSHPublicKeyRequestPrivate(Ec2InstanceConnectRequest::SendSerialConsoleSSHPublicKeyAction, this))
{

}

/*!
 * \reimp
 */
bool SendSerialConsoleSSHPublicKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendSerialConsoleSSHPublicKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendSerialConsoleSSHPublicKeyRequest::response(QNetworkReply * const reply) const
{
    return new SendSerialConsoleSSHPublicKeyResponse(*this, reply);
}

/*!
 * \class QtAws::Ec2InstanceConnect::SendSerialConsoleSSHPublicKeyRequestPrivate
 * \brief The SendSerialConsoleSSHPublicKeyRequestPrivate class provides private implementation for SendSerialConsoleSSHPublicKeyRequest.
 * \internal
 *
 * \inmodule QtAwsEc2InstanceConnect
 */

/*!
 * Constructs a SendSerialConsoleSSHPublicKeyRequestPrivate object for Ec2InstanceConnect \a action,
 * with public implementation \a q.
 */
SendSerialConsoleSSHPublicKeyRequestPrivate::SendSerialConsoleSSHPublicKeyRequestPrivate(
    const Ec2InstanceConnectRequest::Action action, SendSerialConsoleSSHPublicKeyRequest * const q)
    : Ec2InstanceConnectRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendSerialConsoleSSHPublicKeyRequest
 * class' copy constructor.
 */
SendSerialConsoleSSHPublicKeyRequestPrivate::SendSerialConsoleSSHPublicKeyRequestPrivate(
    const SendSerialConsoleSSHPublicKeyRequestPrivate &other, SendSerialConsoleSSHPublicKeyRequest * const q)
    : Ec2InstanceConnectRequestPrivate(other, q)
{

}

} // namespace Ec2InstanceConnect
} // namespace QtAws
