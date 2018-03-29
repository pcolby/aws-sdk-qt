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

#include "removetagsfromvaultresponse.h"
#include "removetagsfromvaultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/**
 * @class  RemoveTagsFromVaultResponse
 *
 * @brief  Handles Glacier RemoveTagsFromVault responses.
 *
 * @see    GlacierClient::removeTagsFromVault
 */

/**
 * @brief  Constructs a new RemoveTagsFromVaultResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RemoveTagsFromVaultResponse::RemoveTagsFromVaultResponse(
        const RemoveTagsFromVaultRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new RemoveTagsFromVaultResponsePrivate(this), parent)
{
    setRequest(new RemoveTagsFromVaultRequest(request));
    setReply(reply);
}

const RemoveTagsFromVaultRequest * RemoveTagsFromVaultResponse::request() const
{
    Q_D(const RemoveTagsFromVaultResponse);
    return static_cast<const RemoveTagsFromVaultRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier RemoveTagsFromVault response.
 *
 * @param  response  Response to parse.
 */
void RemoveTagsFromVaultResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RemoveTagsFromVaultResponsePrivate
 *
 * @brief  Private implementation for RemoveTagsFromVaultResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RemoveTagsFromVaultResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RemoveTagsFromVaultResponse instance.
 */
RemoveTagsFromVaultResponsePrivate::RemoveTagsFromVaultResponsePrivate(
    RemoveTagsFromVaultResponse * const q) : GlacierResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glacier RemoveTagsFromVaultResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RemoveTagsFromVaultResponsePrivate::RemoveTagsFromVaultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RemoveTagsFromVaultResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace QtAws
