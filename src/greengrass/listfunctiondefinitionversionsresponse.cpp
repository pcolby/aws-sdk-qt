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

#include "listfunctiondefinitionversionsresponse.h"
#include "listfunctiondefinitionversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  ListFunctionDefinitionVersionsResponse
 *
 * @brief  Handles Greengrass ListFunctionDefinitionVersions responses.
 *
 * @see    GreengrassClient::listFunctionDefinitionVersions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListFunctionDefinitionVersionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListFunctionDefinitionVersionsResponsePrivate(this), parent)
{
    setRequest(new ListFunctionDefinitionVersionsRequest(request));
    setReply(reply);
}

const ListFunctionDefinitionVersionsRequest * ListFunctionDefinitionVersionsResponse::request() const
{
    Q_D(const ListFunctionDefinitionVersionsResponse);
    return static_cast<const ListFunctionDefinitionVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass ListFunctionDefinitionVersions response.
 *
 * @param  response  Response to parse.
 */
void ListFunctionDefinitionVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListFunctionDefinitionVersionsResponsePrivate
 *
 * @brief  Private implementation for ListFunctionDefinitionVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListFunctionDefinitionVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListFunctionDefinitionVersionsResponse instance.
 */
ListFunctionDefinitionVersionsResponsePrivate::ListFunctionDefinitionVersionsResponsePrivate(
    ListFunctionDefinitionVersionsQueueResponse * const q) : ListFunctionDefinitionVersionsPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass ListFunctionDefinitionVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListFunctionDefinitionVersionsResponsePrivate::ListFunctionDefinitionVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFunctionDefinitionVersionsResponse"));
    /// @todo
}
