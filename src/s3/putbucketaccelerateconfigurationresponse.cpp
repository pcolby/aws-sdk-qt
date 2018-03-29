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

#include "putbucketaccelerateconfigurationresponse.h"
#include "putbucketaccelerateconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  PutBucketAccelerateConfigurationResponse
 *
 * @brief  Handles S3 PutBucketAccelerateConfiguration responses.
 *
 * @see    S3Client::putBucketAccelerateConfiguration
 */

/**
 * @brief  Constructs a new PutBucketAccelerateConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketAccelerateConfigurationResponse::PutBucketAccelerateConfigurationResponse(
        const PutBucketAccelerateConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketAccelerateConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBucketAccelerateConfigurationRequest(request));
    setReply(reply);
}

const PutBucketAccelerateConfigurationRequest * PutBucketAccelerateConfigurationResponse::request() const
{
    Q_D(const PutBucketAccelerateConfigurationResponse);
    return static_cast<const PutBucketAccelerateConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a S3 PutBucketAccelerateConfiguration response.
 *
 * @param  response  Response to parse.
 */
void PutBucketAccelerateConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutBucketAccelerateConfigurationResponsePrivate
 *
 * @brief  Private implementation for PutBucketAccelerateConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketAccelerateConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketAccelerateConfigurationResponse instance.
 */
PutBucketAccelerateConfigurationResponsePrivate::PutBucketAccelerateConfigurationResponsePrivate(
    PutBucketAccelerateConfigurationQueueResponse * const q) : PutBucketAccelerateConfigurationPrivate(q)
{

}

/**
 * @brief  Parse an S3 PutBucketAccelerateConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketAccelerateConfigurationResponsePrivate::PutBucketAccelerateConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketAccelerateConfigurationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
