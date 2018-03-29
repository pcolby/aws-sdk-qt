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

#include "listvolumerecoverypointsresponse.h"
#include "listvolumerecoverypointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  ListVolumeRecoveryPointsResponse
 *
 * @brief  Handles StorageGateway ListVolumeRecoveryPoints responses.
 *
 * @see    StorageGatewayClient::listVolumeRecoveryPoints
 */

/**
 * @brief  Constructs a new ListVolumeRecoveryPointsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListVolumeRecoveryPointsResponse::ListVolumeRecoveryPointsResponse(
        const ListVolumeRecoveryPointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new ListVolumeRecoveryPointsResponsePrivate(this), parent)
{
    setRequest(new ListVolumeRecoveryPointsRequest(request));
    setReply(reply);
}

const ListVolumeRecoveryPointsRequest * ListVolumeRecoveryPointsResponse::request() const
{
    Q_D(const ListVolumeRecoveryPointsResponse);
    return static_cast<const ListVolumeRecoveryPointsRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway ListVolumeRecoveryPoints response.
 *
 * @param  response  Response to parse.
 */
void ListVolumeRecoveryPointsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListVolumeRecoveryPointsResponsePrivate
 *
 * @brief  Private implementation for ListVolumeRecoveryPointsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListVolumeRecoveryPointsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListVolumeRecoveryPointsResponse instance.
 */
ListVolumeRecoveryPointsResponsePrivate::ListVolumeRecoveryPointsResponsePrivate(
    ListVolumeRecoveryPointsQueueResponse * const q) : ListVolumeRecoveryPointsPrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway ListVolumeRecoveryPointsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListVolumeRecoveryPointsResponsePrivate::ListVolumeRecoveryPointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVolumeRecoveryPointsResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace AWS
