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

#include "listsecretsresponse.h"
#include "listsecretsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SecretsManager {

/**
 * @class  ListSecretsResponse
 *
 * @brief  Handles SecretsManager ListSecrets responses.
 *
 * @see    SecretsManagerClient::listSecrets
 */

/**
 * @brief  Constructs a new ListSecretsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListSecretsResponse::ListSecretsResponse(
        const ListSecretsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SecretsManagerResponse(new ListSecretsResponsePrivate(this), parent)
{
    setRequest(new ListSecretsRequest(request));
    setReply(reply);
}

const ListSecretsRequest * ListSecretsResponse::request() const
{
    Q_D(const ListSecretsResponse);
    return static_cast<const ListSecretsRequest *>(d->request);
}

/**
 * @brief  Parse a SecretsManager ListSecrets response.
 *
 * @param  response  Response to parse.
 */
void ListSecretsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListSecretsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListSecretsResponsePrivate
 *
 * @brief  Private implementation for ListSecretsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSecretsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListSecretsResponse instance.
 */
ListSecretsResponsePrivate::ListSecretsResponsePrivate(
    ListSecretsResponse * const q) : SecretsManagerResponsePrivate(q)
{

}

/**
 * @brief  Parse an SecretsManager ListSecretsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListSecretsResponsePrivate::parseListSecretsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSecretsResponse"));
    /// @todo
}

} // namespace SecretsManager
} // namespace QtAws
