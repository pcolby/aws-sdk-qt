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

#include "getbucketreplicationresponse.h"
#include "getbucketreplicationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  GetBucketReplicationResponse
 *
 * @brief  Handles S3 GetBucketReplication responses.
 *
 * @see    S3Client::getBucketReplication
 */

/**
 * @brief  Constructs a new GetBucketReplicationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketReplicationResponse::GetBucketReplicationResponse(
        const GetBucketReplicationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketReplicationResponsePrivate(this), parent)
{
    setRequest(new GetBucketReplicationRequest(request));
    setReply(reply);
}

const GetBucketReplicationRequest * GetBucketReplicationResponse::request() const
{
    Q_D(const GetBucketReplicationResponse);
    return static_cast<const GetBucketReplicationRequest *>(d->request);
}

/**
 * @brief  Parse a S3 GetBucketReplication response.
 *
 * @param  response  Response to parse.
 */
void GetBucketReplicationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBucketReplicationResponsePrivate
 *
 * @brief  Private implementation for GetBucketReplicationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketReplicationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBucketReplicationResponse instance.
 */
GetBucketReplicationResponsePrivate::GetBucketReplicationResponsePrivate(
    GetBucketReplicationQueueResponse * const q) : GetBucketReplicationPrivate(q)
{

}

/**
 * @brief  Parse an S3 GetBucketReplicationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBucketReplicationResponsePrivate::GetBucketReplicationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketReplicationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
