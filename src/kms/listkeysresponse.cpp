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

#include "listkeysresponse.h"
#include "listkeysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace KMS {

/**
 * @class  ListKeysResponse
 *
 * @brief  Handles KMS ListKeys responses.
 *
 * @see    KMSClient::listKeys
 */

/**
 * @brief  Constructs a new ListKeysResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListKeysResponse::ListKeysResponse(
        const ListKeysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KMSResponse(new ListKeysResponsePrivate(this), parent)
{
    setRequest(new ListKeysRequest(request));
    setReply(reply);
}

const ListKeysRequest * ListKeysResponse::request() const
{
    Q_D(const ListKeysResponse);
    return static_cast<const ListKeysRequest *>(d->request);
}

/**
 * @brief  Parse a KMS ListKeys response.
 *
 * @param  response  Response to parse.
 */
void ListKeysResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListKeysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListKeysResponsePrivate
 *
 * @brief  Private implementation for ListKeysResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListKeysResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListKeysResponse instance.
 */
ListKeysResponsePrivate::ListKeysResponsePrivate(
    ListKeysResponse * const q) : KMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an KMS ListKeysResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListKeysResponsePrivate::ListKeysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListKeysResponse"));
    /// @todo
}

} // namespace KMS
} // namespace QtAws
