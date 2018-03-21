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

#include "createeventsourcemappingresponse.h"
#include "createeventsourcemappingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lambda {

/**
 * @class  CreateEventSourceMappingResponse
 *
 * @brief  Handles Lambda CreateEventSourceMapping responses.
 *
 * @see    LambdaClient::createEventSourceMapping
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateEventSourceMappingResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LambdaResponse(new CreateEventSourceMappingResponsePrivate(this), parent)
{
    setRequest(new CreateEventSourceMappingRequest(request));
    setReply(reply);
}

const CreateEventSourceMappingRequest * CreateEventSourceMappingResponse::request() const
{
    Q_D(const CreateEventSourceMappingResponse);
    return static_cast<const CreateEventSourceMappingRequest *>(d->request);
}

/**
 * @brief  Parse a Lambda CreateEventSourceMapping response.
 *
 * @param  response  Response to parse.
 */
void CreateEventSourceMappingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateEventSourceMappingResponsePrivate
 *
 * @brief  Private implementation for CreateEventSourceMappingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateEventSourceMappingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateEventSourceMappingResponse instance.
 */
CreateEventSourceMappingResponsePrivate::CreateEventSourceMappingResponsePrivate(
    CreateEventSourceMappingQueueResponse * const q) : CreateEventSourceMappingPrivate(q)
{

}

/**
 * @brief  Parse an Lambda CreateEventSourceMappingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateEventSourceMappingResponsePrivate::CreateEventSourceMappingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEventSourceMappingResponse"));
    /// @todo
}
