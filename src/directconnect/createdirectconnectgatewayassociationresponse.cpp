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

#include "createdirectconnectgatewayassociationresponse.h"
#include "createdirectconnectgatewayassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreateDirectConnectGatewayAssociationResponse
 * \brief The CreateDirectConnectGatewayAssociationResponse class provides an interace for DirectConnect CreateDirectConnectGatewayAssociation responses.
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
 * \sa DirectConnectClient::createDirectConnectGatewayAssociation
 */

/*!
 * Constructs a CreateDirectConnectGatewayAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDirectConnectGatewayAssociationResponse::CreateDirectConnectGatewayAssociationResponse(
        const CreateDirectConnectGatewayAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new CreateDirectConnectGatewayAssociationResponsePrivate(this), parent)
{
    setRequest(new CreateDirectConnectGatewayAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDirectConnectGatewayAssociationRequest * CreateDirectConnectGatewayAssociationResponse::request() const
{
    Q_D(const CreateDirectConnectGatewayAssociationResponse);
    return static_cast<const CreateDirectConnectGatewayAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect CreateDirectConnectGatewayAssociation \a response.
 */
void CreateDirectConnectGatewayAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDirectConnectGatewayAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::CreateDirectConnectGatewayAssociationResponsePrivate
 * \brief The CreateDirectConnectGatewayAssociationResponsePrivate class provides private implementation for CreateDirectConnectGatewayAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreateDirectConnectGatewayAssociationResponsePrivate object with public implementation \a q.
 */
CreateDirectConnectGatewayAssociationResponsePrivate::CreateDirectConnectGatewayAssociationResponsePrivate(
    CreateDirectConnectGatewayAssociationResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect CreateDirectConnectGatewayAssociation response element from \a xml.
 */
void CreateDirectConnectGatewayAssociationResponsePrivate::parseCreateDirectConnectGatewayAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDirectConnectGatewayAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
