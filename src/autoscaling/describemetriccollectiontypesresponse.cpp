/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "describemetriccollectiontypesresponse.h"
#include "describemetriccollectiontypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AutoScaling {

/**
 * @class  DescribeMetricCollectionTypesResponse
 *
 * @brief  Handles AutoScaling DescribeMetricCollectionTypes responses.
 *
 * @see    AutoScalingClient::describeMetricCollectionTypes
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMetricCollectionTypesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
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

/**
 * @brief  Parse a AutoScaling DescribeMetricCollectionTypes response.
 *
 * @param  response  Response to parse.
 */
void DescribeMetricCollectionTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeMetricCollectionTypesResponsePrivate
 *
 * @brief  Private implementation for DescribeMetricCollectionTypesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMetricCollectionTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMetricCollectionTypesResponse instance.
 */
DescribeMetricCollectionTypesResponsePrivate::DescribeMetricCollectionTypesResponsePrivate(
    DescribeMetricCollectionTypesQueueResponse * const q) : DescribeMetricCollectionTypesPrivate(q)
{

}

/**
 * @brief  Parse an AutoScaling DescribeMetricCollectionTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMetricCollectionTypesResponsePrivate::DescribeMetricCollectionTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMetricCollectionTypesResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace AWS
