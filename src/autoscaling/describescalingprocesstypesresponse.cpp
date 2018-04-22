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

#include "describescalingprocesstypesresponse.h"
#include "describescalingprocesstypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeScalingProcessTypesResponse
 * \brief The DescribeScalingProcessTypesResponse class provides an interace for AutoScaling DescribeScalingProcessTypes responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::describeScalingProcessTypes
 */

/*!
 * Constructs a DescribeScalingProcessTypesResponse object for \a reply, with parent \a parent.
 */
DescribeScalingProcessTypesResponse::DescribeScalingProcessTypesResponse(
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeScalingProcessTypesResponsePrivate(this), parent)
{
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeScalingProcessTypesRequest * DescribeScalingProcessTypesResponse::request() const
{
    Q_D(const DescribeScalingProcessTypesResponse);
    return static_cast<const DescribeScalingProcessTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeScalingProcessTypes \a response.
 */
void DescribeScalingProcessTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeScalingProcessTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeScalingProcessTypesResponsePrivate
 * \brief The DescribeScalingProcessTypesResponsePrivate class provides private implementation for DescribeScalingProcessTypesResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeScalingProcessTypesResponsePrivate object with public implementation \a q.
 */
DescribeScalingProcessTypesResponsePrivate::DescribeScalingProcessTypesResponsePrivate(
    DescribeScalingProcessTypesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeScalingProcessTypes response element from \a xml.
 */
void DescribeScalingProcessTypesResponsePrivate::parseDescribeScalingProcessTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeScalingProcessTypesResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
