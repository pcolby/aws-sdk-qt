/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletedevicedefinitionresponse.h"
#include "deletedevicedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  DeleteDeviceDefinitionResponse
 *
 * @brief  Handles Greengrass DeleteDeviceDefinition responses.
 *
 * @see    GreengrassClient::deleteDeviceDefinition
 */

/**
 * @brief  Constructs a new DeleteDeviceDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteDeviceDefinitionResponse::DeleteDeviceDefinitionResponse(
        const DeleteDeviceDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new DeleteDeviceDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteDeviceDefinitionRequest(request));
    setReply(reply);
}

const DeleteDeviceDefinitionRequest * DeleteDeviceDefinitionResponse::request() const
{
    Q_D(const DeleteDeviceDefinitionResponse);
    return static_cast<const DeleteDeviceDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass DeleteDeviceDefinition response.
 *
 * @param  response  Response to parse.
 */
void DeleteDeviceDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteDeviceDefinitionResponsePrivate
 *
 * @brief  Private implementation for DeleteDeviceDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDeviceDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteDeviceDefinitionResponse instance.
 */
DeleteDeviceDefinitionResponsePrivate::DeleteDeviceDefinitionResponsePrivate(
    DeleteDeviceDefinitionQueueResponse * const q) : DeleteDeviceDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass DeleteDeviceDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteDeviceDefinitionResponsePrivate::DeleteDeviceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDeviceDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
