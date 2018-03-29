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

#include "listcontainersresponse.h"
#include "listcontainersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaStore {

/**
 * @class  ListContainersResponse
 *
 * @brief  Handles MediaStore ListContainers responses.
 *
 * @see    MediaStoreClient::listContainers
 */

/**
 * @brief  Constructs a new ListContainersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListContainersResponse::ListContainersResponse(
        const ListContainersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MediaStoreResponse(new ListContainersResponsePrivate(this), parent)
{
    setRequest(new ListContainersRequest(request));
    setReply(reply);
}

const ListContainersRequest * ListContainersResponse::request() const
{
    Q_D(const ListContainersResponse);
    return static_cast<const ListContainersRequest *>(d->request);
}

/**
 * @brief  Parse a MediaStore ListContainers response.
 *
 * @param  response  Response to parse.
 */
void ListContainersResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListContainersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListContainersResponsePrivate
 *
 * @brief  Private implementation for ListContainersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListContainersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListContainersResponse instance.
 */
ListContainersResponsePrivate::ListContainersResponsePrivate(
    ListContainersResponse * const q) : MediaStoreResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaStore ListContainersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListContainersResponsePrivate::parseListContainersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListContainersResponse"));
    /// @todo
}

} // namespace MediaStore
} // namespace QtAws
