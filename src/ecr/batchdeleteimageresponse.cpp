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

#include "batchdeleteimageresponse.h"
#include "batchdeleteimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/**
 * @class  BatchDeleteImageResponse
 *
 * @brief  Handles ECR BatchDeleteImage responses.
 *
 * @see    ECRClient::batchDeleteImage
 */

/**
 * @brief  Constructs a new BatchDeleteImageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchDeleteImageResponse::BatchDeleteImageResponse(
        const BatchDeleteImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchDeleteImageResponse(new BatchDeleteImageResponsePrivate(this), parent)
{
    setRequest(new BatchDeleteImageRequest(request));
    setReply(reply);
}

const BatchDeleteImageRequest * BatchDeleteImageResponse::request() const
{
    Q_D(const BatchDeleteImageResponse);
    return static_cast<const BatchDeleteImageRequest *>(d->request);
}

/**
 * @brief  Parse a ECR BatchDeleteImage response.
 *
 * @param  response  Response to parse.
 */
void BatchDeleteImageResponse::parseSuccess(QIODevice &response)
{
    Q_D(BatchDeleteImageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchDeleteImageResponsePrivate
 *
 * @brief  Private implementation for BatchDeleteImageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchDeleteImageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchDeleteImageResponse instance.
 */
BatchDeleteImageResponsePrivate::BatchDeleteImageResponsePrivate(
    BatchDeleteImageResponse * const q) : ECRResponsePrivate(q)
{

}

/**
 * @brief  Parse an ECR BatchDeleteImageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchDeleteImageResponsePrivate::parseBatchDeleteImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchDeleteImageResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
