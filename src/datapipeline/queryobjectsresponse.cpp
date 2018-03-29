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

#include "queryobjectsresponse.h"
#include "queryobjectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DataPipeline {

/**
 * @class  QueryObjectsResponse
 *
 * @brief  Handles DataPipeline QueryObjects responses.
 *
 * @see    DataPipelineClient::queryObjects
 */

/**
 * @brief  Constructs a new QueryObjectsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
QueryObjectsResponse::QueryObjectsResponse(
        const QueryObjectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DataPipelineResponse(new QueryObjectsResponsePrivate(this), parent)
{
    setRequest(new QueryObjectsRequest(request));
    setReply(reply);
}

const QueryObjectsRequest * QueryObjectsResponse::request() const
{
    Q_D(const QueryObjectsResponse);
    return static_cast<const QueryObjectsRequest *>(d->request);
}

/**
 * @brief  Parse a DataPipeline QueryObjects response.
 *
 * @param  response  Response to parse.
 */
void QueryObjectsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  QueryObjectsResponsePrivate
 *
 * @brief  Private implementation for QueryObjectsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new QueryObjectsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public QueryObjectsResponse instance.
 */
QueryObjectsResponsePrivate::QueryObjectsResponsePrivate(
    QueryObjectsQueueResponse * const q) : QueryObjectsPrivate(q)
{

}

/**
 * @brief  Parse an DataPipeline QueryObjectsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void QueryObjectsResponsePrivate::QueryObjectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("QueryObjectsResponse"));
    /// @todo
}

} // namespace DataPipeline
} // namespace QtAws
