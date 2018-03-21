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

#include "createcloudfrontoriginaccessidentityresponse.h"
#include "createcloudfrontoriginaccessidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFront {

/**
 * @class  CreateCloudFrontOriginAccessIdentityResponse
 *
 * @brief  Handles CloudFront CreateCloudFrontOriginAccessIdentity responses.
 *
 * @see    CloudFrontClient::createCloudFrontOriginAccessIdentity
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateCloudFrontOriginAccessIdentityResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new CreateCloudFrontOriginAccessIdentityResponsePrivate(this), parent)
{
    setRequest(new CreateCloudFrontOriginAccessIdentityRequest(request));
    setReply(reply);
}

const CreateCloudFrontOriginAccessIdentityRequest * CreateCloudFrontOriginAccessIdentityResponse::request() const
{
    Q_D(const CreateCloudFrontOriginAccessIdentityResponse);
    return static_cast<const CreateCloudFrontOriginAccessIdentityRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront CreateCloudFrontOriginAccessIdentity response.
 *
 * @param  response  Response to parse.
 */
void CreateCloudFrontOriginAccessIdentityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateCloudFrontOriginAccessIdentityResponsePrivate
 *
 * @brief  Private implementation for CreateCloudFrontOriginAccessIdentityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateCloudFrontOriginAccessIdentityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateCloudFrontOriginAccessIdentityResponse instance.
 */
CreateCloudFrontOriginAccessIdentityResponsePrivate::CreateCloudFrontOriginAccessIdentityResponsePrivate(
    CreateCloudFrontOriginAccessIdentityQueueResponse * const q) : CreateCloudFrontOriginAccessIdentityPrivate(q)
{

}

/**
 * @brief  Parse an CloudFront CreateCloudFrontOriginAccessIdentityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateCloudFrontOriginAccessIdentityResponsePrivate::CreateCloudFrontOriginAccessIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateCloudFrontOriginAccessIdentityResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace AWS
