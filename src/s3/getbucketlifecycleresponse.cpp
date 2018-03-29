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

#include "getbucketlifecycleresponse.h"
#include "getbucketlifecycleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  GetBucketLifecycleResponse
 *
 * @brief  Handles S3 GetBucketLifecycle responses.
 *
 * @see    S3Client::getBucketLifecycle
 */

/**
 * @brief  Constructs a new GetBucketLifecycleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketLifecycleResponse::GetBucketLifecycleResponse(
        const GetBucketLifecycleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetBucketLifecycleResponse(new GetBucketLifecycleResponsePrivate(this), parent)
{
    setRequest(new GetBucketLifecycleRequest(request));
    setReply(reply);
}

const GetBucketLifecycleRequest * GetBucketLifecycleResponse::request() const
{
    Q_D(const GetBucketLifecycleResponse);
    return static_cast<const GetBucketLifecycleRequest *>(d->request);
}

/**
 * @brief  Parse a S3 GetBucketLifecycle response.
 *
 * @param  response  Response to parse.
 */
void GetBucketLifecycleResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBucketLifecycleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBucketLifecycleResponsePrivate
 *
 * @brief  Private implementation for GetBucketLifecycleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketLifecycleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBucketLifecycleResponse instance.
 */
GetBucketLifecycleResponsePrivate::GetBucketLifecycleResponsePrivate(
    GetBucketLifecycleResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 GetBucketLifecycleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBucketLifecycleResponsePrivate::parseGetBucketLifecycleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketLifecycleResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
