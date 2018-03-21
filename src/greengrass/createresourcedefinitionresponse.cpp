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

#include "createresourcedefinitionresponse.h"
#include "createresourcedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  CreateResourceDefinitionResponse
 *
 * @brief  Handles Greengrass CreateResourceDefinition responses.
 *
 * @see    GreengrassClient::createResourceDefinition
 */

/**
 * @brief  Constructs a new CreateResourceDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateResourceDefinitionResponse::CreateResourceDefinitionResponse(
        const CreateResourceDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateResourceDefinitionResponsePrivate(this), parent)
{
    setRequest(new CreateResourceDefinitionRequest(request));
    setReply(reply);
}

const CreateResourceDefinitionRequest * CreateResourceDefinitionResponse::request() const
{
    Q_D(const CreateResourceDefinitionResponse);
    return static_cast<const CreateResourceDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass CreateResourceDefinition response.
 *
 * @param  response  Response to parse.
 */
void CreateResourceDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateResourceDefinitionResponsePrivate
 *
 * @brief  Private implementation for CreateResourceDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateResourceDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateResourceDefinitionResponse instance.
 */
CreateResourceDefinitionResponsePrivate::CreateResourceDefinitionResponsePrivate(
    CreateResourceDefinitionQueueResponse * const q) : CreateResourceDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass CreateResourceDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateResourceDefinitionResponsePrivate::CreateResourceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateResourceDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
