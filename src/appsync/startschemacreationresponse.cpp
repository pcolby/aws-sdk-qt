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

#include "startschemacreationresponse.h"
#include "startschemacreationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppSync {

/**
 * @class  StartSchemaCreationResponse
 *
 * @brief  Handles AppSync StartSchemaCreation responses.
 *
 * @see    AppSyncClient::startSchemaCreation
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartSchemaCreationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new StartSchemaCreationResponsePrivate(this), parent)
{
    setRequest(new StartSchemaCreationRequest(request));
    setReply(reply);
}

const StartSchemaCreationRequest * StartSchemaCreationResponse::request() const
{
    Q_D(const StartSchemaCreationResponse);
    return static_cast<const StartSchemaCreationRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync StartSchemaCreation response.
 *
 * @param  response  Response to parse.
 */
void StartSchemaCreationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartSchemaCreationResponsePrivate
 *
 * @brief  Private implementation for StartSchemaCreationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartSchemaCreationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartSchemaCreationResponse instance.
 */
StartSchemaCreationResponsePrivate::StartSchemaCreationResponsePrivate(
    StartSchemaCreationQueueResponse * const q) : StartSchemaCreationPrivate(q)
{

}

/**
 * @brief  Parse an AppSync StartSchemaCreationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartSchemaCreationResponsePrivate::StartSchemaCreationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartSchemaCreationResponse"));
    /// @todo
}
