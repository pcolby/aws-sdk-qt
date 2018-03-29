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

#include "createcoredefinitionresponse.h"
#include "createcoredefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  CreateCoreDefinitionResponse
 *
 * @brief  Handles Greengrass CreateCoreDefinition responses.
 *
 * @see    GreengrassClient::createCoreDefinition
 */

/**
 * @brief  Constructs a new CreateCoreDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCoreDefinitionResponse::CreateCoreDefinitionResponse(
        const CreateCoreDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateCoreDefinitionResponse(new CreateCoreDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateCoreDefinitionRequest(request));
    setReply(reply);
}

const CreateCoreDefinitionRequest * CreateCoreDefinitionResponse::request() const
{
    Q_D(const CreateCoreDefinitionResponse);
    return static_cast<const CreateCoreDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass CreateCoreDefinition response.
 *
 * @param  response  Response to parse.
 */
void CreateCoreDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateCoreDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateCoreDefinitionResponsePrivate
 *
 * @brief  Private implementation for CreateCoreDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCoreDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCoreDefinitionResponse instance.
 */
CreateCoreDefinitionResponsePrivate::CreateCoreDefinitionResponsePrivate(
    CreateCoreDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass CreateCoreDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCoreDefinitionResponsePrivate::parseCreateCoreDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCoreDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
