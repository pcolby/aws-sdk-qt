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

#include "deletecloudfrontoriginaccessidentityresponse.h"
#include "deletecloudfrontoriginaccessidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudFront {

/**
 * @class  DeleteCloudFrontOriginAccessIdentityResponse
 *
 * @brief  Handles CloudFront DeleteCloudFrontOriginAccessIdentity responses.
 *
 * @see    CloudFrontClient::deleteCloudFrontOriginAccessIdentity
 */

/**
 * @brief  Constructs a new DeleteCloudFrontOriginAccessIdentityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteCloudFrontOriginAccessIdentityResponse::DeleteCloudFrontOriginAccessIdentityResponse(
        const DeleteCloudFrontOriginAccessIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new DeleteCloudFrontOriginAccessIdentityResponsePrivate(this), parent)
{
    setRequest(new DeleteCloudFrontOriginAccessIdentityRequest(request));
    setReply(reply);
}

const DeleteCloudFrontOriginAccessIdentityRequest * DeleteCloudFrontOriginAccessIdentityResponse::request() const
{
    Q_D(const DeleteCloudFrontOriginAccessIdentityResponse);
    return static_cast<const DeleteCloudFrontOriginAccessIdentityRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront DeleteCloudFrontOriginAccessIdentity response.
 *
 * @param  response  Response to parse.
 */
void DeleteCloudFrontOriginAccessIdentityResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteCloudFrontOriginAccessIdentityResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteCloudFrontOriginAccessIdentityResponsePrivate
 *
 * @brief  Private implementation for DeleteCloudFrontOriginAccessIdentityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteCloudFrontOriginAccessIdentityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteCloudFrontOriginAccessIdentityResponse instance.
 */
DeleteCloudFrontOriginAccessIdentityResponsePrivate::DeleteCloudFrontOriginAccessIdentityResponsePrivate(
    DeleteCloudFrontOriginAccessIdentityResponse * const q) : CloudFrontResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudFront DeleteCloudFrontOriginAccessIdentityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteCloudFrontOriginAccessIdentityResponsePrivate::DeleteCloudFrontOriginAccessIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteCloudFrontOriginAccessIdentityResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace QtAws
