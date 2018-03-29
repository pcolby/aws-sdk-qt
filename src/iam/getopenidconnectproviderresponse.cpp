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

#include "getopenidconnectproviderresponse.h"
#include "getopenidconnectproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IAM {

/**
 * @class  GetOpenIDConnectProviderResponse
 *
 * @brief  Handles IAM GetOpenIDConnectProvider responses.
 *
 * @see    IAMClient::getOpenIDConnectProvider
 */

/**
 * @brief  Constructs a new GetOpenIDConnectProviderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetOpenIDConnectProviderResponse::GetOpenIDConnectProviderResponse(
        const GetOpenIDConnectProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new GetOpenIDConnectProviderResponsePrivate(this), parent)
{
    setRequest(new GetOpenIDConnectProviderRequest(request));
    setReply(reply);
}

const GetOpenIDConnectProviderRequest * GetOpenIDConnectProviderResponse::request() const
{
    Q_D(const GetOpenIDConnectProviderResponse);
    return static_cast<const GetOpenIDConnectProviderRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GetOpenIDConnectProvider response.
 *
 * @param  response  Response to parse.
 */
void GetOpenIDConnectProviderResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetOpenIDConnectProviderResponsePrivate
 *
 * @brief  Private implementation for GetOpenIDConnectProviderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetOpenIDConnectProviderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetOpenIDConnectProviderResponse instance.
 */
GetOpenIDConnectProviderResponsePrivate::GetOpenIDConnectProviderResponsePrivate(
    GetOpenIDConnectProviderResponse * const q) : IAMResponsePrivate(q)
{

}

/**
 * @brief  Parse an IAM GetOpenIDConnectProviderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetOpenIDConnectProviderResponsePrivate::GetOpenIDConnectProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOpenIDConnectProviderResponse"));
    /// @todo
}

} // namespace IAM
} // namespace QtAws
