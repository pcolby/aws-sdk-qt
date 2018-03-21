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

#include "listassociatedfleetsresponse.h"
#include "listassociatedfleetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AppStream {

/**
 * @class  ListAssociatedFleetsResponse
 *
 * @brief  Handles AppStream ListAssociatedFleets responses.
 *
 * @see    AppStreamClient::listAssociatedFleets
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAssociatedFleetsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AppStreamResponse(new ListAssociatedFleetsResponsePrivate(this), parent)
{
    setRequest(new ListAssociatedFleetsRequest(request));
    setReply(reply);
}

const ListAssociatedFleetsRequest * ListAssociatedFleetsResponse::request() const
{
    Q_D(const ListAssociatedFleetsResponse);
    return static_cast<const ListAssociatedFleetsRequest *>(d->request);
}

/**
 * @brief  Parse a AppStream ListAssociatedFleets response.
 *
 * @param  response  Response to parse.
 */
void ListAssociatedFleetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAssociatedFleetsResponsePrivate
 *
 * @brief  Private implementation for ListAssociatedFleetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAssociatedFleetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAssociatedFleetsResponse instance.
 */
ListAssociatedFleetsResponsePrivate::ListAssociatedFleetsResponsePrivate(
    ListAssociatedFleetsQueueResponse * const q) : ListAssociatedFleetsPrivate(q)
{

}

/**
 * @brief  Parse an AppStream ListAssociatedFleetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAssociatedFleetsResponsePrivate::ListAssociatedFleetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAssociatedFleetsResponse"));
    /// @todo
}

} // namespace AppStream
} // namespace AWS
