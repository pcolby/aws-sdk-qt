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

#include "disassociatemacseckeyresponse.h"
#include "disassociatemacseckeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DisassociateMacSecKeyResponse
 * \brief The DisassociateMacSecKeyResponse class provides an interace for DirectConnect DisassociateMacSecKey responses.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard Ethernet fiber-optic
 *  cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router. With this connection
 *  in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon EC2 and Amazon S3) and to
 *  Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all AWS Regions
 *  except the China (Beijing) and (China) Ningxia Regions. AWS resources in the China Regions can only be accessed through
 *  locations associated with those
 *
 * \sa DirectConnectClient::disassociateMacSecKey
 */

/*!
 * Constructs a DisassociateMacSecKeyResponse object for \a reply to \a request, with parent \a parent.
 */
DisassociateMacSecKeyResponse::DisassociateMacSecKeyResponse(
        const DisassociateMacSecKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DisassociateMacSecKeyResponsePrivate(this), parent)
{
    setRequest(new DisassociateMacSecKeyRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DisassociateMacSecKeyRequest * DisassociateMacSecKeyResponse::request() const
{
    Q_D(const DisassociateMacSecKeyResponse);
    return static_cast<const DisassociateMacSecKeyRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DisassociateMacSecKey \a response.
 */
void DisassociateMacSecKeyResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DisassociateMacSecKeyResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DisassociateMacSecKeyResponsePrivate
 * \brief The DisassociateMacSecKeyResponsePrivate class provides private implementation for DisassociateMacSecKeyResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DisassociateMacSecKeyResponsePrivate object with public implementation \a q.
 */
DisassociateMacSecKeyResponsePrivate::DisassociateMacSecKeyResponsePrivate(
    DisassociateMacSecKeyResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DisassociateMacSecKey response element from \a xml.
 */
void DisassociateMacSecKeyResponsePrivate::parseDisassociateMacSecKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateMacSecKeyResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
