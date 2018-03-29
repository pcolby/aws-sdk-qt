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

#include "deletefunctiondefinitionresponse.h"
#include "deletefunctiondefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  DeleteFunctionDefinitionResponse
 *
 * @brief  Handles Greengrass DeleteFunctionDefinition responses.
 *
 * @see    GreengrassClient::deleteFunctionDefinition
 */

/**
 * @brief  Constructs a new DeleteFunctionDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteFunctionDefinitionResponse::DeleteFunctionDefinitionResponse(
        const DeleteFunctionDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new DeleteFunctionDefinitionResponsePrivate(this), parent)
{
    setRequest(new DeleteFunctionDefinitionRequest(request));
    setReply(reply);
}

const DeleteFunctionDefinitionRequest * DeleteFunctionDefinitionResponse::request() const
{
    Q_D(const DeleteFunctionDefinitionResponse);
    return static_cast<const DeleteFunctionDefinitionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass DeleteFunctionDefinition response.
 *
 * @param  response  Response to parse.
 */
void DeleteFunctionDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteFunctionDefinitionResponsePrivate
 *
 * @brief  Private implementation for DeleteFunctionDefinitionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFunctionDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteFunctionDefinitionResponse instance.
 */
DeleteFunctionDefinitionResponsePrivate::DeleteFunctionDefinitionResponsePrivate(
    DeleteFunctionDefinitionQueueResponse * const q) : DeleteFunctionDefinitionPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass DeleteFunctionDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteFunctionDefinitionResponsePrivate::DeleteFunctionDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFunctionDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
