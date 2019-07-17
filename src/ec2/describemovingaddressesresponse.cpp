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

#include "describemovingaddressesresponse.h"
#include "describemovingaddressesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeMovingAddressesResponse
 * \brief The DescribeMovingAddressesResponse class provides an interace for EC2 DescribeMovingAddresses responses.
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
 * \sa Ec2Client::describeMovingAddresses
 */

/*!
 * Constructs a DescribeMovingAddressesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeMovingAddressesResponse::DescribeMovingAddressesResponse(
        const DescribeMovingAddressesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeMovingAddressesResponsePrivate(this), parent)
{
    setRequest(new DescribeMovingAddressesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeMovingAddressesRequest * DescribeMovingAddressesResponse::request() const
{
    Q_D(const DescribeMovingAddressesResponse);
    return static_cast<const DescribeMovingAddressesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeMovingAddresses \a response.
 */
void DescribeMovingAddressesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeMovingAddressesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeMovingAddressesResponsePrivate
 * \brief The DescribeMovingAddressesResponsePrivate class provides private implementation for DescribeMovingAddressesResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeMovingAddressesResponsePrivate object with public implementation \a q.
 */
DescribeMovingAddressesResponsePrivate::DescribeMovingAddressesResponsePrivate(
    DescribeMovingAddressesResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeMovingAddresses response element from \a xml.
 */
void DescribeMovingAddressesResponsePrivate::parseDescribeMovingAddressesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMovingAddressesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws
