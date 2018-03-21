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

#include "getbucketlifecycleconfigurationresponse.h"
#include "getbucketlifecycleconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  GetBucketLifecycleConfigurationResponse
 *
 * @brief  Handles S3 GetBucketLifecycleConfiguration responses.
 *
 * @see    S3Client::getBucketLifecycleConfiguration
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketLifecycleConfigurationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketLifecycleConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetBucketLifecycleConfigurationRequest(request));
    setReply(reply);
}

const GetBucketLifecycleConfigurationRequest * GetBucketLifecycleConfigurationResponse::request() const
{
    Q_D(const GetBucketLifecycleConfigurationResponse);
    return static_cast<const GetBucketLifecycleConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a S3 GetBucketLifecycleConfiguration response.
 *
 * @param  response  Response to parse.
 */
void GetBucketLifecycleConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBucketLifecycleConfigurationResponsePrivate
 *
 * @brief  Private implementation for GetBucketLifecycleConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketLifecycleConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBucketLifecycleConfigurationResponse instance.
 */
GetBucketLifecycleConfigurationResponsePrivate::GetBucketLifecycleConfigurationResponsePrivate(
    GetBucketLifecycleConfigurationQueueResponse * const q) : GetBucketLifecycleConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an S3 GetBucketLifecycleConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBucketLifecycleConfigurationResponsePrivate::GetBucketLifecycleConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketLifecycleConfigurationResponse"));
    /// @todo
}

} // namespace S3
} // namespace AWS
