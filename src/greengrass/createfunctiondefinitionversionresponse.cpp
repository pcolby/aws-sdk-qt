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

#include "createfunctiondefinitionversionresponse.h"
#include "createfunctiondefinitionversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  CreateFunctionDefinitionVersionResponse
 *
 * @brief  Handles Greengrass CreateFunctionDefinitionVersion responses.
 *
 * @see    GreengrassClient::createFunctionDefinitionVersion
 */

/**
 * @brief  Constructs a new CreateFunctionDefinitionVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateFunctionDefinitionVersionResponse::CreateFunctionDefinitionVersionResponse(
        const CreateFunctionDefinitionVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateFunctionDefinitionVersionResponsePrivate(this), parent)
{
    setRequest(new CreateFunctionDefinitionVersionRequest(request));
    setReply(reply);
}

const CreateFunctionDefinitionVersionRequest * CreateFunctionDefinitionVersionResponse::request() const
{
    Q_D(const CreateFunctionDefinitionVersionResponse);
    return static_cast<const CreateFunctionDefinitionVersionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass CreateFunctionDefinitionVersion response.
 *
 * @param  response  Response to parse.
 */
void CreateFunctionDefinitionVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateFunctionDefinitionVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateFunctionDefinitionVersionResponsePrivate
 *
 * @brief  Private implementation for CreateFunctionDefinitionVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFunctionDefinitionVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateFunctionDefinitionVersionResponse instance.
 */
CreateFunctionDefinitionVersionResponsePrivate::CreateFunctionDefinitionVersionResponsePrivate(
    CreateFunctionDefinitionVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass CreateFunctionDefinitionVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateFunctionDefinitionVersionResponsePrivate::parseCreateFunctionDefinitionVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFunctionDefinitionVersionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
