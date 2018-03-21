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

#include "describealarmhistoryresponse.h"
#include "describealarmhistoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatch {

/**
 * @class  DescribeAlarmHistoryResponse
 *
 * @brief  Handles CloudWatch DescribeAlarmHistory responses.
 *
 * @see    CloudWatchClient::describeAlarmHistory
 */

/**
 * @brief  Constructs a new DescribeAlarmHistoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeAlarmHistoryResponse::DescribeAlarmHistoryResponse(
        const DescribeAlarmHistoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new DescribeAlarmHistoryResponsePrivate(this), parent)
{
    setRequest(new DescribeAlarmHistoryRequest(request));
    setReply(reply);
}

const DescribeAlarmHistoryRequest * DescribeAlarmHistoryResponse::request() const
{
    Q_D(const DescribeAlarmHistoryResponse);
    return static_cast<const DescribeAlarmHistoryRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatch DescribeAlarmHistory response.
 *
 * @param  response  Response to parse.
 */
void DescribeAlarmHistoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeAlarmHistoryResponsePrivate
 *
 * @brief  Private implementation for DescribeAlarmHistoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeAlarmHistoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeAlarmHistoryResponse instance.
 */
DescribeAlarmHistoryResponsePrivate::DescribeAlarmHistoryResponsePrivate(
    DescribeAlarmHistoryQueueResponse * const q) : DescribeAlarmHistoryPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatch DescribeAlarmHistoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeAlarmHistoryResponsePrivate::DescribeAlarmHistoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeAlarmHistoryResponse"));
    /// @todo
}

} // namespace CloudWatch
} // namespace AWS
