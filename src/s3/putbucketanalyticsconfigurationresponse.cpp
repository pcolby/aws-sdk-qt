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

#include "putbucketanalyticsconfigurationresponse.h"
#include "putbucketanalyticsconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  PutBucketAnalyticsConfigurationResponse
 *
 * @brief  Handles S3 PutBucketAnalyticsConfiguration responses.
 *
 * @see    S3Client::putBucketAnalyticsConfiguration
 */

/**
 * @brief  Constructs a new PutBucketAnalyticsConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketAnalyticsConfigurationResponse::PutBucketAnalyticsConfigurationResponse(
        const PutBucketAnalyticsConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketAnalyticsConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBucketAnalyticsConfigurationRequest(request));
    setReply(reply);
}

const PutBucketAnalyticsConfigurationRequest * PutBucketAnalyticsConfigurationResponse::request() const
{
    Q_D(const PutBucketAnalyticsConfigurationResponse);
    return static_cast<const PutBucketAnalyticsConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a S3 PutBucketAnalyticsConfiguration response.
 *
 * @param  response  Response to parse.
 */
void PutBucketAnalyticsConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutBucketAnalyticsConfigurationResponsePrivate
 *
 * @brief  Private implementation for PutBucketAnalyticsConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketAnalyticsConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketAnalyticsConfigurationResponse instance.
 */
PutBucketAnalyticsConfigurationResponsePrivate::PutBucketAnalyticsConfigurationResponsePrivate(
    PutBucketAnalyticsConfigurationQueueResponse * const q) : PutBucketAnalyticsConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an S3 PutBucketAnalyticsConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketAnalyticsConfigurationResponsePrivate::PutBucketAnalyticsConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketAnalyticsConfigurationResponse"));
    /// @todo
}

} // namespace S3
} // namespace AWS
