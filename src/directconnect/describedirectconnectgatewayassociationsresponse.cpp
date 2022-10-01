// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedirectconnectgatewayassociationsresponse.h"
#include "describedirectconnectgatewayassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectConnect {

/*!
 * \class QtAws::DirectConnect::DescribeDirectConnectGatewayAssociationsResponse
 * \brief The DescribeDirectConnectGatewayAssociationsResponse class provides an interace for DirectConnect DescribeDirectConnectGatewayAssociations responses.
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
 * \sa DirectConnectClient::describeDirectConnectGatewayAssociations
 */

/*!
 * Constructs a DescribeDirectConnectGatewayAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDirectConnectGatewayAssociationsResponse::DescribeDirectConnectGatewayAssociationsResponse(
        const DescribeDirectConnectGatewayAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeDirectConnectGatewayAssociationsResponsePrivate(this), parent)
{
    setRequest(new DescribeDirectConnectGatewayAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDirectConnectGatewayAssociationsRequest * DescribeDirectConnectGatewayAssociationsResponse::request() const
{
    Q_D(const DescribeDirectConnectGatewayAssociationsResponse);
    return static_cast<const DescribeDirectConnectGatewayAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DirectConnect DescribeDirectConnectGatewayAssociations \a response.
 */
void DescribeDirectConnectGatewayAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDirectConnectGatewayAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DirectConnect::DescribeDirectConnectGatewayAssociationsResponsePrivate
 * \brief The DescribeDirectConnectGatewayAssociationsResponsePrivate class provides private implementation for DescribeDirectConnectGatewayAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsDirectConnect
 */

/*!
 * Constructs a DescribeDirectConnectGatewayAssociationsResponsePrivate object with public implementation \a q.
 */
DescribeDirectConnectGatewayAssociationsResponsePrivate::DescribeDirectConnectGatewayAssociationsResponsePrivate(
    DescribeDirectConnectGatewayAssociationsResponse * const q) : DirectConnectResponsePrivate(q)
{

}

/*!
 * Parses a DirectConnect DescribeDirectConnectGatewayAssociations response element from \a xml.
 */
void DescribeDirectConnectGatewayAssociationsResponsePrivate::parseDescribeDirectConnectGatewayAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDirectConnectGatewayAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DirectConnect
} // namespace QtAws
