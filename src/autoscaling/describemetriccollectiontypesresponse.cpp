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

#include "describemetriccollectiontypesresponse.h"
#include "describemetriccollectiontypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DescribeMetricCollectionTypesResponse
 *
 * \brief The DescribeMetricCollectionTypesResponse class encapsulates AutoScaling DescribeMetricCollectionTypes responses.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::describeMetricCollectionTypes
 */

/*!
 * @brief  Constructs a new DescribeMetricCollectionTypesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMetricCollectionTypesResponse::DescribeMetricCollectionTypesResponse(
        const DescribeMetricCollectionTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new DescribeMetricCollectionTypesResponsePrivate(this), parent)
{
    setRequest(new DescribeMetricCollectionTypesRequest(request));
    setReply(reply);
}

const DescribeMetricCollectionTypesRequest * DescribeMetricCollectionTypesResponse::request() const
{
    Q_D(const DescribeMetricCollectionTypesResponse);
    return static_cast<const DescribeMetricCollectionTypesRequest *>(d->request);
}

/*!
 * @brief  Parse a AutoScaling DescribeMetricCollectionTypes response.
 *
 * @param  response  Response to parse.
 */
void DescribeMetricCollectionTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeMetricCollectionTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeMetricCollectionTypesResponsePrivate
 *
 * \brief Private implementation for DescribeMetricCollectionTypesResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeMetricCollectionTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMetricCollectionTypesResponse instance.
 */
DescribeMetricCollectionTypesResponsePrivate::DescribeMetricCollectionTypesResponsePrivate(
    DescribeMetricCollectionTypesResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AutoScaling DescribeMetricCollectionTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMetricCollectionTypesResponsePrivate::parseDescribeMetricCollectionTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMetricCollectionTypesResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
