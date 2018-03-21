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

#include "putinventoryresponse.h"
#include "putinventoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  PutInventoryResponse
 *
 * @brief  Handles SSM PutInventory responses.
 *
 * @see    SSMClient::putInventory
 */

/**
 * @brief  Constructs a new PutInventoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutInventoryResponse::PutInventoryResponse(
        const PutInventoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new PutInventoryResponsePrivate(this), parent)
{
    setRequest(new PutInventoryRequest(request));
    setReply(reply);
}

const PutInventoryRequest * PutInventoryResponse::request() const
{
    Q_D(const PutInventoryResponse);
    return static_cast<const PutInventoryRequest *>(d->request);
}

/**
 * @brief  Parse a SSM PutInventory response.
 *
 * @param  response  Response to parse.
 */
void PutInventoryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutInventoryResponsePrivate
 *
 * @brief  Private implementation for PutInventoryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutInventoryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutInventoryResponse instance.
 */
PutInventoryResponsePrivate::PutInventoryResponsePrivate(
    PutInventoryQueueResponse * const q) : PutInventoryPrivate(q)
{

}

/**
 * @brief  Parse an SSM PutInventoryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutInventoryResponsePrivate::PutInventoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutInventoryResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
