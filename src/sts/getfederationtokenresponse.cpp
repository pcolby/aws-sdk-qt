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

#include "getfederationtokenresponse.h"
#include "getfederationtokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace STS {

/**
 * @class  GetFederationTokenResponse
 *
 * @brief  Handles STS GetFederationToken responses.
 *
 * @see    STSClient::getFederationToken
 */

/**
 * @brief  Constructs a new GetFederationTokenResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFederationTokenResponse::GetFederationTokenResponse(
        const GetFederationTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : STSResponse(new GetFederationTokenResponsePrivate(this), parent)
{
    setRequest(new GetFederationTokenRequest(request));
    setReply(reply);
}

const GetFederationTokenRequest * GetFederationTokenResponse::request() const
{
    Q_D(const GetFederationTokenResponse);
    return static_cast<const GetFederationTokenRequest *>(d->request);
}

/**
 * @brief  Parse a STS GetFederationToken response.
 *
 * @param  response  Response to parse.
 */
void GetFederationTokenResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetFederationTokenResponsePrivate
 *
 * @brief  Private implementation for GetFederationTokenResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFederationTokenResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetFederationTokenResponse instance.
 */
GetFederationTokenResponsePrivate::GetFederationTokenResponsePrivate(
    GetFederationTokenResponse * const q) : STSResponsePrivate(q)
{

}

/**
 * @brief  Parse an STS GetFederationTokenResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetFederationTokenResponsePrivate::GetFederationTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFederationTokenResponse"));
    /// @todo
}

} // namespace STS
} // namespace QtAws
