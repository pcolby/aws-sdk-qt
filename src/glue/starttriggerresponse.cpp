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

#include "starttriggerresponse.h"
#include "starttriggerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  StartTriggerResponse
 *
 * @brief  Handles Glue StartTrigger responses.
 *
 * @see    GlueClient::startTrigger
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartTriggerResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new StartTriggerResponsePrivate(this), parent)
{
    setRequest(new StartTriggerRequest(request));
    setReply(reply);
}

const StartTriggerRequest * StartTriggerResponse::request() const
{
    Q_D(const StartTriggerResponse);
    return static_cast<const StartTriggerRequest *>(d->request);
}

/**
 * @brief  Parse a Glue StartTrigger response.
 *
 * @param  response  Response to parse.
 */
void StartTriggerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartTriggerResponsePrivate
 *
 * @brief  Private implementation for StartTriggerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartTriggerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartTriggerResponse instance.
 */
StartTriggerResponsePrivate::StartTriggerResponsePrivate(
    StartTriggerQueueResponse * const q) : StartTriggerPrivate(q)
{

}

/**
 * @brief  Parse an Glue StartTriggerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartTriggerResponsePrivate::StartTriggerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartTriggerResponse"));
    /// @todo
}
