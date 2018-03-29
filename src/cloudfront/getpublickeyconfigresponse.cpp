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

#include "getpublickeyconfigresponse.h"
#include "getpublickeyconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/**
 * @class  GetPublicKeyConfigResponse
 *
 * @brief  Handles CloudFront GetPublicKeyConfig responses.
 *
 * @see    CloudFrontClient::getPublicKeyConfig
 */

/**
 * @brief  Constructs a new GetPublicKeyConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPublicKeyConfigResponse::GetPublicKeyConfigResponse(
        const GetPublicKeyConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetPublicKeyConfigResponsePrivate(this), parent)
{
    setRequest(new GetPublicKeyConfigRequest(request));
    setReply(reply);
}

const GetPublicKeyConfigRequest * GetPublicKeyConfigResponse::request() const
{
    Q_D(const GetPublicKeyConfigResponse);
    return static_cast<const GetPublicKeyConfigRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront GetPublicKeyConfig response.
 *
 * @param  response  Response to parse.
 */
void GetPublicKeyConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetPublicKeyConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetPublicKeyConfigResponsePrivate
 *
 * @brief  Private implementation for GetPublicKeyConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPublicKeyConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPublicKeyConfigResponse instance.
 */
GetPublicKeyConfigResponsePrivate::GetPublicKeyConfigResponsePrivate(
    GetPublicKeyConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFront GetPublicKeyConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPublicKeyConfigResponsePrivate::parseGetPublicKeyConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPublicKeyConfigResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
