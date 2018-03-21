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

#include "listelasticsearchversionsresponse.h"
#include "listelasticsearchversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticsearchService {

/**
 * @class  ListElasticsearchVersionsResponse
 *
 * @brief  Handles ElasticsearchService ListElasticsearchVersions responses.
 *
 * @see    ElasticsearchServiceClient::listElasticsearchVersions
 */

/**
 * @brief  Constructs a new ListElasticsearchVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListElasticsearchVersionsResponse::ListElasticsearchVersionsResponse(
        const ListElasticsearchVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new ListElasticsearchVersionsResponsePrivate(this), parent)
{
    setRequest(new ListElasticsearchVersionsRequest(request));
    setReply(reply);
}

const ListElasticsearchVersionsRequest * ListElasticsearchVersionsResponse::request() const
{
    Q_D(const ListElasticsearchVersionsResponse);
    return static_cast<const ListElasticsearchVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticsearchService ListElasticsearchVersions response.
 *
 * @param  response  Response to parse.
 */
void ListElasticsearchVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListElasticsearchVersionsResponsePrivate
 *
 * @brief  Private implementation for ListElasticsearchVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListElasticsearchVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListElasticsearchVersionsResponse instance.
 */
ListElasticsearchVersionsResponsePrivate::ListElasticsearchVersionsResponsePrivate(
    ListElasticsearchVersionsQueueResponse * const q) : ListElasticsearchVersionsPrivate(q)
{

}

/**
 * @brief  Parse an ElasticsearchService ListElasticsearchVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListElasticsearchVersionsResponsePrivate::ListElasticsearchVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListElasticsearchVersionsResponse"));
    /// @todo
}

} // namespace ElasticsearchService
} // namespace AWS
