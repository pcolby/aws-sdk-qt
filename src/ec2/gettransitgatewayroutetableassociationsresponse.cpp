/*
    Copyright 2013-2019 Paul Colby

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

#include "gettransitgatewayroutetableassociationsresponse.h"
#include "gettransitgatewayroutetableassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::GetTransitGatewayRouteTableAssociationsResponse
 * \brief The GetTransitGatewayRouteTableAssociationsResponse class provides an interace for EC2 GetTransitGatewayRouteTableAssociations responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the AWS cloud. Using
 *  Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications
 * 
 *  faster>
 * 
 *  To learn more about Amazon EC2, Amazon EBS, and Amazon VPC, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="http://aws.amazon.com/ec2">Amazon EC2 product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/vpc">Amazon VPC product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a>
 *
 * \sa Ec2Client::getTransitGatewayRouteTableAssociations
 */

/*!
 * Constructs a GetTransitGatewayRouteTableAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
GetTransitGatewayRouteTableAssociationsResponse::GetTransitGatewayRouteTableAssociationsResponse(
        const GetTransitGatewayRouteTableAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new GetTransitGatewayRouteTableAssociationsResponsePrivate(this), parent)
{
    setRequest(new GetTransitGatewayRouteTableAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetTransitGatewayRouteTableAssociationsRequest * GetTransitGatewayRouteTableAssociationsResponse::request() const
{
    Q_D(const GetTransitGatewayRouteTableAssociationsResponse);
    return static_cast<const GetTransitGatewayRouteTableAssociationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 GetTransitGatewayRouteTableAssociations \a response.
 */
void GetTransitGatewayRouteTableAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetTransitGatewayRouteTableAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::GetTransitGatewayRouteTableAssociationsResponsePrivate
 * \brief The GetTransitGatewayRouteTableAssociationsResponsePrivate class provides private implementation for GetTransitGatewayRouteTableAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a GetTransitGatewayRouteTableAssociationsResponsePrivate object with public implementation \a q.
 */
GetTransitGatewayRouteTableAssociationsResponsePrivate::GetTransitGatewayRouteTableAssociationsResponsePrivate(
    GetTransitGatewayRouteTableAssociationsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 GetTransitGatewayRouteTableAssociations response element from \a xml.
 */
void GetTransitGatewayRouteTableAssociationsResponsePrivate::parseGetTransitGatewayRouteTableAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetTransitGatewayRouteTableAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws
