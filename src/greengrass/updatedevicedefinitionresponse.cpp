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

#include "updatedevicedefinitionresponse.h"
#include "updatedevicedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  UpdateDeviceDefinitionResponse
 *
 * @brief  Handles Greengrass UpdateDeviceDefinition responses.
 *
 * @see    GreengrassClient::updateDeviceDefinition
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDeviceDefinitionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateDeviceDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateDeviceDefinitionRequest(request));
    setReply(reply);
}

const UpdateDeviceDefinitionRequest * UpdateDeviceDefinitionResponse::request() const
{
    Q_D(const UpdateDeviceDefinitionResponse);
    return static_cast<const UpdateDeviceDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass UpdateDeviceDefinition response.
 *
 * @param  response  Response to parse.
 */
void UpdateDeviceDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateDeviceDefinitionResponsePrivate
 *
 * @brief  Private implementation for UpdateDeviceDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateDeviceDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDeviceDefinitionResponse instance.
 */
UpdateDeviceDefinitionResponsePrivate::UpdateDeviceDefinitionResponsePrivate(
    UpdateDeviceDefinitionQueueResponse * const q) : UpdateDeviceDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass UpdateDeviceDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDeviceDefinitionResponsePrivate::UpdateDeviceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDeviceDefinitionResponse"));
    /// @todo
}
