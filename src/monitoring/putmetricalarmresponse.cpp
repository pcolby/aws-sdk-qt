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

#include "putmetricalarmresponse.h"
#include "putmetricalarmresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatch {

/**
 * @class  PutMetricAlarmResponse
 *
 * @brief  Handles CloudWatch PutMetricAlarm responses.
 *
 * @see    CloudWatchClient::putMetricAlarm
 */

/**
 * @brief  Constructs a new PutMetricAlarmResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutMetricAlarmResponse::PutMetricAlarmResponse(
        const PutMetricAlarmRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PutMetricAlarmResponse(new PutMetricAlarmResponsePrivate(this), parent)
{
    setRequest(new PutMetricAlarmRequest(request));
    setReply(reply);
}

const PutMetricAlarmRequest * PutMetricAlarmResponse::request() const
{
    Q_D(const PutMetricAlarmResponse);
    return static_cast<const PutMetricAlarmRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatch PutMetricAlarm response.
 *
 * @param  response  Response to parse.
 */
void PutMetricAlarmResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutMetricAlarmResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutMetricAlarmResponsePrivate
 *
 * @brief  Private implementation for PutMetricAlarmResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutMetricAlarmResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutMetricAlarmResponse instance.
 */
PutMetricAlarmResponsePrivate::PutMetricAlarmResponsePrivate(
    PutMetricAlarmResponse * const q) : CloudWatchResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatch PutMetricAlarmResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutMetricAlarmResponsePrivate::parsePutMetricAlarmResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutMetricAlarmResponse"));
    /// @todo
}

} // namespace CloudWatch
} // namespace QtAws
