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

#include "getchangetokenresponse.h"
#include "getchangetokenresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/**
 * @class  GetChangeTokenResponse
 *
 * @brief  Handles WAF GetChangeToken responses.
 *
 * @see    WAFClient::getChangeToken
 */

/**
 * @brief  Constructs a new GetChangeTokenResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetChangeTokenResponse::GetChangeTokenResponse(
        const GetChangeTokenRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new GetChangeTokenResponsePrivate(this), parent)
{
    setRequest(new GetChangeTokenRequest(request));
    setReply(reply);
}

const GetChangeTokenRequest * GetChangeTokenResponse::request() const
{
    Q_D(const GetChangeTokenResponse);
    return static_cast<const GetChangeTokenRequest *>(d->request);
}

/**
 * @brief  Parse a WAF GetChangeToken response.
 *
 * @param  response  Response to parse.
 */
void GetChangeTokenResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetChangeTokenResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetChangeTokenResponsePrivate
 *
 * @brief  Private implementation for GetChangeTokenResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetChangeTokenResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetChangeTokenResponse instance.
 */
GetChangeTokenResponsePrivate::GetChangeTokenResponsePrivate(
    GetChangeTokenResponse * const q) : WAFResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAF GetChangeTokenResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetChangeTokenResponsePrivate::GetChangeTokenResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetChangeTokenResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
