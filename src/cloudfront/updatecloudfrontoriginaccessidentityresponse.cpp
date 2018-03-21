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

#include "updatecloudfrontoriginaccessidentityresponse.h"
#include "updatecloudfrontoriginaccessidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFront {

/**
 * @class  UpdateCloudFrontOriginAccessIdentityResponse
 *
 * @brief  Handles CloudFront UpdateCloudFrontOriginAccessIdentity responses.
 *
 * @see    CloudFrontClient::updateCloudFrontOriginAccessIdentity
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateCloudFrontOriginAccessIdentityResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new UpdateCloudFrontOriginAccessIdentityResponsePrivate(this), parent)
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
    Q_D(Response);
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
    UpdateCloudFrontOriginAccessIdentityQueueResponse * const q) : UpdateCloudFrontOriginAccessIdentityPrivate(q)
{

}

/**
 * @brief  Parse an CloudFront UpdateCloudFrontOriginAccessIdentityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateCloudFrontOriginAccessIdentityResponsePrivate::UpdateCloudFrontOriginAccessIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateCloudFrontOriginAccessIdentityResponse"));
    /// @todo
}
