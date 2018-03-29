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

#include "createdevicedefinitionversionresponse.h"
#include "createdevicedefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  CreateDeviceDefinitionVersionResponse
 *
 * @brief  Handles Greengrass CreateDeviceDefinitionVersion responses.
 *
 * @see    GreengrassClient::createDeviceDefinitionVersion
 */

/**
 * @brief  Constructs a new CreateDeviceDefinitionVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDeviceDefinitionVersionResponse::CreateDeviceDefinitionVersionResponse(
        const CreateDeviceDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateDeviceDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateDeviceDefinitionVersionRequest(request));
    setReply(reply);
}

const CreateDeviceDefinitionVersionRequest * CreateDeviceDefinitionVersionResponse::request() const
{
    Q_D(const CreateDeviceDefinitionVersionResponse);
    return static_cast<const CreateDeviceDefinitionVersionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass CreateDeviceDefinitionVersion response.
 *
 * @param  response  Response to parse.
 */
void CreateDeviceDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDeviceDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDeviceDefinitionVersionResponsePrivate
 *
 * @brief  Private implementation for CreateDeviceDefinitionVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDeviceDefinitionVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDeviceDefinitionVersionResponse instance.
 */
CreateDeviceDefinitionVersionResponsePrivate::CreateDeviceDefinitionVersionResponsePrivate(
    CreateDeviceDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass CreateDeviceDefinitionVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDeviceDefinitionVersionResponsePrivate::CreateDeviceDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeviceDefinitionVersionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
