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

#include "unassignipv6addressesresponse.h"
#include "unassignipv6addressesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::UnassignIpv6AddressesResponse
 * \brief The UnassignIpv6AddressesResponse class provides an interace for EC2 UnassignIpv6Addresses responses.
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
 * \sa Ec2Client::unassignIpv6Addresses
 */

/*!
 * Constructs a UnassignIpv6AddressesResponse object for \a reply to \a request, with parent \a parent.
 */
UnassignIpv6AddressesResponse::UnassignIpv6AddressesResponse(
        const UnassignIpv6AddressesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new UnassignIpv6AddressesResponsePrivate(this), parent)
{
    setRequest(new UnassignIpv6AddressesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UnassignIpv6AddressesRequest * UnassignIpv6AddressesResponse::request() const
{
    Q_D(const UnassignIpv6AddressesResponse);
    return static_cast<const UnassignIpv6AddressesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 UnassignIpv6Addresses \a response.
 */
void UnassignIpv6AddressesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UnassignIpv6AddressesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::UnassignIpv6AddressesResponsePrivate
 * \brief The UnassignIpv6AddressesResponsePrivate class provides private implementation for UnassignIpv6AddressesResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a UnassignIpv6AddressesResponsePrivate object with public implementation \a q.
 */
UnassignIpv6AddressesResponsePrivate::UnassignIpv6AddressesResponsePrivate(
    UnassignIpv6AddressesResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 UnassignIpv6Addresses response element from \a xml.
 */
void UnassignIpv6AddressesResponsePrivate::parseUnassignIpv6AddressesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UnassignIpv6AddressesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws
