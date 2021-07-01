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

#include "allocatehostedconnectionresponse.h"
#include "allocatehostedconnectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::AllocateHostedConnectionResponse
 * \brief The AllocateHostedConnectionResponse class provides an interace for DirectConnect AllocateHostedConnection responses.
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
 * \sa DirectConnectClient::allocateHostedConnection
 */

/*!
 * Constructs a AllocateHostedConnectionResponse object for \a reply to \a request, with parent \a parent.
 */
AllocateHostedConnectionResponse::AllocateHostedConnectionResponse(
        const AllocateHostedConnectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new AllocateHostedConnectionResponsePrivate(this), parent)
{
    setRequest(new AllocateHostedConnectionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AllocateHostedConnectionRequest * AllocateHostedConnectionResponse::request() const
{
    Q_D(const AllocateHostedConnectionResponse);
    return static_cast<const AllocateHostedConnectionRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect AllocateHostedConnection \a response.
 */
void AllocateHostedConnectionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AllocateHostedConnectionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::AllocateHostedConnectionResponsePrivate
 * \brief The AllocateHostedConnectionResponsePrivate class provides private implementation for AllocateHostedConnectionResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a AllocateHostedConnectionResponsePrivate object with public implementation \a q.
 */
AllocateHostedConnectionResponsePrivate::AllocateHostedConnectionResponsePrivate(
    AllocateHostedConnectionResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect AllocateHostedConnection response element from \a xml.
 */
void AllocateHostedConnectionResponsePrivate::parseAllocateHostedConnectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AllocateHostedConnectionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
