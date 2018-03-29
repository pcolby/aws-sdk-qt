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

#include "listitemsresponse.h"
#include "listitemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStoreData {

/**
 * @class  ListItemsResponse
 *
 * @brief  Handles MediaStoreData ListItems responses.
 *
 * @see    MediaStoreDataClient::listItems
 */

/**
 * @brief  Constructs a new ListItemsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListItemsResponse::ListItemsResponse(
        const ListItemsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreDataResponse(new ListItemsResponsePrivate(this), parent)
{
    setRequest(new ListItemsRequest(request));
    setReply(reply);
}

const ListItemsRequest * ListItemsResponse::request() const
{
    Q_D(const ListItemsResponse);
    return static_cast<const ListItemsRequest *>(d->request);
}

/**
 * @brief  Parse a MediaStoreData ListItems response.
 *
 * @param  response  Response to parse.
 */
void ListItemsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListItemsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListItemsResponsePrivate
 *
 * @brief  Private implementation for ListItemsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListItemsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListItemsResponse instance.
 */
ListItemsResponsePrivate::ListItemsResponsePrivate(
    ListItemsResponse * const q) : MediaStoreDataResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaStoreData ListItemsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListItemsResponsePrivate::ListItemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListItemsResponse"));
    /// @todo
}

} // namespace MediaStoreData
} // namespace QtAws
