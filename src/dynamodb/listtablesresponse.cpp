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

#include "listtablesresponse.h"
#include "listtablesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/**
 * @class  ListTablesResponse
 *
 * @brief  Handles DynamoDB ListTables responses.
 *
 * @see    DynamoDBClient::listTables
 */

/**
 * @brief  Constructs a new ListTablesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTablesResponse::ListTablesResponse(
        const ListTablesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new ListTablesResponsePrivate(this), parent)
{
    setRequest(new ListTablesRequest(request));
    setReply(reply);
}

const ListTablesRequest * ListTablesResponse::request() const
{
    Q_D(const ListTablesResponse);
    return static_cast<const ListTablesRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB ListTables response.
 *
 * @param  response  Response to parse.
 */
void ListTablesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListTablesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTablesResponsePrivate
 *
 * @brief  Private implementation for ListTablesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTablesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTablesResponse instance.
 */
ListTablesResponsePrivate::ListTablesResponsePrivate(
    ListTablesResponse * const q) : DynamoDBResponsePrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB ListTablesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTablesResponsePrivate::parseListTablesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTablesResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
