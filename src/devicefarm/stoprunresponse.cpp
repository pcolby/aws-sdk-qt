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

#include "stoprunresponse.h"
#include "stoprunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  StopRunResponse
 *
 * @brief  Handles DeviceFarm StopRun responses.
 *
 * @see    DeviceFarmClient::stopRun
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopRunResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new StopRunResponsePrivate(this), parent)
{
    setRequest(new StopRunRequest(request));
    setReply(reply);
}

const StopRunRequest * StopRunResponse::request() const
{
    Q_D(const StopRunResponse);
    return static_cast<const StopRunRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm StopRun response.
 *
 * @param  response  Response to parse.
 */
void StopRunResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopRunResponsePrivate
 *
 * @brief  Private implementation for StopRunResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopRunResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopRunResponse instance.
 */
StopRunResponsePrivate::StopRunResponsePrivate(
    StopRunQueueResponse * const q) : StopRunPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm StopRunResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopRunResponsePrivate::StopRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopRunResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace AWS
