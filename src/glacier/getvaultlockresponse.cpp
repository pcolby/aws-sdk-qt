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

#include "getvaultlockresponse.h"
#include "getvaultlockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/**
 * @class  GetVaultLockResponse
 *
 * @brief  Handles Glacier GetVaultLock responses.
 *
 * @see    GlacierClient::getVaultLock
 */

/**
 * @brief  Constructs a new GetVaultLockResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetVaultLockResponse::GetVaultLockResponse(
        const GetVaultLockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetVaultLockResponse(new GetVaultLockResponsePrivate(this), parent)
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
    Q_D(GetVaultLockResponse);
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
    GetVaultLockResponse * const q) : GlacierResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glacier GetVaultLockResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetVaultLockResponsePrivate::parseGetVaultLockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetVaultLockResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace QtAws
