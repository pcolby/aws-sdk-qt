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

#include "putbucketnotificationconfigurationresponse.h"
#include "putbucketnotificationconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  PutBucketNotificationConfigurationResponse
 *
 * @brief  Handles S3 PutBucketNotificationConfiguration responses.
 *
 * @see    S3Client::putBucketNotificationConfiguration
 */

/**
 * @brief  Constructs a new PutBucketNotificationConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketNotificationConfigurationResponse::PutBucketNotificationConfigurationResponse(
        const PutBucketNotificationConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketNotificationConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBucketNotificationConfigurationRequest(request));
    setReply(reply);
}

const PutBucketNotificationConfigurationRequest * PutBucketNotificationConfigurationResponse::request() const
{
    Q_D(const PutBucketNotificationConfigurationResponse);
    return static_cast<const PutBucketNotificationConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a S3 PutBucketNotificationConfiguration response.
 *
 * @param  response  Response to parse.
 */
void PutBucketNotificationConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutBucketNotificationConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutBucketNotificationConfigurationResponsePrivate
 *
 * @brief  Private implementation for PutBucketNotificationConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketNotificationConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketNotificationConfigurationResponse instance.
 */
PutBucketNotificationConfigurationResponsePrivate::PutBucketNotificationConfigurationResponsePrivate(
    PutBucketNotificationConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 PutBucketNotificationConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketNotificationConfigurationResponsePrivate::PutBucketNotificationConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketNotificationConfigurationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
