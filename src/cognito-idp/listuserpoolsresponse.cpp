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

#include "listuserpoolsresponse.h"
#include "listuserpoolsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  ListUserPoolsResponse
 *
 * @brief  Handles CognitoIdentityProvider ListUserPools responses.
 *
 * @see    CognitoIdentityProviderClient::listUserPools
 */

/**
 * @brief  Constructs a new ListUserPoolsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListUserPoolsResponse::ListUserPoolsResponse(
        const ListUserPoolsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new ListUserPoolsResponsePrivate(this), parent)
{
    setRequest(new ListUserPoolsRequest(request));
    setReply(reply);
}

const ListUserPoolsRequest * ListUserPoolsResponse::request() const
{
    Q_D(const ListUserPoolsResponse);
    return static_cast<const ListUserPoolsRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider ListUserPools response.
 *
 * @param  response  Response to parse.
 */
void ListUserPoolsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListUserPoolsResponsePrivate
 *
 * @brief  Private implementation for ListUserPoolsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListUserPoolsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListUserPoolsResponse instance.
 */
ListUserPoolsResponsePrivate::ListUserPoolsResponsePrivate(
    ListUserPoolsResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider ListUserPoolsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListUserPoolsResponsePrivate::ListUserPoolsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListUserPoolsResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
