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

#include "setalarmstateresponse.h"
#include "setalarmstateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatch {

/**
 * @class  SetAlarmStateResponse
 *
 * @brief  Handles CloudWatch SetAlarmState responses.
 *
 * @see    CloudWatchClient::setAlarmState
 */

/**
 * @brief  Constructs a new SetAlarmStateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetAlarmStateResponse::SetAlarmStateResponse(
        const SetAlarmStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchResponse(new SetAlarmStateResponsePrivate(this), parent)
{
    setRequest(new SetAlarmStateRequest(request));
    setReply(reply);
}

const SetAlarmStateRequest * SetAlarmStateResponse::request() const
{
    Q_D(const SetAlarmStateResponse);
    return static_cast<const SetAlarmStateRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatch SetAlarmState response.
 *
 * @param  response  Response to parse.
 */
void SetAlarmStateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetAlarmStateResponsePrivate
 *
 * @brief  Private implementation for SetAlarmStateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetAlarmStateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetAlarmStateResponse instance.
 */
SetAlarmStateResponsePrivate::SetAlarmStateResponsePrivate(
    SetAlarmStateQueueResponse * const q) : SetAlarmStatePrivate(q)
{

}

/**
 * @brief  Parse an CloudWatch SetAlarmStateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetAlarmStateResponsePrivate::SetAlarmStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetAlarmStateResponse"));
    /// @todo
}

} // namespace CloudWatch
} // namespace AWS
