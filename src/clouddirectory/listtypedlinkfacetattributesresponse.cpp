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

#include "listtypedlinkfacetattributesresponse.h"
#include "listtypedlinkfacetattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ListTypedLinkFacetAttributesResponse
 *
 * @brief  Handles CloudDirectory ListTypedLinkFacetAttributes responses.
 *
 * @see    CloudDirectoryClient::listTypedLinkFacetAttributes
 */

/**
 * @brief  Constructs a new ListTypedLinkFacetAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTypedLinkFacetAttributesResponse::ListTypedLinkFacetAttributesResponse(
        const ListTypedLinkFacetAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new ListTypedLinkFacetAttributesResponsePrivate(this), parent)
{
    setRequest(new ListTypedLinkFacetAttributesRequest(request));
    setReply(reply);
}

const ListTypedLinkFacetAttributesRequest * ListTypedLinkFacetAttributesResponse::request() const
{
    Q_D(const ListTypedLinkFacetAttributesResponse);
    return static_cast<const ListTypedLinkFacetAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory ListTypedLinkFacetAttributes response.
 *
 * @param  response  Response to parse.
 */
void ListTypedLinkFacetAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTypedLinkFacetAttributesResponsePrivate
 *
 * @brief  Private implementation for ListTypedLinkFacetAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTypedLinkFacetAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTypedLinkFacetAttributesResponse instance.
 */
ListTypedLinkFacetAttributesResponsePrivate::ListTypedLinkFacetAttributesResponsePrivate(
    ListTypedLinkFacetAttributesQueueResponse * const q) : ListTypedLinkFacetAttributesPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory ListTypedLinkFacetAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTypedLinkFacetAttributesResponsePrivate::ListTypedLinkFacetAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTypedLinkFacetAttributesResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace AWS
