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

#include "deletebucketmetricsconfigurationresponse.h"
#include "deletebucketmetricsconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  DeleteBucketMetricsConfigurationResponse
 *
 * @brief  Handles S3 DeleteBucketMetricsConfiguration responses.
 *
 * @see    S3Client::deleteBucketMetricsConfiguration
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBucketMetricsConfigurationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketMetricsConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketMetricsConfigurationRequest(request));
    setReply(reply);
}

const DeleteBucketMetricsConfigurationRequest * DeleteBucketMetricsConfigurationResponse::request() const
{
    Q_D(const DeleteBucketMetricsConfigurationResponse);
    return static_cast<const DeleteBucketMetricsConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a S3 DeleteBucketMetricsConfiguration response.
 *
 * @param  response  Response to parse.
 */
void DeleteBucketMetricsConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBucketMetricsConfigurationResponsePrivate
 *
 * @brief  Private implementation for DeleteBucketMetricsConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketMetricsConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBucketMetricsConfigurationResponse instance.
 */
DeleteBucketMetricsConfigurationResponsePrivate::DeleteBucketMetricsConfigurationResponsePrivate(
    DeleteBucketMetricsConfigurationQueueResponse * const q) : DeleteBucketMetricsConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an S3 DeleteBucketMetricsConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBucketMetricsConfigurationResponsePrivate::DeleteBucketMetricsConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketMetricsConfigurationResponse"));
    /// @todo
}
