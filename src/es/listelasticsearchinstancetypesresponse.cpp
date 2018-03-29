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

#include "listelasticsearchinstancetypesresponse.h"
#include "listelasticsearchinstancetypesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticsearchService {

/**
 * @class  ListElasticsearchInstanceTypesResponse
 *
 * @brief  Handles ElasticsearchService ListElasticsearchInstanceTypes responses.
 *
 * @see    ElasticsearchServiceClient::listElasticsearchInstanceTypes
 */

/**
 * @brief  Constructs a new ListElasticsearchInstanceTypesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListElasticsearchInstanceTypesResponse::ListElasticsearchInstanceTypesResponse(
        const ListElasticsearchInstanceTypesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticsearchServiceResponse(new ListElasticsearchInstanceTypesResponsePrivate(this), parent)
{
    setRequest(new ListElasticsearchInstanceTypesRequest(request));
    setReply(reply);
}

const ListElasticsearchInstanceTypesRequest * ListElasticsearchInstanceTypesResponse::request() const
{
    Q_D(const ListElasticsearchInstanceTypesResponse);
    return static_cast<const ListElasticsearchInstanceTypesRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticsearchService ListElasticsearchInstanceTypes response.
 *
 * @param  response  Response to parse.
 */
void ListElasticsearchInstanceTypesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListElasticsearchInstanceTypesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListElasticsearchInstanceTypesResponsePrivate
 *
 * @brief  Private implementation for ListElasticsearchInstanceTypesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListElasticsearchInstanceTypesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListElasticsearchInstanceTypesResponse instance.
 */
ListElasticsearchInstanceTypesResponsePrivate::ListElasticsearchInstanceTypesResponsePrivate(
    ListElasticsearchInstanceTypesResponse * const q) : ElasticsearchServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticsearchService ListElasticsearchInstanceTypesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListElasticsearchInstanceTypesResponsePrivate::parseListElasticsearchInstanceTypesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListElasticsearchInstanceTypesResponse"));
    /// @todo
}

} // namespace ElasticsearchService
} // namespace QtAws
