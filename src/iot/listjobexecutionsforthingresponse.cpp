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

#include "listjobexecutionsforthingresponse.h"
#include "listjobexecutionsforthingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  ListJobExecutionsForThingResponse
 *
 * @brief  Handles IoT ListJobExecutionsForThing responses.
 *
 * @see    IoTClient::listJobExecutionsForThing
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListJobExecutionsForThingResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new ListJobExecutionsForThingResponsePrivate(this), parent)
{
    setRequest(new ListJobExecutionsForThingRequest(request));
    setReply(reply);
}

const ListJobExecutionsForThingRequest * ListJobExecutionsForThingResponse::request() const
{
    Q_D(const ListJobExecutionsForThingResponse);
    return static_cast<const ListJobExecutionsForThingRequest *>(d->request);
}

/**
 * @brief  Parse a IoT ListJobExecutionsForThing response.
 *
 * @param  response  Response to parse.
 */
void ListJobExecutionsForThingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListJobExecutionsForThingResponsePrivate
 *
 * @brief  Private implementation for ListJobExecutionsForThingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListJobExecutionsForThingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListJobExecutionsForThingResponse instance.
 */
ListJobExecutionsForThingResponsePrivate::ListJobExecutionsForThingResponsePrivate(
    ListJobExecutionsForThingQueueResponse * const q) : ListJobExecutionsForThingPrivate(q)
{

}

/**
 * @brief  Parse an IoT ListJobExecutionsForThingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListJobExecutionsForThingResponsePrivate::ListJobExecutionsForThingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListJobExecutionsForThingResponse"));
    /// @todo
}
