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

#include "listtagsforvaultresponse.h"
#include "listtagsforvaultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glacier {

/**
 * @class  ListTagsForVaultResponse
 *
 * @brief  Handles Glacier ListTagsForVault responses.
 *
 * @see    GlacierClient::listTagsForVault
 */

/**
 * @brief  Constructs a new ListTagsForVaultResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListTagsForVaultResponse::ListTagsForVaultResponse(
        const ListTagsForVaultRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new ListTagsForVaultResponsePrivate(this), parent)
{
    setRequest(new ListTagsForVaultRequest(request));
    setReply(reply);
}

const ListTagsForVaultRequest * ListTagsForVaultResponse::request() const
{
    Q_D(const ListTagsForVaultResponse);
    return static_cast<const ListTagsForVaultRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier ListTagsForVault response.
 *
 * @param  response  Response to parse.
 */
void ListTagsForVaultResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListTagsForVaultResponsePrivate
 *
 * @brief  Private implementation for ListTagsForVaultResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListTagsForVaultResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListTagsForVaultResponse instance.
 */
ListTagsForVaultResponsePrivate::ListTagsForVaultResponsePrivate(
    ListTagsForVaultQueueResponse * const q) : ListTagsForVaultPrivate(q)
{

}

/**
 * @brief  Parse an Glacier ListTagsForVaultResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListTagsForVaultResponsePrivate::ListTagsForVaultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListTagsForVaultResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace AWS
