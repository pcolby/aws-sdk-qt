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

#include "describevpcendpointservicepermissionsresponse.h"
#include "describevpcendpointservicepermissionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeVpcEndpointServicePermissionsResponse
 * \brief The DescribeVpcEndpointServicePermissionsResponse class provides an interace for EC2 DescribeVpcEndpointServicePermissions responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeVpcEndpointServicePermissions
 */

/*!
 * Constructs a DescribeVpcEndpointServicePermissionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeVpcEndpointServicePermissionsResponse::DescribeVpcEndpointServicePermissionsResponse(
        const DescribeVpcEndpointServicePermissionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeVpcEndpointServicePermissionsResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcEndpointServicePermissionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeVpcEndpointServicePermissionsRequest * DescribeVpcEndpointServicePermissionsResponse::request() const
{
    Q_D(const DescribeVpcEndpointServicePermissionsResponse);
    return static_cast<const DescribeVpcEndpointServicePermissionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeVpcEndpointServicePermissions \a response.
 */
void DescribeVpcEndpointServicePermissionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeVpcEndpointServicePermissionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeVpcEndpointServicePermissionsResponsePrivate
 * \brief The DescribeVpcEndpointServicePermissionsResponsePrivate class provides private implementation for DescribeVpcEndpointServicePermissionsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeVpcEndpointServicePermissionsResponsePrivate object with public implementation \a q.
 */
DescribeVpcEndpointServicePermissionsResponsePrivate::DescribeVpcEndpointServicePermissionsResponsePrivate(
    DescribeVpcEndpointServicePermissionsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeVpcEndpointServicePermissions response element from \a xml.
 */
void DescribeVpcEndpointServicePermissionsResponsePrivate::parseDescribeVpcEndpointServicePermissionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcEndpointServicePermissionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
