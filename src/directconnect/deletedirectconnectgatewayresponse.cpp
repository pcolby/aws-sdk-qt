// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedirectconnectgatewayresponse.h"
#include "deletedirectconnectgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DeleteDirectConnectGatewayResponse
 * \brief The DeleteDirectConnectGatewayResponse class provides an interace for DirectConnect DeleteDirectConnectGateway responses.
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
 * \sa DirectConnectClient::deleteDirectConnectGateway
 */

/*!
 * Constructs a DeleteDirectConnectGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDirectConnectGatewayResponse::DeleteDirectConnectGatewayResponse(
        const DeleteDirectConnectGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DeleteDirectConnectGatewayResponsePrivate(this), parent)
{
    setRequest(new DeleteDirectConnectGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDirectConnectGatewayRequest * DeleteDirectConnectGatewayResponse::request() const
{
    Q_D(const DeleteDirectConnectGatewayResponse);
    return static_cast<const DeleteDirectConnectGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DeleteDirectConnectGateway \a response.
 */
void DeleteDirectConnectGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDirectConnectGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DeleteDirectConnectGatewayResponsePrivate
 * \brief The DeleteDirectConnectGatewayResponsePrivate class provides private implementation for DeleteDirectConnectGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DeleteDirectConnectGatewayResponsePrivate object with public implementation \a q.
 */
DeleteDirectConnectGatewayResponsePrivate::DeleteDirectConnectGatewayResponsePrivate(
    DeleteDirectConnectGatewayResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DeleteDirectConnectGateway response element from \a xml.
 */
void DeleteDirectConnectGatewayResponsePrivate::parseDeleteDirectConnectGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDirectConnectGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
