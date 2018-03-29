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

#include "getbucketinventoryconfigurationresponse.h"
#include "getbucketinventoryconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  GetBucketInventoryConfigurationResponse
 *
 * @brief  Handles S3 GetBucketInventoryConfiguration responses.
 *
 * @see    S3Client::getBucketInventoryConfiguration
 */

/**
 * @brief  Constructs a new GetBucketInventoryConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketInventoryConfigurationResponse::GetBucketInventoryConfigurationResponse(
        const GetBucketInventoryConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketInventoryConfigurationResponsePrivate(this), parent)
{
    setRequest(new GetBucketInventoryConfigurationRequest(request));
    setReply(reply);
}

const GetBucketInventoryConfigurationRequest * GetBucketInventoryConfigurationResponse::request() const
{
    Q_D(const GetBucketInventoryConfigurationResponse);
    return static_cast<const GetBucketInventoryConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a S3 GetBucketInventoryConfiguration response.
 *
 * @param  response  Response to parse.
 */
void GetBucketInventoryConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBucketInventoryConfigurationResponsePrivate
 *
 * @brief  Private implementation for GetBucketInventoryConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketInventoryConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBucketInventoryConfigurationResponse instance.
 */
GetBucketInventoryConfigurationResponsePrivate::GetBucketInventoryConfigurationResponsePrivate(
    GetBucketInventoryConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 GetBucketInventoryConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBucketInventoryConfigurationResponsePrivate::GetBucketInventoryConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketInventoryConfigurationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
