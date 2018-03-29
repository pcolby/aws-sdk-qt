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

#include "completevaultlockresponse.h"
#include "completevaultlockresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/**
 * @class  CompleteVaultLockResponse
 *
 * @brief  Handles Glacier CompleteVaultLock responses.
 *
 * @see    GlacierClient::completeVaultLock
 */

/**
 * @brief  Constructs a new CompleteVaultLockResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CompleteVaultLockResponse::CompleteVaultLockResponse(
        const CompleteVaultLockRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new CompleteVaultLockResponsePrivate(this), parent)
{
    setRequest(new CompleteVaultLockRequest(request));
    setReply(reply);
}

const CompleteVaultLockRequest * CompleteVaultLockResponse::request() const
{
    Q_D(const CompleteVaultLockResponse);
    return static_cast<const CompleteVaultLockRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier CompleteVaultLock response.
 *
 * @param  response  Response to parse.
 */
void CompleteVaultLockResponse::parseSuccess(QIODevice &response)
{
    Q_D(CompleteVaultLockResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CompleteVaultLockResponsePrivate
 *
 * @brief  Private implementation for CompleteVaultLockResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CompleteVaultLockResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CompleteVaultLockResponse instance.
 */
CompleteVaultLockResponsePrivate::CompleteVaultLockResponsePrivate(
    CompleteVaultLockResponse * const q) : GlacierResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glacier CompleteVaultLockResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CompleteVaultLockResponsePrivate::CompleteVaultLockResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CompleteVaultLockResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace QtAws
