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

#include "deletebucketreplicationresponse.h"
#include "deletebucketreplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  DeleteBucketReplicationResponse
 *
 * @brief  Handles S3 DeleteBucketReplication responses.
 *
 * @see    S3Client::deleteBucketReplication
 */

/**
 * @brief  Constructs a new DeleteBucketReplicationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBucketReplicationResponse::DeleteBucketReplicationResponse(
        const DeleteBucketReplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketReplicationResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketReplicationRequest(request));
    setReply(reply);
}

const DeleteBucketReplicationRequest * DeleteBucketReplicationResponse::request() const
{
    Q_D(const DeleteBucketReplicationResponse);
    return static_cast<const DeleteBucketReplicationRequest *>(d->request);
}

/**
 * @brief  Parse a S3 DeleteBucketReplication response.
 *
 * @param  response  Response to parse.
 */
void DeleteBucketReplicationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteBucketReplicationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBucketReplicationResponsePrivate
 *
 * @brief  Private implementation for DeleteBucketReplicationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketReplicationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBucketReplicationResponse instance.
 */
DeleteBucketReplicationResponsePrivate::DeleteBucketReplicationResponsePrivate(
    DeleteBucketReplicationResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 DeleteBucketReplicationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBucketReplicationResponsePrivate::DeleteBucketReplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketReplicationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
