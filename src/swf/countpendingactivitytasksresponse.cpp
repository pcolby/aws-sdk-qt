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

#include "countpendingactivitytasksresponse.h"
#include "countpendingactivitytasksresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SWF {

/**
 * @class  CountPendingActivityTasksResponse
 *
 * @brief  Handles SWF CountPendingActivityTasks responses.
 *
 * @see    SWFClient::countPendingActivityTasks
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CountPendingActivityTasksResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SWFResponse(new CountPendingActivityTasksResponsePrivate(this), parent)
{
    setRequest(new CountPendingActivityTasksRequest(request));
    setReply(reply);
}

const CountPendingActivityTasksRequest * CountPendingActivityTasksResponse::request() const
{
    Q_D(const CountPendingActivityTasksResponse);
    return static_cast<const CountPendingActivityTasksRequest *>(d->request);
}

/**
 * @brief  Parse a SWF CountPendingActivityTasks response.
 *
 * @param  response  Response to parse.
 */
void CountPendingActivityTasksResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CountPendingActivityTasksResponsePrivate
 *
 * @brief  Private implementation for CountPendingActivityTasksResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CountPendingActivityTasksResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CountPendingActivityTasksResponse instance.
 */
CountPendingActivityTasksResponsePrivate::CountPendingActivityTasksResponsePrivate(
    CountPendingActivityTasksQueueResponse * const q) : CountPendingActivityTasksPrivate(q)
{

}

/**
 * @brief  Parse an SWF CountPendingActivityTasksResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CountPendingActivityTasksResponsePrivate::CountPendingActivityTasksResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CountPendingActivityTasksResponse"));
    /// @todo
}
