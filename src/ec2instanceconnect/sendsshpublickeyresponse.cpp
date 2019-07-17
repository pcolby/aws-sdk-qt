/*
    Copyright 2013-2019 Paul Colby

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
namespace EC2InstanceConnect {

/*!
 * \class QtAws::EC2InstanceConnect::SendSSHPublicKeyResponse
 * \brief The SendSSHPublicKeyResponse class provides an interace for EC2InstanceConnect SendSSHPublicKey responses.
 *
 * \inmodule QtAwsEC2InstanceConnect
 *
 *  AWS EC2 Connect Service is a service that enables system administrators to publish temporary SSH keys to their EC2
 *  instances in order to establish connections to their instances without leaving a permanent authentication
 *
 * \sa EC2InstanceConnectClient::sendSSHPublicKey
 */

/*!
 * Constructs a SendSSHPublicKeyResponse object for \a reply to \a request, with parent \a parent.
 */
SendSSHPublicKeyResponse::SendSSHPublicKeyResponse(
        const SendSSHPublicKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2InstanceConnectResponse(new SendSSHPublicKeyResponsePrivate(this), parent)
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
 * Parses a successful EC2InstanceConnect SendSSHPublicKey \a response.
 */
void SendSSHPublicKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SendSSHPublicKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2InstanceConnect::SendSSHPublicKeyResponsePrivate
 * \brief The SendSSHPublicKeyResponsePrivate class provides private implementation for SendSSHPublicKeyResponse.
 * \internal
 *
 * \inmodule QtAwsEC2InstanceConnect
 */

/*!
 * Constructs a SendSSHPublicKeyResponsePrivate object with public implementation \a q.
 */
SendSSHPublicKeyResponsePrivate::SendSSHPublicKeyResponsePrivate(
    SendSSHPublicKeyResponse * const q) : EC2InstanceConnectResponsePrivate(q)
{

}

/*!
 * Parses a EC2InstanceConnect SendSSHPublicKey response element from \a xml.
 */
void SendSSHPublicKeyResponsePrivate::parseSendSSHPublicKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SendSSHPublicKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2InstanceConnect
} // namespace QtAws
