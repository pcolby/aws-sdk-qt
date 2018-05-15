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

#include "describevpnconnectionsresponse.h"
#include "describevpnconnectionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeVpnConnectionsResponse
 * \brief The DescribeVpnConnectionsResponse class provides an interace for EC2 DescribeVpnConnections responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeVpnConnections
 */

/*!
 * Constructs a DescribeVpnConnectionsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeVpnConnectionsResponse::DescribeVpnConnectionsResponse(
        const DescribeVpnConnectionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeVpnConnectionsResponsePrivate(this), parent)
{
    setRequest(new DescribeVpnConnectionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeVpnConnectionsRequest * DescribeVpnConnectionsResponse::request() const
{
    Q_D(const DescribeVpnConnectionsResponse);
    return static_cast<const DescribeVpnConnectionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeVpnConnections \a response.
 */
void DescribeVpnConnectionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeVpnConnectionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeVpnConnectionsResponsePrivate
 * \brief The DescribeVpnConnectionsResponsePrivate class provides private implementation for DescribeVpnConnectionsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeVpnConnectionsResponsePrivate object with public implementation \a q.
 */
DescribeVpnConnectionsResponsePrivate::DescribeVpnConnectionsResponsePrivate(
    DescribeVpnConnectionsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeVpnConnections response element from \a xml.
 */
void DescribeVpnConnectionsResponsePrivate::parseDescribeVpnConnectionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVpnConnectionsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
