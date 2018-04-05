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

#include "listsecretversionidsresponse.h"
#include "listsecretversionidsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecretsManager {

/**
 * @class  ListSecretVersionIdsResponse
 *
 * @brief  Handles SecretsManager ListSecretVersionIds responses.
 *
 * @see    SecretsManagerClient::listSecretVersionIds
 */

/**
 * @brief  Constructs a new ListSecretVersionIdsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSecretVersionIdsResponse::ListSecretVersionIdsResponse(
        const ListSecretVersionIdsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecretsManagerResponse(new ListSecretVersionIdsResponsePrivate(this), parent)
{
    setRequest(new ListSecretVersionIdsRequest(request));
    setReply(reply);
}

const ListSecretVersionIdsRequest * ListSecretVersionIdsResponse::request() const
{
    Q_D(const ListSecretVersionIdsResponse);
    return static_cast<const ListSecretVersionIdsRequest *>(d->request);
}

/**
 * @brief  Parse a SecretsManager ListSecretVersionIds response.
 *
 * @param  response  Response to parse.
 */
void ListSecretVersionIdsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListSecretVersionIdsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListSecretVersionIdsResponsePrivate
 *
 * @brief  Private implementation for ListSecretVersionIdsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSecretVersionIdsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListSecretVersionIdsResponse instance.
 */
ListSecretVersionIdsResponsePrivate::ListSecretVersionIdsResponsePrivate(
    ListSecretVersionIdsResponse * const q) : SecretsManagerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SecretsManager ListSecretVersionIdsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListSecretVersionIdsResponsePrivate::parseListSecretVersionIdsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSecretVersionIdsResponse"));
    /// @todo
}

} // namespace SecretsManager
} // namespace QtAws
