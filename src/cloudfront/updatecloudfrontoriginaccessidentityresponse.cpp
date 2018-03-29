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

#include "updatecloudfrontoriginaccessidentityresponse.h"
#include "updatecloudfrontoriginaccessidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/**
 * @class  UpdateCloudFrontOriginAccessIdentityResponse
 *
 * @brief  Handles CloudFront UpdateCloudFrontOriginAccessIdentity responses.
 *
 * @see    CloudFrontClient::updateCloudFrontOriginAccessIdentity
 */

/**
 * @brief  Constructs a new UpdateCloudFrontOriginAccessIdentityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateCloudFrontOriginAccessIdentityResponse::UpdateCloudFrontOriginAccessIdentityResponse(
        const UpdateCloudFrontOriginAccessIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateCloudFrontOriginAccessIdentityResponse(new UpdateCloudFrontOriginAccessIdentityResponsePrivate(this), parent)
{
    setRequest(new UpdateCloudFrontOriginAccessIdentityRequest(request));
    setReply(reply);
}

const UpdateCloudFrontOriginAccessIdentityRequest * UpdateCloudFrontOriginAccessIdentityResponse::request() const
{
    Q_D(const UpdateCloudFrontOriginAccessIdentityResponse);
    return static_cast<const UpdateCloudFrontOriginAccessIdentityRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront UpdateCloudFrontOriginAccessIdentity response.
 *
 * @param  response  Response to parse.
 */
void UpdateCloudFrontOriginAccessIdentityResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateCloudFrontOriginAccessIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateCloudFrontOriginAccessIdentityResponsePrivate
 *
 * @brief  Private implementation for UpdateCloudFrontOriginAccessIdentityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateCloudFrontOriginAccessIdentityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateCloudFrontOriginAccessIdentityResponse instance.
 */
UpdateCloudFrontOriginAccessIdentityResponsePrivate::UpdateCloudFrontOriginAccessIdentityResponsePrivate(
    UpdateCloudFrontOriginAccessIdentityResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFront UpdateCloudFrontOriginAccessIdentityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateCloudFrontOriginAccessIdentityResponsePrivate::parseUpdateCloudFrontOriginAccessIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCloudFrontOriginAccessIdentityResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
