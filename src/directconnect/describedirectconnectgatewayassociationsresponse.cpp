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
 *  AWS Direct Connect links your internal network to an AWS Direct Connect location over a standard Ethernet fiber-optic
 *  cable. One end of the cable is connected to your router, the other to an AWS Direct Connect router. With this connection
 *  in place, you can create virtual interfaces directly to the AWS cloud (for example, to Amazon EC2 and Amazon S3) and to
 *  Amazon VPC, bypassing Internet service providers in your network path. A connection provides access to all AWS Regions
 *  except the China (Beijing) and (China) Ningxia Regions. AWS resources in the China Regions can only be accessed through
 *  locations associated with those
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
