// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedirectconnectgatewayassociationresponse.h"
#include "deletedirectconnectgatewayassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DeleteDirectConnectGatewayAssociationResponse
 * \brief The DeleteDirectConnectGatewayAssociationResponse class provides an interace for DirectConnect DeleteDirectConnectGatewayAssociation responses.
 *
 * \inmodule QtAwsDirectConnect
 *
 *  Direct Connect links your internal network to an Direct Connect location over a standard Ethernet fiber-optic cable. One
 *  end of the cable is connected to your router, the other to an Direct Connect router. With this connection in place, you
 *  can create virtual interfaces directly to the Amazon Web Services Cloud (for example, to Amazon EC2 and Amazon S3) and
 *  to Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all Amazon Web
 *  Services Regions except the China (Beijing) and (China) Ningxia Regions. Amazon Web Services resources in the China
 *  Regions can only be accessed through locations associated with those
 *
 * \sa DirectConnectClient::deleteDirectConnectGatewayAssociation
 */

/*!
 * Constructs a DeleteDirectConnectGatewayAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDirectConnectGatewayAssociationResponse::DeleteDirectConnectGatewayAssociationResponse(
        const DeleteDirectConnectGatewayAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DeleteDirectConnectGatewayAssociationResponsePrivate(this), parent)
{
    setRequest(new DeleteDirectConnectGatewayAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDirectConnectGatewayAssociationRequest * DeleteDirectConnectGatewayAssociationResponse::request() const
{
    Q_D(const DeleteDirectConnectGatewayAssociationResponse);
    return static_cast<const DeleteDirectConnectGatewayAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DeleteDirectConnectGatewayAssociation \a response.
 */
void DeleteDirectConnectGatewayAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDirectConnectGatewayAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DeleteDirectConnectGatewayAssociationResponsePrivate
 * \brief The DeleteDirectConnectGatewayAssociationResponsePrivate class provides private implementation for DeleteDirectConnectGatewayAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DeleteDirectConnectGatewayAssociationResponsePrivate object with public implementation \a q.
 */
DeleteDirectConnectGatewayAssociationResponsePrivate::DeleteDirectConnectGatewayAssociationResponsePrivate(
    DeleteDirectConnectGatewayAssociationResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DeleteDirectConnectGatewayAssociation response element from \a xml.
 */
void DeleteDirectConnectGatewayAssociationResponsePrivate::parseDeleteDirectConnectGatewayAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDirectConnectGatewayAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
