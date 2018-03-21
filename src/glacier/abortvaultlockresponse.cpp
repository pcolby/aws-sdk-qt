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

#include "abortvaultlockresponse.h"
#include "abortvaultlockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glacier {

/**
 * @class  AbortVaultLockResponse
 *
 * @brief  Handles Glacier AbortVaultLock responses.
 *
 * @see    GlacierClient::abortVaultLock
 */

/**
 * @brief  Constructs a new AbortVaultLockResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AbortVaultLockResponse::AbortVaultLockResponse(
        const AbortVaultLockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new AbortVaultLockResponsePrivate(this), parent)
{
    setRequest(new AbortVaultLockRequest(request));
    setReply(reply);
}

const AbortVaultLockRequest * AbortVaultLockResponse::request() const
{
    Q_D(const AbortVaultLockResponse);
    return static_cast<const AbortVaultLockRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier AbortVaultLock response.
 *
 * @param  response  Response to parse.
 */
void AbortVaultLockResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AbortVaultLockResponsePrivate
 *
 * @brief  Private implementation for AbortVaultLockResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AbortVaultLockResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AbortVaultLockResponse instance.
 */
AbortVaultLockResponsePrivate::AbortVaultLockResponsePrivate(
    AbortVaultLockQueueResponse * const q) : AbortVaultLockPrivate(q)
{

}

/**
 * @brief  Parse an Glacier AbortVaultLockResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AbortVaultLockResponsePrivate::AbortVaultLockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AbortVaultLockResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace AWS
