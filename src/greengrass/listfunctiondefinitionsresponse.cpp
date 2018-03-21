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

#include "listfunctiondefinitionsresponse.h"
#include "listfunctiondefinitionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Greengrass {

/**
 * @class  ListFunctionDefinitionsResponse
 *
 * @brief  Handles Greengrass ListFunctionDefinitions responses.
 *
 * @see    GreengrassClient::listFunctionDefinitions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListFunctionDefinitionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new ListFunctionDefinitionsResponsePrivate(this), parent)
{
    setRequest(new ListFunctionDefinitionsRequest(request));
    setReply(reply);
}

const ListFunctionDefinitionsRequest * ListFunctionDefinitionsResponse::request() const
{
    Q_D(const ListFunctionDefinitionsResponse);
    return static_cast<const ListFunctionDefinitionsRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass ListFunctionDefinitions response.
 *
 * @param  response  Response to parse.
 */
void ListFunctionDefinitionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListFunctionDefinitionsResponsePrivate
 *
 * @brief  Private implementation for ListFunctionDefinitionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListFunctionDefinitionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListFunctionDefinitionsResponse instance.
 */
ListFunctionDefinitionsResponsePrivate::ListFunctionDefinitionsResponsePrivate(
    ListFunctionDefinitionsQueueResponse * const q) : ListFunctionDefinitionsPrivate(q)
{

}

/**
 * @brief  Parse an Greengrass ListFunctionDefinitionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListFunctionDefinitionsResponsePrivate::ListFunctionDefinitionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFunctionDefinitionsResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace AWS
