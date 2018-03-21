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

#include "putmetricdataresponse.h"
#include "putmetricdataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatch {

/**
 * @class  PutMetricDataResponse
 *
 * @brief  Handles CloudWatch PutMetricData responses.
 *
 * @see    CloudWatchClient::putMetricData
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutMetricDataResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new PutMetricDataResponsePrivate(this), parent)
{
    setRequest(new PutMetricDataRequest(request));
    setReply(reply);
}

const PutMetricDataRequest * PutMetricDataResponse::request() const
{
    Q_D(const PutMetricDataResponse);
    return static_cast<const PutMetricDataRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatch PutMetricData response.
 *
 * @param  response  Response to parse.
 */
void PutMetricDataResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutMetricDataResponsePrivate
 *
 * @brief  Private implementation for PutMetricDataResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutMetricDataResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutMetricDataResponse instance.
 */
PutMetricDataResponsePrivate::PutMetricDataResponsePrivate(
    PutMetricDataQueueResponse * const q) : PutMetricDataPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatch PutMetricDataResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutMetricDataResponsePrivate::PutMetricDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutMetricDataResponse"));
    /// @todo
}

} // namespace CloudWatch
} // namespace AWS
