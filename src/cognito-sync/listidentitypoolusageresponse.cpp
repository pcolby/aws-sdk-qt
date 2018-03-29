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

#include "listidentitypoolusageresponse.h"
#include "listidentitypoolusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoSync {

/**
 * @class  ListIdentityPoolUsageResponse
 *
 * @brief  Handles CognitoSync ListIdentityPoolUsage responses.
 *
 * @see    CognitoSyncClient::listIdentityPoolUsage
 */

/**
 * @brief  Constructs a new ListIdentityPoolUsageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListIdentityPoolUsageResponse::ListIdentityPoolUsageResponse(
        const ListIdentityPoolUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoSyncResponse(new ListIdentityPoolUsageResponsePrivate(this), parent)
{
    setRequest(new ListIdentityPoolUsageRequest(request));
    setReply(reply);
}

const ListIdentityPoolUsageRequest * ListIdentityPoolUsageResponse::request() const
{
    Q_D(const ListIdentityPoolUsageResponse);
    return static_cast<const ListIdentityPoolUsageRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoSync ListIdentityPoolUsage response.
 *
 * @param  response  Response to parse.
 */
void ListIdentityPoolUsageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListIdentityPoolUsageResponsePrivate
 *
 * @brief  Private implementation for ListIdentityPoolUsageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListIdentityPoolUsageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListIdentityPoolUsageResponse instance.
 */
ListIdentityPoolUsageResponsePrivate::ListIdentityPoolUsageResponsePrivate(
    ListIdentityPoolUsageResponse * const q) : CognitoSyncResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoSync ListIdentityPoolUsageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListIdentityPoolUsageResponsePrivate::ListIdentityPoolUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListIdentityPoolUsageResponse"));
    /// @todo
}

} // namespace CognitoSync
} // namespace QtAws
