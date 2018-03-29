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

#include "deletebucketlifecycleresponse.h"
#include "deletebucketlifecycleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  DeleteBucketLifecycleResponse
 *
 * @brief  Handles S3 DeleteBucketLifecycle responses.
 *
 * @see    S3Client::deleteBucketLifecycle
 */

/**
 * @brief  Constructs a new DeleteBucketLifecycleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBucketLifecycleResponse::DeleteBucketLifecycleResponse(
        const DeleteBucketLifecycleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteBucketLifecycleResponse(new DeleteBucketLifecycleResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketLifecycleRequest(request));
    setReply(reply);
}

const DeleteBucketLifecycleRequest * DeleteBucketLifecycleResponse::request() const
{
    Q_D(const DeleteBucketLifecycleResponse);
    return static_cast<const DeleteBucketLifecycleRequest *>(d->request);
}

/**
 * @brief  Parse a S3 DeleteBucketLifecycle response.
 *
 * @param  response  Response to parse.
 */
void DeleteBucketLifecycleResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteBucketLifecycleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBucketLifecycleResponsePrivate
 *
 * @brief  Private implementation for DeleteBucketLifecycleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketLifecycleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBucketLifecycleResponse instance.
 */
DeleteBucketLifecycleResponsePrivate::DeleteBucketLifecycleResponsePrivate(
    DeleteBucketLifecycleResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 DeleteBucketLifecycleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBucketLifecycleResponsePrivate::parseDeleteBucketLifecycleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketLifecycleResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
