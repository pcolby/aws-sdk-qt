/*
    Copyright 2013-2018 Paul Colby

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

#include "describefleetinstancesresponse.h"
#include "describefleetinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeFleetInstancesResponse
 * \brief The DescribeFleetInstancesResponse class provides an interace for EC2 DescribeFleetInstances responses.
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
 * \sa Ec2Client::describeFleetInstances
 */

/*!
 * Constructs a DescribeFleetInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeFleetInstancesResponse::DescribeFleetInstancesResponse(
        const DescribeFleetInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeFleetInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeFleetInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeFleetInstancesRequest * DescribeFleetInstancesResponse::request() const
{
    Q_D(const DescribeFleetInstancesResponse);
    return static_cast<const DescribeFleetInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeFleetInstances \a response.
 */
void DescribeFleetInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeFleetInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeFleetInstancesResponsePrivate
 * \brief The DescribeFleetInstancesResponsePrivate class provides private implementation for DescribeFleetInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeFleetInstancesResponsePrivate object with public implementation \a q.
 */
DescribeFleetInstancesResponsePrivate::DescribeFleetInstancesResponsePrivate(
    DescribeFleetInstancesResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeFleetInstances response element from \a xml.
 */
void DescribeFleetInstancesResponsePrivate::parseDescribeFleetInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFleetInstancesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws
