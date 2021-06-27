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

#include "accepttransitgatewaymulticastdomainassociationsresponse.h"
#include "accepttransitgatewaymulticastdomainassociationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::AcceptTransitGatewayMulticastDomainAssociationsResponse
 * \brief The AcceptTransitGatewayMulticastDomainAssociationsResponse class provides an interace for EC2 AcceptTransitGatewayMulticastDomainAssociations responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the AWS Cloud. Using
 *  Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications faster. Amazon
 *  Virtual Private Cloud (Amazon VPC) enables you to provision a logically isolated section of the AWS Cloud where you can
 *  launch AWS resources in a virtual network that you've defined. Amazon Elastic Block Store (Amazon EBS) provides block
 *  level storage volumes for use with EC2 instances. EBS volumes are highly available and reliable storage volumes that can
 *  be attached to any running instance and used like a hard
 * 
 *  drive>
 * 
 *  To learn more, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  Amazon EC2: <a href="http://aws.amazon.com/ec2">AmazonEC2 product page</a>, <a
 *  href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon EBS: <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>, <a
 *  href="http://aws.amazon.com/documentation/ebs">Amazon EBS documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon VPC: <a href="http://aws.amazon.com/vpc">Amazon VPC product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpc">Amazon VPC documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  AWS VPN: <a href="http://aws.amazon.com/vpn">AWS VPN product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpn">AWS VPN documentation</a>
 *
 * \sa Ec2Client::acceptTransitGatewayMulticastDomainAssociations
 */

/*!
 * Constructs a AcceptTransitGatewayMulticastDomainAssociationsResponse object for \a reply to \a request, with parent \a parent.
 */
AcceptTransitGatewayMulticastDomainAssociationsResponse::AcceptTransitGatewayMulticastDomainAssociationsResponse(
        const AcceptTransitGatewayMulticastDomainAssociationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new AcceptTransitGatewayMulticastDomainAssociationsResponsePrivate(this), parent)
{
    setRequest(new AcceptTransitGatewayMulticastDomainAssociationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AcceptTransitGatewayMulticastDomainAssociationsRequest * AcceptTransitGatewayMulticastDomainAssociationsResponse::request() const
{
    return static_cast<const AcceptTransitGatewayMulticastDomainAssociationsRequest *>(Ec2Response::request());
}

/*!
 * \reimp
 * Parses a successful EC2 AcceptTransitGatewayMulticastDomainAssociations \a response.
 */
void AcceptTransitGatewayMulticastDomainAssociationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AcceptTransitGatewayMulticastDomainAssociationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::AcceptTransitGatewayMulticastDomainAssociationsResponsePrivate
 * \brief The AcceptTransitGatewayMulticastDomainAssociationsResponsePrivate class provides private implementation for AcceptTransitGatewayMulticastDomainAssociationsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a AcceptTransitGatewayMulticastDomainAssociationsResponsePrivate object with public implementation \a q.
 */
AcceptTransitGatewayMulticastDomainAssociationsResponsePrivate::AcceptTransitGatewayMulticastDomainAssociationsResponsePrivate(
    AcceptTransitGatewayMulticastDomainAssociationsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 AcceptTransitGatewayMulticastDomainAssociations response element from \a xml.
 */
void AcceptTransitGatewayMulticastDomainAssociationsResponsePrivate::parseAcceptTransitGatewayMulticastDomainAssociationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AcceptTransitGatewayMulticastDomainAssociationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws
