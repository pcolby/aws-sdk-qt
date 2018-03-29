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

#include "listserverneighborsresponse.h"
#include "listserverneighborsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationDiscoveryService {

/**
 * @class  ListServerNeighborsResponse
 *
 * @brief  Handles ApplicationDiscoveryService ListServerNeighbors responses.
 *
 * @see    ApplicationDiscoveryServiceClient::listServerNeighbors
 */

/**
 * @brief  Constructs a new ListServerNeighborsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListServerNeighborsResponse::ListServerNeighborsResponse(
        const ListServerNeighborsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListServerNeighborsResponse(new ListServerNeighborsResponsePrivate(this), parent)
{
    setRequest(new ListServerNeighborsRequest(request));
    setReply(reply);
}

const ListServerNeighborsRequest * ListServerNeighborsResponse::request() const
{
    Q_D(const ListServerNeighborsResponse);
    return static_cast<const ListServerNeighborsRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationDiscoveryService ListServerNeighbors response.
 *
 * @param  response  Response to parse.
 */
void ListServerNeighborsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListServerNeighborsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListServerNeighborsResponsePrivate
 *
 * @brief  Private implementation for ListServerNeighborsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListServerNeighborsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListServerNeighborsResponse instance.
 */
ListServerNeighborsResponsePrivate::ListServerNeighborsResponsePrivate(
    ListServerNeighborsResponse * const q) : ApplicationDiscoveryServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ApplicationDiscoveryService ListServerNeighborsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListServerNeighborsResponsePrivate::parseListServerNeighborsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListServerNeighborsResponse"));
    /// @todo
}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
