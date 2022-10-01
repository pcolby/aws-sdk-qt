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
