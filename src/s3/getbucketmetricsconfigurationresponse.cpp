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

#include "getbucketmetricsconfigurationresponse.h"
#include "getbucketmetricsconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  GetBucketMetricsConfigurationResponse
 *
 * @brief  Handles S3 GetBucketMetricsConfiguration responses.
 *
 * @see    S3Client::getBucketMetricsConfiguration
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketMetricsConfigurationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketMetricsConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetBucketMetricsConfigurationRequest(request));
    setReply(reply);
}

const GetBucketMetricsConfigurationRequest * GetBucketMetricsConfigurationResponse::request() const
{
    Q_D(const GetBucketMetricsConfigurationResponse);
    return static_cast<const GetBucketMetricsConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a S3 GetBucketMetricsConfiguration response.
 *
 * @param  response  Response to parse.
 */
void GetBucketMetricsConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBucketMetricsConfigurationResponsePrivate
 *
 * @brief  Private implementation for GetBucketMetricsConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketMetricsConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBucketMetricsConfigurationResponse instance.
 */
GetBucketMetricsConfigurationResponsePrivate::GetBucketMetricsConfigurationResponsePrivate(
    GetBucketMetricsConfigurationQueueResponse * const q) : GetBucketMetricsConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an S3 GetBucketMetricsConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBucketMetricsConfigurationResponsePrivate::GetBucketMetricsConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketMetricsConfigurationResponse"));
    /// @todo
}

} // namespace S3
} // namespace AWS
