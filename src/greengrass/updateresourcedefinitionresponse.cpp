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

#include "updateresourcedefinitionresponse.h"
#include "updateresourcedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  UpdateResourceDefinitionResponse
 *
 * @brief  Handles Greengrass UpdateResourceDefinition responses.
 *
 * @see    GreengrassClient::updateResourceDefinition
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateResourceDefinitionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateResourceDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateResourceDefinitionRequest(request));
    setReply(reply);
}

const UpdateResourceDefinitionRequest * UpdateResourceDefinitionResponse::request() const
{
    Q_D(const UpdateResourceDefinitionResponse);
    return static_cast<const UpdateResourceDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass UpdateResourceDefinition response.
 *
 * @param  response  Response to parse.
 */
void UpdateResourceDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateResourceDefinitionResponsePrivate
 *
 * @brief  Private implementation for UpdateResourceDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateResourceDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateResourceDefinitionResponse instance.
 */
UpdateResourceDefinitionResponsePrivate::UpdateResourceDefinitionResponsePrivate(
    UpdateResourceDefinitionQueueResponse * const q) : UpdateResourceDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass UpdateResourceDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateResourceDefinitionResponsePrivate::UpdateResourceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateResourceDefinitionResponse"));
    /// @todo
}
