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

#include "addcacheresponse.h"
#include "addcacheresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  AddCacheResponse
 *
 * @brief  Handles StorageGateway AddCache responses.
 *
 * @see    StorageGatewayClient::addCache
 */

/**
 * @brief  Constructs a new AddCacheResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddCacheResponse::AddCacheResponse(
        const AddCacheRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new AddCacheResponsePrivate(this), parent)
{
    setRequest(new AddCacheRequest(request));
    setReply(reply);
}

const AddCacheRequest * AddCacheResponse::request() const
{
    Q_D(const AddCacheResponse);
    return static_cast<const AddCacheRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway AddCache response.
 *
 * @param  response  Response to parse.
 */
void AddCacheResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddCacheResponsePrivate
 *
 * @brief  Private implementation for AddCacheResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddCacheResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddCacheResponse instance.
 */
AddCacheResponsePrivate::AddCacheResponsePrivate(
    AddCacheQueueResponse * const q) : AddCachePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway AddCacheResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddCacheResponsePrivate::AddCacheResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddCacheResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace AWS
