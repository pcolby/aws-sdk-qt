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

#include "deletecoredefinitionresponse.h"
#include "deletecoredefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  DeleteCoreDefinitionResponse
 *
 * @brief  Handles Greengrass DeleteCoreDefinition responses.
 *
 * @see    GreengrassClient::deleteCoreDefinition
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCoreDefinitionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new DeleteCoreDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteCoreDefinitionRequest(request));
    setReply(reply);
}

const DeleteCoreDefinitionRequest * DeleteCoreDefinitionResponse::request() const
{
    Q_D(const DeleteCoreDefinitionResponse);
    return static_cast<const DeleteCoreDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass DeleteCoreDefinition response.
 *
 * @param  response  Response to parse.
 */
void DeleteCoreDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteCoreDefinitionResponsePrivate
 *
 * @brief  Private implementation for DeleteCoreDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCoreDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCoreDefinitionResponse instance.
 */
DeleteCoreDefinitionResponsePrivate::DeleteCoreDefinitionResponsePrivate(
    DeleteCoreDefinitionQueueResponse * const q) : DeleteCoreDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass DeleteCoreDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCoreDefinitionResponsePrivate::DeleteCoreDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCoreDefinitionResponse"));
    /// @todo
}
