/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describevpcendpointconnectionsresponse.h"
#include "describevpcendpointconnectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeVpcEndpointConnectionsResponse
 * \brief The DescribeVpcEndpointConnectionsResponse class provides an interace for EC2 DescribeVpcEndpointConnections responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa EC2Client::describeVpcEndpointConnections
 */

/*!
 * Constructs a DescribeVpcEndpointConnectionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeVpcEndpointConnectionsResponse::DescribeVpcEndpointConnectionsResponse(
        const DescribeVpcEndpointConnectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeVpcEndpointConnectionsResponsePrivate(this), parent)
{
    setRequest(new DescribeVpcEndpointConnectionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeVpcEndpointConnectionsRequest * DescribeVpcEndpointConnectionsResponse::request() const
{
    Q_D(const DescribeVpcEndpointConnectionsResponse);
    return static_cast<const DescribeVpcEndpointConnectionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeVpcEndpointConnections \a response.
 */
void DescribeVpcEndpointConnectionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeVpcEndpointConnectionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeVpcEndpointConnectionsResponsePrivate
 * \brief The DescribeVpcEndpointConnectionsResponsePrivate class provides private implementation for DescribeVpcEndpointConnectionsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeVpcEndpointConnectionsResponsePrivate object with public implementation \a q.
 */
DescribeVpcEndpointConnectionsResponsePrivate::DescribeVpcEndpointConnectionsResponsePrivate(
    DescribeVpcEndpointConnectionsResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeVpcEndpointConnections response element from \a xml.
 */
void DescribeVpcEndpointConnectionsResponsePrivate::parseDescribeVpcEndpointConnectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpcEndpointConnectionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
