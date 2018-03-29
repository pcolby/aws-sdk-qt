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

#include "listvolumesresponse.h"
#include "listvolumesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  ListVolumesResponse
 *
 * @brief  Handles StorageGateway ListVolumes responses.
 *
 * @see    StorageGatewayClient::listVolumes
 */

/**
 * @brief  Constructs a new ListVolumesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListVolumesResponse::ListVolumesResponse(
        const ListVolumesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ListVolumesResponse(new ListVolumesResponsePrivate(this), parent)
{
    setRequest(new ListVolumesRequest(request));
    setReply(reply);
}

const ListVolumesRequest * ListVolumesResponse::request() const
{
    Q_D(const ListVolumesResponse);
    return static_cast<const ListVolumesRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway ListVolumes response.
 *
 * @param  response  Response to parse.
 */
void ListVolumesResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListVolumesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListVolumesResponsePrivate
 *
 * @brief  Private implementation for ListVolumesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListVolumesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListVolumesResponse instance.
 */
ListVolumesResponsePrivate::ListVolumesResponsePrivate(
    ListVolumesResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway ListVolumesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListVolumesResponsePrivate::parseListVolumesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVolumesResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
