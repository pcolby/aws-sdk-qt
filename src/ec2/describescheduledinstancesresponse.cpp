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

#include "describescheduledinstancesresponse.h"
#include "describescheduledinstancesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EC2 {

/*!
 * \class QtAws::EC2::DescribeScheduledInstancesResponse
 * \brief The DescribeScheduledInstancesResponse class provides an interace for EC2 DescribeScheduledInstances responses.
 *
 * \inmodule QtAwsEC2
 *
 *  <fullname>Amazon Elastic Compute Cloud</fullname>
 * 
 *  Amazon Elastic Compute Cloud (Amazon EC2) provides resizable computing capacity in the AWS Cloud. Using Amazon EC2
 *  eliminates the need to invest in hardware up front, so you can develop and deploy applications
 *
 * \sa Ec2Client::describeScheduledInstances
 */

/*!
 * Constructs a DescribeScheduledInstancesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeScheduledInstancesResponse::DescribeScheduledInstancesResponse(
        const DescribeScheduledInstancesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new DescribeScheduledInstancesResponsePrivate(this), parent)
{
    setRequest(new DescribeScheduledInstancesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeScheduledInstancesRequest * DescribeScheduledInstancesResponse::request() const
{
    Q_D(const DescribeScheduledInstancesResponse);
    return static_cast<const DescribeScheduledInstancesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful EC2 DescribeScheduledInstances \a response.
 */
void DescribeScheduledInstancesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeScheduledInstancesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::EC2::DescribeScheduledInstancesResponsePrivate
 * \brief The DescribeScheduledInstancesResponsePrivate class provides private implementation for DescribeScheduledInstancesResponse.
 * \internal
 *
 * \inmodule QtAwsEC2
 */

/*!
 * Constructs a DescribeScheduledInstancesResponsePrivate object with public implementation \a q.
 */
DescribeScheduledInstancesResponsePrivate::DescribeScheduledInstancesResponsePrivate(
    DescribeScheduledInstancesResponse * const q) : EC2ResponsePrivate(q)
{

}

/*!
 * Parses a EC2 DescribeScheduledInstances response element from \a xml.
 */
void DescribeScheduledInstancesResponsePrivate::parseDescribeScheduledInstancesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScheduledInstancesResponse"));
    /// @todo
}

} // namespace EC2
} // namespace QtAws
