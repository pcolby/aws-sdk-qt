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

#include "getidentitypoolconfigurationresponse.h"
#include "getidentitypoolconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoSync {

/**
 * @class  GetIdentityPoolConfigurationResponse
 *
 * @brief  Handles CognitoSync GetIdentityPoolConfiguration responses.
 *
 * @see    CognitoSyncClient::getIdentityPoolConfiguration
 */

/**
 * @brief  Constructs a new GetIdentityPoolConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetIdentityPoolConfigurationResponse::GetIdentityPoolConfigurationResponse(
        const GetIdentityPoolConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoSyncResponse(new GetIdentityPoolConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetIdentityPoolConfigurationRequest(request));
    setReply(reply);
}

const GetIdentityPoolConfigurationRequest * GetIdentityPoolConfigurationResponse::request() const
{
    Q_D(const GetIdentityPoolConfigurationResponse);
    return static_cast<const GetIdentityPoolConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoSync GetIdentityPoolConfiguration response.
 *
 * @param  response  Response to parse.
 */
void GetIdentityPoolConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetIdentityPoolConfigurationResponsePrivate
 *
 * @brief  Private implementation for GetIdentityPoolConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIdentityPoolConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetIdentityPoolConfigurationResponse instance.
 */
GetIdentityPoolConfigurationResponsePrivate::GetIdentityPoolConfigurationResponsePrivate(
    GetIdentityPoolConfigurationQueueResponse * const q) : GetIdentityPoolConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an CognitoSync GetIdentityPoolConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetIdentityPoolConfigurationResponsePrivate::GetIdentityPoolConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIdentityPoolConfigurationResponse"));
    /// @todo
}

} // namespace CognitoSync
} // namespace QtAws
