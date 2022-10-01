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

#include "describevpcendpointconnectionnotificationsresponse.h"
#include "describevpcendpointconnectionnotificationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Ec2 {

/*!
 * \class QtAws::Ec2::DescribeVpcEndpointConnectionNotificationsResponse
 * \brief The DescribeVpcEndpointConnectionNotificationsResponse class provides an interace for Ec2 DescribeVpcEndpointConnectionNotifications responses.
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
 * \sa Ec2Client::describeVpcEndpointConnectionNotifications
 */

/*!
 * Constructs a DescribeVpcEndpointConnectionNotificationsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeVpcEndpointConnectionNotificationsResponse::DescribeVpcEndpointConnectionNotificationsResponse(
        const DescribeVpcEndpointConnectionNotificationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeVpcEndpointConnectionNotificationsResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcEndpointConnectionNotificationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeVpcEndpointConnectionNotificationsRequest * DescribeVpcEndpointConnectionNotificationsResponse::request() const
{
    Q_D(const DescribeVpcEndpointConnectionNotificationsResponse);
    return static_cast<const DescribeVpcEndpointConnectionNotificationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Ec2 DescribeVpcEndpointConnectionNotifications \a response.
 */
void DescribeVpcEndpointConnectionNotificationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeVpcEndpointConnectionNotificationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Ec2::DescribeVpcEndpointConnectionNotificationsResponsePrivate
 * \brief The DescribeVpcEndpointConnectionNotificationsResponsePrivate class provides private implementation for DescribeVpcEndpointConnectionNotificationsResponse.
 * \internal
 *
 * \inmodule QtAwsEc2
 */

/*!
 * Constructs a DescribeVpcEndpointConnectionNotificationsResponsePrivate object with public implementation \a q.
 */
DescribeVpcEndpointConnectionNotificationsResponsePrivate::DescribeVpcEndpointConnectionNotificationsResponsePrivate(
    DescribeVpcEndpointConnectionNotificationsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a Ec2 DescribeVpcEndpointConnectionNotifications response element from \a xml.
 */
void DescribeVpcEndpointConnectionNotificationsResponsePrivate::parseDescribeVpcEndpointConnectionNotificationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcEndpointConnectionNotificationsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Ec2
} // namespace QtAws
