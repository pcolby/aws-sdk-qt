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

#include "queryresponse.h"
#include "queryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/**
 * @class  QueryResponse
 *
 * @brief  Handles DynamoDB Query responses.
 *
 * @see    DynamoDBClient::query
 */

/**
 * @brief  Constructs a new QueryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
QueryResponse::QueryResponse(
        const QueryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new QueryResponsePrivate(this), parent)
{
    setRequest(new QueryRequest(request));
    setReply(reply);
}

const QueryRequest * QueryResponse::request() const
{
    Q_D(const QueryResponse);
    return static_cast<const QueryRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB Query response.
 *
 * @param  response  Response to parse.
 */
void QueryResponse::parseSuccess(QIODevice &response)
{
    Q_D(QueryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  QueryResponsePrivate
 *
 * @brief  Private implementation for QueryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new QueryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public QueryResponse instance.
 */
QueryResponsePrivate::QueryResponsePrivate(
    QueryResponse * const q) : DynamoDBResponsePrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB QueryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void QueryResponsePrivate::QueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("QueryResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
