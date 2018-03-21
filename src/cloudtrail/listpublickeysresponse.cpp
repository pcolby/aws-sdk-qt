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

#include "listpublickeysresponse.h"
#include "listpublickeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudTrail {

/**
 * @class  ListPublicKeysResponse
 *
 * @brief  Handles CloudTrail ListPublicKeys responses.
 *
 * @see    CloudTrailClient::listPublicKeys
 */

/**
 * @brief  Constructs a new ListPublicKeysResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListPublicKeysResponse::ListPublicKeysResponse(
        const ListPublicKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new ListPublicKeysResponsePrivate(this), parent)
{
    setRequest(new ListPublicKeysRequest(request));
    setReply(reply);
}

const ListPublicKeysRequest * ListPublicKeysResponse::request() const
{
    Q_D(const ListPublicKeysResponse);
    return static_cast<const ListPublicKeysRequest *>(d->request);
}

/**
 * @brief  Parse a CloudTrail ListPublicKeys response.
 *
 * @param  response  Response to parse.
 */
void ListPublicKeysResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListPublicKeysResponsePrivate
 *
 * @brief  Private implementation for ListPublicKeysResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPublicKeysResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListPublicKeysResponse instance.
 */
ListPublicKeysResponsePrivate::ListPublicKeysResponsePrivate(
    ListPublicKeysQueueResponse * const q) : ListPublicKeysPrivate(q)
{

}

/**
 * @brief  Parse an CloudTrail ListPublicKeysResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListPublicKeysResponsePrivate::ListPublicKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListPublicKeysResponse"));
    /// @todo
}

} // namespace CloudTrail
} // namespace AWS
