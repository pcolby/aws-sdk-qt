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

#include "listfacetattributesresponse.h"
#include "listfacetattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ListFacetAttributesResponse
 *
 * @brief  Handles CloudDirectory ListFacetAttributes responses.
 *
 * @see    CloudDirectoryClient::listFacetAttributes
 */

/**
 * @brief  Constructs a new ListFacetAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListFacetAttributesResponse::ListFacetAttributesResponse(
        const ListFacetAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListFacetAttributesResponsePrivate(this), parent)
{
    setRequest(new ListFacetAttributesRequest(request));
    setReply(reply);
}

const ListFacetAttributesRequest * ListFacetAttributesResponse::request() const
{
    Q_D(const ListFacetAttributesResponse);
    return static_cast<const ListFacetAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory ListFacetAttributes response.
 *
 * @param  response  Response to parse.
 */
void ListFacetAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListFacetAttributesResponsePrivate
 *
 * @brief  Private implementation for ListFacetAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListFacetAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListFacetAttributesResponse instance.
 */
ListFacetAttributesResponsePrivate::ListFacetAttributesResponsePrivate(
    ListFacetAttributesQueueResponse * const q) : ListFacetAttributesPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory ListFacetAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListFacetAttributesResponsePrivate::ListFacetAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListFacetAttributesResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace AWS
