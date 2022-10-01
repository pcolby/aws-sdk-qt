// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepublicipv4poolsresponse.h"
#include "describepublicipv4poolsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::DescribePublicIpv4PoolsResponse
 * \brief The DescribePublicIpv4PoolsResponse class provides an interace for Ec2 DescribePublicIpv4Pools responses.
 *
 * \inmodule QtAwsEc2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides secure and resizable computing capacity in the Amazon Web Services
 *  Cloud. Using Amazon EC2 eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *  faster. Amazon Virtual Private Cloud (Amazon VPC) enables you to provision a logically isolated section of the Amazon
 *  Web Services Cloud where you can launch Amazon Web Services resources in a virtual network that you've defined. Amazon
 *  Elastic Block Store (Amazon EBS) provides block level storage volumes for use with EC2 instances. EBS volumes are highly
 *  available and reliable storage volumes that can be attached to any running instance and used like a hard
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
 *  Amazon Web Services VPN: <a href="http://aws.amazon.com/vpn">Amazon Web Services VPN product page</a>, <a
 *  href="http://aws.amazon.com/documentation/vpn">Amazon Web Services VPN documentation</a>
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
 * Parses a successful Ec2 DescribePublicIpv4Pools \a response.
 */
void DescribePublicIpv4PoolsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribePublicIpv4PoolsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ec2::DescribePublicIpv4PoolsResponsePrivate
 * \brief The DescribePublicIpv4PoolsResponsePrivate class provides private implementation for DescribePublicIpv4PoolsResponse.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a DescribePublicIpv4PoolsResponsePrivate object with public implementation \a q.
 */
DescribePublicIpv4PoolsResponsePrivate::DescribePublicIpv4PoolsResponsePrivate(
    DescribePublicIpv4PoolsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a Ec2 DescribePublicIpv4Pools response element from \a xml.
 */
void DescribePublicIpv4PoolsResponsePrivate::parseDescribePublicIpv4PoolsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePublicIpv4PoolsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ec2
} // namespace QtAws
