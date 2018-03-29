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

#include "listglobaltablesresponse.h"
#include "listglobaltablesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/**
 * @class  ListGlobalTablesResponse
 *
 * @brief  Handles DynamoDB ListGlobalTables responses.
 *
 * @see    DynamoDBClient::listGlobalTables
 */

/**
 * @brief  Constructs a new ListGlobalTablesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListGlobalTablesResponse::ListGlobalTablesResponse(
        const ListGlobalTablesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new ListGlobalTablesResponsePrivate(this), parent)
{
    setRequest(new ListGlobalTablesRequest(request));
    setReply(reply);
}

const ListGlobalTablesRequest * ListGlobalTablesResponse::request() const
{
    Q_D(const ListGlobalTablesResponse);
    return static_cast<const ListGlobalTablesRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB ListGlobalTables response.
 *
 * @param  response  Response to parse.
 */
void ListGlobalTablesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListGlobalTablesResponsePrivate
 *
 * @brief  Private implementation for ListGlobalTablesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListGlobalTablesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListGlobalTablesResponse instance.
 */
ListGlobalTablesResponsePrivate::ListGlobalTablesResponsePrivate(
    ListGlobalTablesQueueResponse * const q) : ListGlobalTablesPrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB ListGlobalTablesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListGlobalTablesResponsePrivate::ListGlobalTablesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListGlobalTablesResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
