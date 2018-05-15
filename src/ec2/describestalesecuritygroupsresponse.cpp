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

#include "describestalesecuritygroupsresponse.h"
#include "describestalesecuritygroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeStaleSecurityGroupsResponse
 * \brief The DescribeStaleSecurityGroupsResponse class provides an interace for EC2 DescribeStaleSecurityGroups responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeStaleSecurityGroups
 */

/*!
 * Constructs a DescribeStaleSecurityGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeStaleSecurityGroupsResponse::DescribeStaleSecurityGroupsResponse(
        const DescribeStaleSecurityGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeStaleSecurityGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeStaleSecurityGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeStaleSecurityGroupsRequest * DescribeStaleSecurityGroupsResponse::request() const
{
    Q_D(const DescribeStaleSecurityGroupsResponse);
    return static_cast<const DescribeStaleSecurityGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeStaleSecurityGroups \a response.
 */
void DescribeStaleSecurityGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeStaleSecurityGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeStaleSecurityGroupsResponsePrivate
 * \brief The DescribeStaleSecurityGroupsResponsePrivate class provides private implementation for DescribeStaleSecurityGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeStaleSecurityGroupsResponsePrivate object with public implementation \a q.
 */
DescribeStaleSecurityGroupsResponsePrivate::DescribeStaleSecurityGroupsResponsePrivate(
    DescribeStaleSecurityGroupsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeStaleSecurityGroups response element from \a xml.
 */
void DescribeStaleSecurityGroupsResponsePrivate::parseDescribeStaleSecurityGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeStaleSecurityGroupsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
