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

#include "deletevaultresponse.h"
#include "deletevaultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glacier {

/**
 * @class  DeleteVaultResponse
 *
 * @brief  Handles Glacier DeleteVault responses.
 *
 * @see    GlacierClient::deleteVault
 */

/**
 * @brief  Constructs a new DeleteVaultResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteVaultResponse::DeleteVaultResponse(
        const DeleteVaultRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new DeleteVaultResponsePrivate(this), parent)
{
    setRequest(new DeleteVaultRequest(request));
    setReply(reply);
}

const DeleteVaultRequest * DeleteVaultResponse::request() const
{
    Q_D(const DeleteVaultResponse);
    return static_cast<const DeleteVaultRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier DeleteVault response.
 *
 * @param  response  Response to parse.
 */
void DeleteVaultResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteVaultResponsePrivate
 *
 * @brief  Private implementation for DeleteVaultResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteVaultResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteVaultResponse instance.
 */
DeleteVaultResponsePrivate::DeleteVaultResponsePrivate(
    DeleteVaultQueueResponse * const q) : DeleteVaultPrivate(q)
{

}

/**
 * @brief  Parse an Glacier DeleteVaultResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteVaultResponsePrivate::DeleteVaultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteVaultResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace AWS
