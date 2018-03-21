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

#include "getbucketaccelerateconfigurationresponse.h"
#include "getbucketaccelerateconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  GetBucketAccelerateConfigurationResponse
 *
 * @brief  Handles S3 GetBucketAccelerateConfiguration responses.
 *
 * @see    S3Client::getBucketAccelerateConfiguration
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketAccelerateConfigurationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketAccelerateConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetBucketAccelerateConfigurationRequest(request));
    setReply(reply);
}

const GetBucketAccelerateConfigurationRequest * GetBucketAccelerateConfigurationResponse::request() const
{
    Q_D(const GetBucketAccelerateConfigurationResponse);
    return static_cast<const GetBucketAccelerateConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a S3 GetBucketAccelerateConfiguration response.
 *
 * @param  response  Response to parse.
 */
void GetBucketAccelerateConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBucketAccelerateConfigurationResponsePrivate
 *
 * @brief  Private implementation for GetBucketAccelerateConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketAccelerateConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBucketAccelerateConfigurationResponse instance.
 */
GetBucketAccelerateConfigurationResponsePrivate::GetBucketAccelerateConfigurationResponsePrivate(
    GetBucketAccelerateConfigurationQueueResponse * const q) : GetBucketAccelerateConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an S3 GetBucketAccelerateConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBucketAccelerateConfigurationResponsePrivate::GetBucketAccelerateConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketAccelerateConfigurationResponse"));
    /// @todo
}
