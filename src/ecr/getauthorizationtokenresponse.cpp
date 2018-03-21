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

#include "getauthorizationtokenresponse.h"
#include "getauthorizationtokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECR {

/**
 * @class  GetAuthorizationTokenResponse
 *
 * @brief  Handles ECR GetAuthorizationToken responses.
 *
 * @see    ECRClient::getAuthorizationToken
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAuthorizationTokenResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new GetAuthorizationTokenResponsePrivate(this), parent)
{
    setRequest(new GetAuthorizationTokenRequest(request));
    setReply(reply);
}

const GetAuthorizationTokenRequest * GetAuthorizationTokenResponse::request() const
{
    Q_D(const GetAuthorizationTokenResponse);
    return static_cast<const GetAuthorizationTokenRequest *>(d->request);
}

/**
 * @brief  Parse a ECR GetAuthorizationToken response.
 *
 * @param  response  Response to parse.
 */
void GetAuthorizationTokenResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAuthorizationTokenResponsePrivate
 *
 * @brief  Private implementation for GetAuthorizationTokenResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAuthorizationTokenResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAuthorizationTokenResponse instance.
 */
GetAuthorizationTokenResponsePrivate::GetAuthorizationTokenResponsePrivate(
    GetAuthorizationTokenQueueResponse * const q) : GetAuthorizationTokenPrivate(q)
{

}

/**
 * @brief  Parse an ECR GetAuthorizationTokenResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAuthorizationTokenResponsePrivate::GetAuthorizationTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAuthorizationTokenResponse"));
    /// @todo
}
