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

#include "deleteobjecttaggingresponse.h"
#include "deleteobjecttaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  DeleteObjectTaggingResponse
 *
 * @brief  Handles S3 DeleteObjectTagging responses.
 *
 * @see    S3Client::deleteObjectTagging
 */

/**
 * @brief  Constructs a new DeleteObjectTaggingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteObjectTaggingResponse::DeleteObjectTaggingResponse(
        const DeleteObjectTaggingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteObjectTaggingResponsePrivate(this), parent)
{
    setRequest(new DeleteObjectTaggingRequest(request));
    setReply(reply);
}

const DeleteObjectTaggingRequest * DeleteObjectTaggingResponse::request() const
{
    Q_D(const DeleteObjectTaggingResponse);
    return static_cast<const DeleteObjectTaggingRequest *>(d->request);
}

/**
 * @brief  Parse a S3 DeleteObjectTagging response.
 *
 * @param  response  Response to parse.
 */
void DeleteObjectTaggingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteObjectTaggingResponsePrivate
 *
 * @brief  Private implementation for DeleteObjectTaggingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteObjectTaggingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteObjectTaggingResponse instance.
 */
DeleteObjectTaggingResponsePrivate::DeleteObjectTaggingResponsePrivate(
    DeleteObjectTaggingQueueResponse * const q) : DeleteObjectTaggingPrivate(q)
{

}

/**
 * @brief  Parse an S3 DeleteObjectTaggingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteObjectTaggingResponsePrivate::DeleteObjectTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteObjectTaggingResponse"));
    /// @todo
}

} // namespace S3
} // namespace AWS
