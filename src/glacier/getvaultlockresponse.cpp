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

#include "getvaultlockresponse.h"
#include "getvaultlockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glacier {

/**
 * @class  GetVaultLockResponse
 *
 * @brief  Handles Glacier GetVaultLock responses.
 *
 * @see    GlacierClient::getVaultLock
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetVaultLockResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new GetVaultLockResponsePrivate(this), parent)
{
    setRequest(new GetVaultLockRequest(request));
    setReply(reply);
}

const GetVaultLockRequest * GetVaultLockResponse::request() const
{
    Q_D(const GetVaultLockResponse);
    return static_cast<const GetVaultLockRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier GetVaultLock response.
 *
 * @param  response  Response to parse.
 */
void GetVaultLockResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetVaultLockResponsePrivate
 *
 * @brief  Private implementation for GetVaultLockResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetVaultLockResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetVaultLockResponse instance.
 */
GetVaultLockResponsePrivate::GetVaultLockResponsePrivate(
    GetVaultLockQueueResponse * const q) : GetVaultLockPrivate(q)
{

}

/**
 * @brief  Parse an Glacier GetVaultLockResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetVaultLockResponsePrivate::GetVaultLockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVaultLockResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace AWS
