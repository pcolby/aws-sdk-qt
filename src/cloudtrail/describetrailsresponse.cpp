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

#include "describetrailsresponse.h"
#include "describetrailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudTrail {

/**
 * @class  DescribeTrailsResponse
 *
 * @brief  Handles CloudTrail DescribeTrails responses.
 *
 * @see    CloudTrailClient::describeTrails
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTrailsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new DescribeTrailsResponsePrivate(this), parent)
{
    setRequest(new DescribeTrailsRequest(request));
    setReply(reply);
}

const DescribeTrailsRequest * DescribeTrailsResponse::request() const
{
    Q_D(const DescribeTrailsResponse);
    return static_cast<const DescribeTrailsRequest *>(d->request);
}

/**
 * @brief  Parse a CloudTrail DescribeTrails response.
 *
 * @param  response  Response to parse.
 */
void DescribeTrailsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTrailsResponsePrivate
 *
 * @brief  Private implementation for DescribeTrailsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTrailsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTrailsResponse instance.
 */
DescribeTrailsResponsePrivate::DescribeTrailsResponsePrivate(
    DescribeTrailsQueueResponse * const q) : DescribeTrailsPrivate(q)
{

}

/**
 * @brief  Parse an CloudTrail DescribeTrailsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTrailsResponsePrivate::DescribeTrailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTrailsResponse"));
    /// @todo
}

} // namespace CloudTrail
} // namespace AWS
