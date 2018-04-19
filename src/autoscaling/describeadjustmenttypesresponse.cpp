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

#include "describeadjustmenttypesresponse.h"
#include "describeadjustmenttypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeAdjustmentTypesResponse
 * \brief The DescribeAdjustmentTypesResponse class provides an interace for AutoScaling DescribeAdjustmentTypes responses.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::describeAdjustmentTypes
 */

/*!
 * Constructs a DescribeAdjustmentTypesResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeAdjustmentTypesResponse::DescribeAdjustmentTypesResponse(
        const DescribeAdjustmentTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeAdjustmentTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeAdjustmentTypesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeAdjustmentTypesRequest * DescribeAdjustmentTypesResponse::request() const
{
    Q_D(const DescribeAdjustmentTypesResponse);
    return static_cast<const DescribeAdjustmentTypesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AutoScaling DescribeAdjustmentTypes \a response.
 */
void DescribeAdjustmentTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeAdjustmentTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AutoScaling::DescribeAdjustmentTypesResponsePrivate
 * \brief The DescribeAdjustmentTypesResponsePrivate class provides private implementation for DescribeAdjustmentTypesResponse.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DescribeAdjustmentTypesResponsePrivate object with public implementation \a q.
 */
DescribeAdjustmentTypesResponsePrivate::DescribeAdjustmentTypesResponsePrivate(
    DescribeAdjustmentTypesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * Parses a AutoScaling DescribeAdjustmentTypes response element from \a xml.
 */
void DescribeAdjustmentTypesResponsePrivate::parseDescribeAdjustmentTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAdjustmentTypesResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
