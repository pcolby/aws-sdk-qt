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

#include "listaccesskeysresponse.h"
#include "listaccesskeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  ListAccessKeysResponse
 *
 * @brief  Handles IAM ListAccessKeys responses.
 *
 * @see    IAMClient::listAccessKeys
 */

/**
 * @brief  Constructs a new ListAccessKeysResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListAccessKeysResponse::ListAccessKeysResponse(
        const ListAccessKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new ListAccessKeysResponsePrivate(this), parent)
{
    setRequest(new ListAccessKeysRequest(request));
    setReply(reply);
}

const ListAccessKeysRequest * ListAccessKeysResponse::request() const
{
    Q_D(const ListAccessKeysResponse);
    return static_cast<const ListAccessKeysRequest *>(d->request);
}

/**
 * @brief  Parse a IAM ListAccessKeys response.
 *
 * @param  response  Response to parse.
 */
void ListAccessKeysResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListAccessKeysResponsePrivate
 *
 * @brief  Private implementation for ListAccessKeysResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListAccessKeysResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListAccessKeysResponse instance.
 */
ListAccessKeysResponsePrivate::ListAccessKeysResponsePrivate(
    ListAccessKeysQueueResponse * const q) : ListAccessKeysPrivate(q)
{

}

/**
 * @brief  Parse an IAM ListAccessKeysResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListAccessKeysResponsePrivate::ListAccessKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListAccessKeysResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
