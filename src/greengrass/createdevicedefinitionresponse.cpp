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

#include "createdevicedefinitionresponse.h"
#include "createdevicedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  CreateDeviceDefinitionResponse
 *
 * @brief  Handles Greengrass CreateDeviceDefinition responses.
 *
 * @see    GreengrassClient::createDeviceDefinition
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDeviceDefinitionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateDeviceDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateDeviceDefinitionRequest(request));
    setReply(reply);
}

const CreateDeviceDefinitionRequest * CreateDeviceDefinitionResponse::request() const
{
    Q_D(const CreateDeviceDefinitionResponse);
    return static_cast<const CreateDeviceDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass CreateDeviceDefinition response.
 *
 * @param  response  Response to parse.
 */
void CreateDeviceDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDeviceDefinitionResponsePrivate
 *
 * @brief  Private implementation for CreateDeviceDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDeviceDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDeviceDefinitionResponse instance.
 */
CreateDeviceDefinitionResponsePrivate::CreateDeviceDefinitionResponsePrivate(
    CreateDeviceDefinitionQueueResponse * const q) : CreateDeviceDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass CreateDeviceDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDeviceDefinitionResponsePrivate::CreateDeviceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeviceDefinitionResponse"));
    /// @todo
}
