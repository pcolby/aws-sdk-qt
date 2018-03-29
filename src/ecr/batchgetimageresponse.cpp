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

#include "batchgetimageresponse.h"
#include "batchgetimageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ECR {

/**
 * @class  BatchGetImageResponse
 *
 * @brief  Handles ECR BatchGetImage responses.
 *
 * @see    ECRClient::batchGetImage
 */

/**
 * @brief  Constructs a new BatchGetImageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
BatchGetImageResponse::BatchGetImageResponse(
        const BatchGetImageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ECRResponse(new BatchGetImageResponsePrivate(this), parent)
{
    setRequest(new BatchGetImageRequest(request));
    setReply(reply);
}

const BatchGetImageRequest * BatchGetImageResponse::request() const
{
    Q_D(const BatchGetImageResponse);
    return static_cast<const BatchGetImageRequest *>(d->request);
}

/**
 * @brief  Parse a ECR BatchGetImage response.
 *
 * @param  response  Response to parse.
 */
void BatchGetImageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  BatchGetImageResponsePrivate
 *
 * @brief  Private implementation for BatchGetImageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new BatchGetImageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public BatchGetImageResponse instance.
 */
BatchGetImageResponsePrivate::BatchGetImageResponsePrivate(
    BatchGetImageResponse * const q) : ECRResponsePrivate(q)
{

}

/**
 * @brief  Parse an ECR BatchGetImageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void BatchGetImageResponsePrivate::BatchGetImageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchGetImageResponse"));
    /// @todo
}

} // namespace ECR
} // namespace QtAws
