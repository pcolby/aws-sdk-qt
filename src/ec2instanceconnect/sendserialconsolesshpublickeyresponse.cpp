// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendserialconsolesshpublickeyresponse.h"
#include "sendserialconsolesshpublickeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ec2InstanceConnect {

/*!
 * \class QtAws::Ec2InstanceConnect::SendSerialConsoleSSHPublicKeyResponse
 * \brief The SendSerialConsoleSSHPublicKeyResponse class provides an interace for Ec2InstanceConnect SendSerialConsoleSSHPublicKey responses.
 *
 * \inmodule QtAwsEc2InstanceConnect
 *
 *  Amazon EC2 Instance Connect enables system administrators to publish one-time use SSH public keys to EC2, providing
 *  users a simple and secure way to connect to their
 *
 * \sa Ec2InstanceConnectClient::sendSerialConsoleSSHPublicKey
 */

/*!
 * Constructs a SendSerialConsoleSSHPublicKeyResponse object for \a reply to \a request, with parent \a parent.
 */
SendSerialConsoleSSHPublicKeyResponse::SendSerialConsoleSSHPublicKeyResponse(
        const SendSerialConsoleSSHPublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2InstanceConnectResponse(new SendSerialConsoleSSHPublicKeyResponsePrivate(this), parent)
{
    setRequest(new SendSerialConsoleSSHPublicKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SendSerialConsoleSSHPublicKeyRequest * SendSerialConsoleSSHPublicKeyResponse::request() const
{
    Q_D(const SendSerialConsoleSSHPublicKeyResponse);
    return static_cast<const SendSerialConsoleSSHPublicKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ec2InstanceConnect SendSerialConsoleSSHPublicKey \a response.
 */
void SendSerialConsoleSSHPublicKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendSerialConsoleSSHPublicKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ec2InstanceConnect::SendSerialConsoleSSHPublicKeyResponsePrivate
 * \brief The SendSerialConsoleSSHPublicKeyResponsePrivate class provides private implementation for SendSerialConsoleSSHPublicKeyResponse.
 * \internal
 *
 * \inmodule QtAwsEc2InstanceConnect
 */

/*!
 * Constructs a SendSerialConsoleSSHPublicKeyResponsePrivate object with public implementation \a q.
 */
SendSerialConsoleSSHPublicKeyResponsePrivate::SendSerialConsoleSSHPublicKeyResponsePrivate(
    SendSerialConsoleSSHPublicKeyResponse * const q) : Ec2InstanceConnectResponsePrivate(q)
{

}

/*!
 * Parses a Ec2InstanceConnect SendSerialConsoleSSHPublicKey response element from \a xml.
 */
void SendSerialConsoleSSHPublicKeyResponsePrivate::parseSendSerialConsoleSSHPublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendSerialConsoleSSHPublicKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ec2InstanceConnect
} // namespace QtAws
