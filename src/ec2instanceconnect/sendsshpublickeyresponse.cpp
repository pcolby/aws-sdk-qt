// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendsshpublickeyresponse.h"
#include "sendsshpublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ec2InstanceConnect {

/*!
 * \class QtAws::Ec2InstanceConnect::SendSSHPublicKeyResponse
 * \brief The SendSSHPublicKeyResponse class provides an interace for Ec2InstanceConnect SendSSHPublicKey responses.
 *
 * \inmodule QtAwsEc2InstanceConnect
 *
 *  Amazon EC2 Instance Connect enables system administrators to publish one-time use SSH public keys to EC2, providing
 *  users a simple and secure way to connect to their
 *
 * \sa Ec2InstanceConnectClient::sendSSHPublicKey
 */

/*!
 * Constructs a SendSSHPublicKeyResponse object for \a reply to \a request, with parent \a parent.
 */
SendSSHPublicKeyResponse::SendSSHPublicKeyResponse(
        const SendSSHPublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2InstanceConnectResponse(new SendSSHPublicKeyResponsePrivate(this), parent)
{
    setRequest(new SendSSHPublicKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendSSHPublicKeyRequest * SendSSHPublicKeyResponse::request() const
{
    Q_D(const SendSSHPublicKeyResponse);
    return static_cast<const SendSSHPublicKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ec2InstanceConnect SendSSHPublicKey \a response.
 */
void SendSSHPublicKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendSSHPublicKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ec2InstanceConnect::SendSSHPublicKeyResponsePrivate
 * \brief The SendSSHPublicKeyResponsePrivate class provides private implementation for SendSSHPublicKeyResponse.
 * \internal
 *
 * \inmodule QtAwsEc2InstanceConnect
 */

/*!
 * Constructs a SendSSHPublicKeyResponsePrivate object with public implementation \a q.
 */
SendSSHPublicKeyResponsePrivate::SendSSHPublicKeyResponsePrivate(
    SendSSHPublicKeyResponse * const q) : Ec2InstanceConnectResponsePrivate(q)
{

}

/*!
 * Parses a Ec2InstanceConnect SendSSHPublicKey response element from \a xml.
 */
void SendSSHPublicKeyResponsePrivate::parseSendSSHPublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendSSHPublicKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ec2InstanceConnect
} // namespace QtAws
