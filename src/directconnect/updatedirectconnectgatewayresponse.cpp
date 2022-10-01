// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedirectconnectgatewayresponse.h"
#include "updatedirectconnectgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::UpdateDirectConnectGatewayResponse
 * \brief The UpdateDirectConnectGatewayResponse class provides an interace for DirectConnect UpdateDirectConnectGateway responses.
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
 * \sa DirectConnectClient::updateDirectConnectGateway
 */

/*!
 * Constructs a UpdateDirectConnectGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDirectConnectGatewayResponse::UpdateDirectConnectGatewayResponse(
        const UpdateDirectConnectGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new UpdateDirectConnectGatewayResponsePrivate(this), parent)
{
    setRequest(new UpdateDirectConnectGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDirectConnectGatewayRequest * UpdateDirectConnectGatewayResponse::request() const
{
    Q_D(const UpdateDirectConnectGatewayResponse);
    return static_cast<const UpdateDirectConnectGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect UpdateDirectConnectGateway \a response.
 */
void UpdateDirectConnectGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDirectConnectGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::UpdateDirectConnectGatewayResponsePrivate
 * \brief The UpdateDirectConnectGatewayResponsePrivate class provides private implementation for UpdateDirectConnectGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a UpdateDirectConnectGatewayResponsePrivate object with public implementation \a q.
 */
UpdateDirectConnectGatewayResponsePrivate::UpdateDirectConnectGatewayResponsePrivate(
    UpdateDirectConnectGatewayResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect UpdateDirectConnectGateway response element from \a xml.
 */
void UpdateDirectConnectGatewayResponsePrivate::parseUpdateDirectConnectGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDirectConnectGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
