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

#include "getbundlesresponse.h"
#include "getbundlesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetBundlesResponse
 *
 * @brief  Handles Lightsail GetBundles responses.
 *
 * @see    LightsailClient::getBundles
 */

/**
 * @brief  Constructs a new GetBundlesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBundlesResponse::GetBundlesResponse(
        const GetBundlesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetBundlesResponse(new GetBundlesResponsePrivate(this), parent)
{
    setRequest(new GetBundlesRequest(request));
    setReply(reply);
}

const GetBundlesRequest * GetBundlesResponse::request() const
{
    Q_D(const GetBundlesResponse);
    return static_cast<const GetBundlesRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetBundles response.
 *
 * @param  response  Response to parse.
 */
void GetBundlesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBundlesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBundlesResponsePrivate
 *
 * @brief  Private implementation for GetBundlesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBundlesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBundlesResponse instance.
 */
GetBundlesResponsePrivate::GetBundlesResponsePrivate(
    GetBundlesResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetBundlesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBundlesResponsePrivate::parseGetBundlesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBundlesResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
