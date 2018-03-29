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

#include "listidentitypoolsresponse.h"
#include "listidentitypoolsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentity {

/**
 * @class  ListIdentityPoolsResponse
 *
 * @brief  Handles CognitoIdentity ListIdentityPools responses.
 *
 * @see    CognitoIdentityClient::listIdentityPools
 */

/**
 * @brief  Constructs a new ListIdentityPoolsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListIdentityPoolsResponse::ListIdentityPoolsResponse(
        const ListIdentityPoolsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new ListIdentityPoolsResponsePrivate(this), parent)
{
    setRequest(new ListIdentityPoolsRequest(request));
    setReply(reply);
}

const ListIdentityPoolsRequest * ListIdentityPoolsResponse::request() const
{
    Q_D(const ListIdentityPoolsResponse);
    return static_cast<const ListIdentityPoolsRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentity ListIdentityPools response.
 *
 * @param  response  Response to parse.
 */
void ListIdentityPoolsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListIdentityPoolsResponsePrivate
 *
 * @brief  Private implementation for ListIdentityPoolsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListIdentityPoolsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListIdentityPoolsResponse instance.
 */
ListIdentityPoolsResponsePrivate::ListIdentityPoolsResponsePrivate(
    ListIdentityPoolsQueueResponse * const q) : ListIdentityPoolsPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentity ListIdentityPoolsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListIdentityPoolsResponsePrivate::ListIdentityPoolsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIdentityPoolsResponse"));
    /// @todo
}

} // namespace CognitoIdentity
} // namespace QtAws
