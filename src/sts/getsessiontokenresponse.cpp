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

#include "getsessiontokenresponse.h"
#include "getsessiontokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace STS {

/**
 * @class  GetSessionTokenResponse
 *
 * @brief  Handles STS GetSessionToken responses.
 *
 * @see    STSClient::getSessionToken
 */

/**
 * @brief  Constructs a new GetSessionTokenResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSessionTokenResponse::GetSessionTokenResponse(
        const GetSessionTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetSessionTokenResponse(new GetSessionTokenResponsePrivate(this), parent)
{
    setRequest(new GetSessionTokenRequest(request));
    setReply(reply);
}

const GetSessionTokenRequest * GetSessionTokenResponse::request() const
{
    Q_D(const GetSessionTokenResponse);
    return static_cast<const GetSessionTokenRequest *>(d->request);
}

/**
 * @brief  Parse a STS GetSessionToken response.
 *
 * @param  response  Response to parse.
 */
void GetSessionTokenResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetSessionTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSessionTokenResponsePrivate
 *
 * @brief  Private implementation for GetSessionTokenResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSessionTokenResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSessionTokenResponse instance.
 */
GetSessionTokenResponsePrivate::GetSessionTokenResponsePrivate(
    GetSessionTokenResponse * const q) : STSResponsePrivate(q)
{

}

/**
 * @brief  Parse an STS GetSessionTokenResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSessionTokenResponsePrivate::parseGetSessionTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSessionTokenResponse"));
    /// @todo
}

} // namespace STS
} // namespace QtAws
