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

#include "listvolumeinitiatorsresponse.h"
#include "listvolumeinitiatorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  ListVolumeInitiatorsResponse
 *
 * @brief  Handles StorageGateway ListVolumeInitiators responses.
 *
 * @see    StorageGatewayClient::listVolumeInitiators
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListVolumeInitiatorsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new ListVolumeInitiatorsResponsePrivate(this), parent)
{
    setRequest(new ListVolumeInitiatorsRequest(request));
    setReply(reply);
}

const ListVolumeInitiatorsRequest * ListVolumeInitiatorsResponse::request() const
{
    Q_D(const ListVolumeInitiatorsResponse);
    return static_cast<const ListVolumeInitiatorsRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway ListVolumeInitiators response.
 *
 * @param  response  Response to parse.
 */
void ListVolumeInitiatorsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListVolumeInitiatorsResponsePrivate
 *
 * @brief  Private implementation for ListVolumeInitiatorsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListVolumeInitiatorsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListVolumeInitiatorsResponse instance.
 */
ListVolumeInitiatorsResponsePrivate::ListVolumeInitiatorsResponsePrivate(
    ListVolumeInitiatorsQueueResponse * const q) : ListVolumeInitiatorsPrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway ListVolumeInitiatorsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListVolumeInitiatorsResponsePrivate::ListVolumeInitiatorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListVolumeInitiatorsResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace AWS
