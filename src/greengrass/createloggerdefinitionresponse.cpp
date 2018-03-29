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

#include "createloggerdefinitionresponse.h"
#include "createloggerdefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  CreateLoggerDefinitionResponse
 *
 * @brief  Handles Greengrass CreateLoggerDefinition responses.
 *
 * @see    GreengrassClient::createLoggerDefinition
 */

/**
 * @brief  Constructs a new CreateLoggerDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateLoggerDefinitionResponse::CreateLoggerDefinitionResponse(
        const CreateLoggerDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateLoggerDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateLoggerDefinitionRequest(request));
    setReply(reply);
}

const CreateLoggerDefinitionRequest * CreateLoggerDefinitionResponse::request() const
{
    Q_D(const CreateLoggerDefinitionResponse);
    return static_cast<const CreateLoggerDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass CreateLoggerDefinition response.
 *
 * @param  response  Response to parse.
 */
void CreateLoggerDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateLoggerDefinitionResponsePrivate
 *
 * @brief  Private implementation for CreateLoggerDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLoggerDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateLoggerDefinitionResponse instance.
 */
CreateLoggerDefinitionResponsePrivate::CreateLoggerDefinitionResponsePrivate(
    CreateLoggerDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass CreateLoggerDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateLoggerDefinitionResponsePrivate::CreateLoggerDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLoggerDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
