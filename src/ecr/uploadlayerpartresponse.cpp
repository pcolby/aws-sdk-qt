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

#include "uploadlayerpartresponse.h"
#include "uploadlayerpartresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ECR {

/**
 * @class  UploadLayerPartResponse
 *
 * @brief  Handles ECR UploadLayerPart responses.
 *
 * @see    ECRClient::uploadLayerPart
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UploadLayerPartResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new UploadLayerPartResponsePrivate(this), parent)
{
    setRequest(new UploadLayerPartRequest(request));
    setReply(reply);
}

const UploadLayerPartRequest * UploadLayerPartResponse::request() const
{
    Q_D(const UploadLayerPartResponse);
    return static_cast<const UploadLayerPartRequest *>(d->request);
}

/**
 * @brief  Parse a ECR UploadLayerPart response.
 *
 * @param  response  Response to parse.
 */
void UploadLayerPartResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UploadLayerPartResponsePrivate
 *
 * @brief  Private implementation for UploadLayerPartResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UploadLayerPartResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UploadLayerPartResponse instance.
 */
UploadLayerPartResponsePrivate::UploadLayerPartResponsePrivate(
    UploadLayerPartQueueResponse * const q) : UploadLayerPartPrivate(q)
{

}

/**
 * @brief  Parse an ECR UploadLayerPartResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UploadLayerPartResponsePrivate::UploadLayerPartResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UploadLayerPartResponse"));
    /// @todo
}

} // namespace ECR
} // namespace AWS
