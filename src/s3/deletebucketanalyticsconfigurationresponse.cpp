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

#include "deletebucketanalyticsconfigurationresponse.h"
#include "deletebucketanalyticsconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  DeleteBucketAnalyticsConfigurationResponse
 *
 * @brief  Handles S3 DeleteBucketAnalyticsConfiguration responses.
 *
 * @see    S3Client::deleteBucketAnalyticsConfiguration
 */

/**
 * @brief  Constructs a new DeleteBucketAnalyticsConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteBucketAnalyticsConfigurationResponse::DeleteBucketAnalyticsConfigurationResponse(
        const DeleteBucketAnalyticsConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new DeleteBucketAnalyticsConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteBucketAnalyticsConfigurationRequest(request));
    setReply(reply);
}

const DeleteBucketAnalyticsConfigurationRequest * DeleteBucketAnalyticsConfigurationResponse::request() const
{
    Q_D(const DeleteBucketAnalyticsConfigurationResponse);
    return static_cast<const DeleteBucketAnalyticsConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a S3 DeleteBucketAnalyticsConfiguration response.
 *
 * @param  response  Response to parse.
 */
void DeleteBucketAnalyticsConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteBucketAnalyticsConfigurationResponsePrivate
 *
 * @brief  Private implementation for DeleteBucketAnalyticsConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteBucketAnalyticsConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteBucketAnalyticsConfigurationResponse instance.
 */
DeleteBucketAnalyticsConfigurationResponsePrivate::DeleteBucketAnalyticsConfigurationResponsePrivate(
    DeleteBucketAnalyticsConfigurationQueueResponse * const q) : DeleteBucketAnalyticsConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an S3 DeleteBucketAnalyticsConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteBucketAnalyticsConfigurationResponsePrivate::DeleteBucketAnalyticsConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBucketAnalyticsConfigurationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
