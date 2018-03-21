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

#include "createcoredefinitionversionresponse.h"
#include "createcoredefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  CreateCoreDefinitionVersionResponse
 *
 * @brief  Handles Greengrass CreateCoreDefinitionVersion responses.
 *
 * @see    GreengrassClient::createCoreDefinitionVersion
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCoreDefinitionVersionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateCoreDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateCoreDefinitionVersionRequest(request));
    setReply(reply);
}

const CreateCoreDefinitionVersionRequest * CreateCoreDefinitionVersionResponse::request() const
{
    Q_D(const CreateCoreDefinitionVersionResponse);
    return static_cast<const CreateCoreDefinitionVersionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass CreateCoreDefinitionVersion response.
 *
 * @param  response  Response to parse.
 */
void CreateCoreDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateCoreDefinitionVersionResponsePrivate
 *
 * @brief  Private implementation for CreateCoreDefinitionVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCoreDefinitionVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCoreDefinitionVersionResponse instance.
 */
CreateCoreDefinitionVersionResponsePrivate::CreateCoreDefinitionVersionResponsePrivate(
    CreateCoreDefinitionVersionQueueResponse * const q) : CreateCoreDefinitionVersionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass CreateCoreDefinitionVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCoreDefinitionVersionResponsePrivate::CreateCoreDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCoreDefinitionVersionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
