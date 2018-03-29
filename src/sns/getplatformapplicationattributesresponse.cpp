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

#include "getplatformapplicationattributesresponse.h"
#include "getplatformapplicationattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SNS {

/**
 * @class  GetPlatformApplicationAttributesResponse
 *
 * @brief  Handles SNS GetPlatformApplicationAttributes responses.
 *
 * @see    SNSClient::getPlatformApplicationAttributes
 */

/**
 * @brief  Constructs a new GetPlatformApplicationAttributesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPlatformApplicationAttributesResponse::GetPlatformApplicationAttributesResponse(
        const GetPlatformApplicationAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SNSResponse(new GetPlatformApplicationAttributesResponsePrivate(this), parent)
{
    setRequest(new GetPlatformApplicationAttributesRequest(request));
    setReply(reply);
}

const GetPlatformApplicationAttributesRequest * GetPlatformApplicationAttributesResponse::request() const
{
    Q_D(const GetPlatformApplicationAttributesResponse);
    return static_cast<const GetPlatformApplicationAttributesRequest *>(d->request);
}

/**
 * @brief  Parse a SNS GetPlatformApplicationAttributes response.
 *
 * @param  response  Response to parse.
 */
void GetPlatformApplicationAttributesResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetPlatformApplicationAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetPlatformApplicationAttributesResponsePrivate
 *
 * @brief  Private implementation for GetPlatformApplicationAttributesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPlatformApplicationAttributesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPlatformApplicationAttributesResponse instance.
 */
GetPlatformApplicationAttributesResponsePrivate::GetPlatformApplicationAttributesResponsePrivate(
    GetPlatformApplicationAttributesResponse * const q) : SNSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SNS GetPlatformApplicationAttributesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPlatformApplicationAttributesResponsePrivate::parseGetPlatformApplicationAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPlatformApplicationAttributesResponse"));
    /// @todo
}

} // namespace SNS
} // namespace QtAws
