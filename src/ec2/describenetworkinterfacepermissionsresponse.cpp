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

#include "describenetworkinterfacepermissionsresponse.h"
#include "describenetworkinterfacepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeNetworkInterfacePermissionsResponse
 * \brief The DescribeNetworkInterfacePermissionsResponse class provides an interace for EC2 DescribeNetworkInterfacePermissions responses.
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
 * \sa Ec2Client::describeNetworkInterfacePermissions
 */

/*!
 * Constructs a DescribeNetworkInterfacePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeNetworkInterfacePermissionsResponse::DescribeNetworkInterfacePermissionsResponse(
        const DescribeNetworkInterfacePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeNetworkInterfacePermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeNetworkInterfacePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeNetworkInterfacePermissionsRequest * DescribeNetworkInterfacePermissionsResponse::request() const
{
    Q_D(const DescribeNetworkInterfacePermissionsResponse);
    return static_cast<const DescribeNetworkInterfacePermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeNetworkInterfacePermissions \a response.
 */
void DescribeNetworkInterfacePermissionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeNetworkInterfacePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeNetworkInterfacePermissionsResponsePrivate
 * \brief The DescribeNetworkInterfacePermissionsResponsePrivate class provides private implementation for DescribeNetworkInterfacePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeNetworkInterfacePermissionsResponsePrivate object with public implementation \a q.
 */
DescribeNetworkInterfacePermissionsResponsePrivate::DescribeNetworkInterfacePermissionsResponsePrivate(
    DescribeNetworkInterfacePermissionsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeNetworkInterfacePermissions response element from \a xml.
 */
void DescribeNetworkInterfacePermissionsResponsePrivate::parseDescribeNetworkInterfacePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNetworkInterfacePermissionsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace EC2
} // namespace QtAws
