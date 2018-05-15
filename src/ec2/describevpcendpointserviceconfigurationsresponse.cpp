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

#include "describevpcendpointserviceconfigurationsresponse.h"
#include "describevpcendpointserviceconfigurationsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeVpcEndpointServiceConfigurationsResponse
 * \brief The DescribeVpcEndpointServiceConfigurationsResponse class provides an interace for EC2 DescribeVpcEndpointServiceConfigurations responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeVpcEndpointServiceConfigurations
 */

/*!
 * Constructs a DescribeVpcEndpointServiceConfigurationsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeVpcEndpointServiceConfigurationsResponse::DescribeVpcEndpointServiceConfigurationsResponse(
        const DescribeVpcEndpointServiceConfigurationsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeVpcEndpointServiceConfigurationsResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcEndpointServiceConfigurationsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeVpcEndpointServiceConfigurationsRequest * DescribeVpcEndpointServiceConfigurationsResponse::request() const
{
    Q_D(const DescribeVpcEndpointServiceConfigurationsResponse);
    return static_cast<const DescribeVpcEndpointServiceConfigurationsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeVpcEndpointServiceConfigurations \a response.
 */
void DescribeVpcEndpointServiceConfigurationsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeVpcEndpointServiceConfigurationsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeVpcEndpointServiceConfigurationsResponsePrivate
 * \brief The DescribeVpcEndpointServiceConfigurationsResponsePrivate class provides private implementation for DescribeVpcEndpointServiceConfigurationsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeVpcEndpointServiceConfigurationsResponsePrivate object with public implementation \a q.
 */
DescribeVpcEndpointServiceConfigurationsResponsePrivate::DescribeVpcEndpointServiceConfigurationsResponsePrivate(
    DescribeVpcEndpointServiceConfigurationsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeVpcEndpointServiceConfigurations response element from \a xml.
 */
void DescribeVpcEndpointServiceConfigurationsResponsePrivate::parseDescribeVpcEndpointServiceConfigurationsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcEndpointServiceConfigurationsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
