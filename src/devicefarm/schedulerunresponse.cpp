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

#include "schedulerunresponse.h"
#include "schedulerunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  ScheduleRunResponse
 *
 * @brief  Handles DeviceFarm ScheduleRun responses.
 *
 * @see    DeviceFarmClient::scheduleRun
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ScheduleRunResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new ScheduleRunResponsePrivate(this), parent)
{
    setRequest(new ScheduleRunRequest(request));
    setReply(reply);
}

const ScheduleRunRequest * ScheduleRunResponse::request() const
{
    Q_D(const ScheduleRunResponse);
    return static_cast<const ScheduleRunRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm ScheduleRun response.
 *
 * @param  response  Response to parse.
 */
void ScheduleRunResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ScheduleRunResponsePrivate
 *
 * @brief  Private implementation for ScheduleRunResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ScheduleRunResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ScheduleRunResponse instance.
 */
ScheduleRunResponsePrivate::ScheduleRunResponsePrivate(
    ScheduleRunQueueResponse * const q) : ScheduleRunPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm ScheduleRunResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ScheduleRunResponsePrivate::ScheduleRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ScheduleRunResponse"));
    /// @todo
}
