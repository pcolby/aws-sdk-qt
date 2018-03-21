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

#include "listgraphqlapisresponse.h"
#include "listgraphqlapisresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppSync {

/**
 * @class  ListGraphqlApisResponse
 *
 * @brief  Handles AppSync ListGraphqlApis responses.
 *
 * @see    AppSyncClient::listGraphqlApis
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGraphqlApisResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppSyncResponse(new ListGraphqlApisResponsePrivate(this), parent)
{
    setRequest(new ListGraphqlApisRequest(request));
    setReply(reply);
}

const ListGraphqlApisRequest * ListGraphqlApisResponse::request() const
{
    Q_D(const ListGraphqlApisResponse);
    return static_cast<const ListGraphqlApisRequest *>(d->request);
}

/**
 * @brief  Parse a AppSync ListGraphqlApis response.
 *
 * @param  response  Response to parse.
 */
void ListGraphqlApisResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListGraphqlApisResponsePrivate
 *
 * @brief  Private implementation for ListGraphqlApisResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGraphqlApisResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListGraphqlApisResponse instance.
 */
ListGraphqlApisResponsePrivate::ListGraphqlApisResponsePrivate(
    ListGraphqlApisQueueResponse * const q) : ListGraphqlApisPrivate(q)
{

}

/**
 * @brief  Parse an AppSync ListGraphqlApisResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListGraphqlApisResponsePrivate::ListGraphqlApisResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGraphqlApisResponse"));
    /// @todo
}

} // namespace AppSync
} // namespace AWS
