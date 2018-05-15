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

#include "describeclassiclinkinstancesresponse.h"
#include "describeclassiclinkinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeClassicLinkInstancesResponse
 * \brief The DescribeClassicLinkInstancesResponse class provides an interace for EC2 DescribeClassicLinkInstances responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeClassicLinkInstances
 */

/*!
 * Constructs a DescribeClassicLinkInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeClassicLinkInstancesResponse::DescribeClassicLinkInstancesResponse(
        const DescribeClassicLinkInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Ec2Response(new DescribeClassicLinkInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeClassicLinkInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeClassicLinkInstancesRequest * DescribeClassicLinkInstancesResponse::request() const
{
    Q_D(const DescribeClassicLinkInstancesResponse);
    return static_cast<const DescribeClassicLinkInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeClassicLinkInstances \a response.
 */
void DescribeClassicLinkInstancesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeClassicLinkInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeClassicLinkInstancesResponsePrivate
 * \brief The DescribeClassicLinkInstancesResponsePrivate class provides private implementation for DescribeClassicLinkInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeClassicLinkInstancesResponsePrivate object with public implementation \a q.
 */
DescribeClassicLinkInstancesResponsePrivate::DescribeClassicLinkInstancesResponsePrivate(
    DescribeClassicLinkInstancesResponse * const q) : Ec2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeClassicLinkInstances response element from \a xml.
 */
void DescribeClassicLinkInstancesResponsePrivate::parseDescribeClassicLinkInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeClassicLinkInstancesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
