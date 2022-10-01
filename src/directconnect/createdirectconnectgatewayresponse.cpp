// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdirectconnectgatewayresponse.h"
#include "createdirectconnectgatewayresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::CreateDirectConnectGatewayResponse
 * \brief The CreateDirectConnectGatewayResponse class provides an interace for DirectConnect CreateDirectConnectGateway responses.
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
 * \sa DirectConnectClient::createDirectConnectGateway
 */

/*!
 * Constructs a CreateDirectConnectGatewayResponse object for \a reply to \a request, with parent \a parent.
 */
CreateDirectConnectGatewayResponse::CreateDirectConnectGatewayResponse(
        const CreateDirectConnectGatewayRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new CreateDirectConnectGatewayResponsePrivate(this), parent)
{
    setRequest(new CreateDirectConnectGatewayRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateDirectConnectGatewayRequest * CreateDirectConnectGatewayResponse::request() const
{
    Q_D(const CreateDirectConnectGatewayResponse);
    return static_cast<const CreateDirectConnectGatewayRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect CreateDirectConnectGateway \a response.
 */
void CreateDirectConnectGatewayResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateDirectConnectGatewayResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::CreateDirectConnectGatewayResponsePrivate
 * \brief The CreateDirectConnectGatewayResponsePrivate class provides private implementation for CreateDirectConnectGatewayResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a CreateDirectConnectGatewayResponsePrivate object with public implementation \a q.
 */
CreateDirectConnectGatewayResponsePrivate::CreateDirectConnectGatewayResponsePrivate(
    CreateDirectConnectGatewayResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect CreateDirectConnectGateway response element from \a xml.
 */
void CreateDirectConnectGatewayResponsePrivate::parseCreateDirectConnectGatewayResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDirectConnectGatewayResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
