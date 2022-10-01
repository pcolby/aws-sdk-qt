// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedirectconnectgatewayassociationresponse.h"
#include "updatedirectconnectgatewayassociationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::UpdateDirectConnectGatewayAssociationResponse
 * \brief The UpdateDirectConnectGatewayAssociationResponse class provides an interace for DirectConnect UpdateDirectConnectGatewayAssociation responses.
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
 * \sa DirectConnectClient::updateDirectConnectGatewayAssociation
 */

/*!
 * Constructs a UpdateDirectConnectGatewayAssociationResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDirectConnectGatewayAssociationResponse::UpdateDirectConnectGatewayAssociationResponse(
        const UpdateDirectConnectGatewayAssociationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new UpdateDirectConnectGatewayAssociationResponsePrivate(this), parent)
{
    setRequest(new UpdateDirectConnectGatewayAssociationRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDirectConnectGatewayAssociationRequest * UpdateDirectConnectGatewayAssociationResponse::request() const
{
    Q_D(const UpdateDirectConnectGatewayAssociationResponse);
    return static_cast<const UpdateDirectConnectGatewayAssociationRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect UpdateDirectConnectGatewayAssociation \a response.
 */
void UpdateDirectConnectGatewayAssociationResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDirectConnectGatewayAssociationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::UpdateDirectConnectGatewayAssociationResponsePrivate
 * \brief The UpdateDirectConnectGatewayAssociationResponsePrivate class provides private implementation for UpdateDirectConnectGatewayAssociationResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a UpdateDirectConnectGatewayAssociationResponsePrivate object with public implementation \a q.
 */
UpdateDirectConnectGatewayAssociationResponsePrivate::UpdateDirectConnectGatewayAssociationResponsePrivate(
    UpdateDirectConnectGatewayAssociationResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect UpdateDirectConnectGatewayAssociation response element from \a xml.
 */
void UpdateDirectConnectGatewayAssociationResponsePrivate::parseUpdateDirectConnectGatewayAssociationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDirectConnectGatewayAssociationResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
