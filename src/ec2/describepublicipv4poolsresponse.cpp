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

#include "describepublicipv4poolsresponse.h"
#include "describepublicipv4poolsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribePublicIpv4PoolsResponse
 * \brief The DescribePublicIpv4PoolsResponse class provides an interace for EC2 DescribePublicIpv4Pools responses.
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
 *  To learn more, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  Amazon EC2: <a href="http://aws.amazon.com/ec2">Amazon EC2 product page</a>, <a
 *  href="http://aws.amazon.com/documentation/ec2">Amazon EC2 documentation</a>
 * 
 *  </p </li> <li>
 * 
 *  Amazon EBS: <a href="http://aws.amazon.com/ebs">Amazon EBS product page</a>, <a
 *  href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/AmazonEBS.html">Amazon EBS documentation</a>
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
 * \sa Ec2Client::describePublicIpv4Pools
 */

/*!
 * Constructs a DescribePublicIpv4PoolsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribePublicIpv4PoolsResponse::DescribePublicIpv4PoolsResponse(
        const DescribePublicIpv4PoolsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribePublicIpv4PoolsResponsePrivate(this), parent)
{
    setRequest(new DescribePublicIpv4PoolsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribePublicIpv4PoolsRequest * DescribePublicIpv4PoolsResponse::request() const
{
    Q_D(const DescribePublicIpv4PoolsResponse);
    return static_cast<const DescribePublicIpv4PoolsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribePublicIpv4Pools \a response.
 */
void DescribePublicIpv4PoolsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePublicIpv4PoolsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribePublicIpv4PoolsResponsePrivate
 * \brief The DescribePublicIpv4PoolsResponsePrivate class provides private implementation for DescribePublicIpv4PoolsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribePublicIpv4PoolsResponsePrivate object with public implementation \a q.
 */
DescribePublicIpv4PoolsResponsePrivate::DescribePublicIpv4PoolsResponsePrivate(
    DescribePublicIpv4PoolsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribePublicIpv4Pools response element from \a xml.
 */
void DescribePublicIpv4PoolsResponsePrivate::parseDescribePublicIpv4PoolsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePublicIpv4PoolsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws
