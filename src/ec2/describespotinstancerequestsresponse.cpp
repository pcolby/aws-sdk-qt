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

#include "describespotinstancerequestsresponse.h"
#include "describespotinstancerequestsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeSpotInstanceRequestsResponse
 * \brief The DescribeSpotInstanceRequestsResponse class provides an interace for EC2 DescribeSpotInstanceRequests responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeSpotInstanceRequests
 */

/*!
 * Constructs a DescribeSpotInstanceRequestsResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSpotInstanceRequestsResponse::DescribeSpotInstanceRequestsResponse(
        const DescribeSpotInstanceRequestsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeSpotInstanceRequestsResponsePrivate(this), parent)
{
    setRequest(new DescribeSpotInstanceRequestsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSpotInstanceRequestsRequest * DescribeSpotInstanceRequestsResponse::request() const
{
    Q_D(const DescribeSpotInstanceRequestsResponse);
    return static_cast<const DescribeSpotInstanceRequestsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeSpotInstanceRequests \a response.
 */
void DescribeSpotInstanceRequestsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSpotInstanceRequestsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeSpotInstanceRequestsResponsePrivate
 * \brief The DescribeSpotInstanceRequestsResponsePrivate class provides private implementation for DescribeSpotInstanceRequestsResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeSpotInstanceRequestsResponsePrivate object with public implementation \a q.
 */
DescribeSpotInstanceRequestsResponsePrivate::DescribeSpotInstanceRequestsResponsePrivate(
    DescribeSpotInstanceRequestsResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeSpotInstanceRequests response element from \a xml.
 */
void DescribeSpotInstanceRequestsResponsePrivate::parseDescribeSpotInstanceRequestsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSpotInstanceRequestsResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
