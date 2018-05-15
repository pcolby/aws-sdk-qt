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

#include "describevpcendpointservicesresponse.h"
#include "describevpcendpointservicesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeVpcEndpointServicesResponse
 * \brief The DescribeVpcEndpointServicesResponse class provides an interace for EC2 DescribeVpcEndpointServices responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeVpcEndpointServices
 */

/*!
 * Constructs a DescribeVpcEndpointServicesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeVpcEndpointServicesResponse::DescribeVpcEndpointServicesResponse(
        const DescribeVpcEndpointServicesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeVpcEndpointServicesResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcEndpointServicesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeVpcEndpointServicesRequest * DescribeVpcEndpointServicesResponse::request() const
{
    Q_D(const DescribeVpcEndpointServicesResponse);
    return static_cast<const DescribeVpcEndpointServicesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeVpcEndpointServices \a response.
 */
void DescribeVpcEndpointServicesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeVpcEndpointServicesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeVpcEndpointServicesResponsePrivate
 * \brief The DescribeVpcEndpointServicesResponsePrivate class provides private implementation for DescribeVpcEndpointServicesResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeVpcEndpointServicesResponsePrivate object with public implementation \a q.
 */
DescribeVpcEndpointServicesResponsePrivate::DescribeVpcEndpointServicesResponsePrivate(
    DescribeVpcEndpointServicesResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeVpcEndpointServices response element from \a xml.
 */
void DescribeVpcEndpointServicesResponsePrivate::parseDescribeVpcEndpointServicesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcEndpointServicesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
