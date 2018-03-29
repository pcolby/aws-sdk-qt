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

#include "listresourceserversresponse.h"
#include "listresourceserversresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  ListResourceServersResponse
 *
 * @brief  Handles CognitoIdentityProvider ListResourceServers responses.
 *
 * @see    CognitoIdentityProviderClient::listResourceServers
 */

/**
 * @brief  Constructs a new ListResourceServersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListResourceServersResponse::ListResourceServersResponse(
        const ListResourceServersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ListResourceServersResponsePrivate(this), parent)
{
    setRequest(new ListResourceServersRequest(request));
    setReply(reply);
}

const ListResourceServersRequest * ListResourceServersResponse::request() const
{
    Q_D(const ListResourceServersResponse);
    return static_cast<const ListResourceServersRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider ListResourceServers response.
 *
 * @param  response  Response to parse.
 */
void ListResourceServersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListResourceServersResponsePrivate
 *
 * @brief  Private implementation for ListResourceServersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListResourceServersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListResourceServersResponse instance.
 */
ListResourceServersResponsePrivate::ListResourceServersResponsePrivate(
    ListResourceServersQueueResponse * const q) : ListResourceServersPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider ListResourceServersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListResourceServersResponsePrivate::ListResourceServersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListResourceServersResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace AWS
