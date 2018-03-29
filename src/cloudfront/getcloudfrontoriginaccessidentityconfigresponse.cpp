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

#include "getcloudfrontoriginaccessidentityconfigresponse.h"
#include "getcloudfrontoriginaccessidentityconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/**
 * @class  GetCloudFrontOriginAccessIdentityConfigResponse
 *
 * @brief  Handles CloudFront GetCloudFrontOriginAccessIdentityConfig responses.
 *
 * @see    CloudFrontClient::getCloudFrontOriginAccessIdentityConfig
 */

/**
 * @brief  Constructs a new GetCloudFrontOriginAccessIdentityConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCloudFrontOriginAccessIdentityConfigResponse::GetCloudFrontOriginAccessIdentityConfigResponse(
        const GetCloudFrontOriginAccessIdentityConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetCloudFrontOriginAccessIdentityConfigResponsePrivate(this), parent)
{
    setRequest(new GetCloudFrontOriginAccessIdentityConfigRequest(request));
    setReply(reply);
}

const GetCloudFrontOriginAccessIdentityConfigRequest * GetCloudFrontOriginAccessIdentityConfigResponse::request() const
{
    Q_D(const GetCloudFrontOriginAccessIdentityConfigResponse);
    return static_cast<const GetCloudFrontOriginAccessIdentityConfigRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront GetCloudFrontOriginAccessIdentityConfig response.
 *
 * @param  response  Response to parse.
 */
void GetCloudFrontOriginAccessIdentityConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCloudFrontOriginAccessIdentityConfigResponsePrivate
 *
 * @brief  Private implementation for GetCloudFrontOriginAccessIdentityConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCloudFrontOriginAccessIdentityConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCloudFrontOriginAccessIdentityConfigResponse instance.
 */
GetCloudFrontOriginAccessIdentityConfigResponsePrivate::GetCloudFrontOriginAccessIdentityConfigResponsePrivate(
    GetCloudFrontOriginAccessIdentityConfigResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFront GetCloudFrontOriginAccessIdentityConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCloudFrontOriginAccessIdentityConfigResponsePrivate::GetCloudFrontOriginAccessIdentityConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCloudFrontOriginAccessIdentityConfigResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
