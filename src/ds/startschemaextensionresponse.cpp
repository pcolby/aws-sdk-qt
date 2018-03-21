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

#include "startschemaextensionresponse.h"
#include "startschemaextensionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  StartSchemaExtensionResponse
 *
 * @brief  Handles DirectoryService StartSchemaExtension responses.
 *
 * @see    DirectoryServiceClient::startSchemaExtension
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartSchemaExtensionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new StartSchemaExtensionResponsePrivate(this), parent)
{
    setRequest(new StartSchemaExtensionRequest(request));
    setReply(reply);
}

const StartSchemaExtensionRequest * StartSchemaExtensionResponse::request() const
{
    Q_D(const StartSchemaExtensionResponse);
    return static_cast<const StartSchemaExtensionRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService StartSchemaExtension response.
 *
 * @param  response  Response to parse.
 */
void StartSchemaExtensionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartSchemaExtensionResponsePrivate
 *
 * @brief  Private implementation for StartSchemaExtensionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartSchemaExtensionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartSchemaExtensionResponse instance.
 */
StartSchemaExtensionResponsePrivate::StartSchemaExtensionResponsePrivate(
    StartSchemaExtensionQueueResponse * const q) : StartSchemaExtensionPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService StartSchemaExtensionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartSchemaExtensionResponsePrivate::StartSchemaExtensionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartSchemaExtensionResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace AWS
