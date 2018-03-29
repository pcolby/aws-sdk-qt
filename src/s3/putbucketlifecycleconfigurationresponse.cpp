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

#include "putbucketlifecycleconfigurationresponse.h"
#include "putbucketlifecycleconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  PutBucketLifecycleConfigurationResponse
 *
 * @brief  Handles S3 PutBucketLifecycleConfiguration responses.
 *
 * @see    S3Client::putBucketLifecycleConfiguration
 */

/**
 * @brief  Constructs a new PutBucketLifecycleConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketLifecycleConfigurationResponse::PutBucketLifecycleConfigurationResponse(
        const PutBucketLifecycleConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketLifecycleConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBucketLifecycleConfigurationRequest(request));
    setReply(reply);
}

const PutBucketLifecycleConfigurationRequest * PutBucketLifecycleConfigurationResponse::request() const
{
    Q_D(const PutBucketLifecycleConfigurationResponse);
    return static_cast<const PutBucketLifecycleConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a S3 PutBucketLifecycleConfiguration response.
 *
 * @param  response  Response to parse.
 */
void PutBucketLifecycleConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutBucketLifecycleConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutBucketLifecycleConfigurationResponsePrivate
 *
 * @brief  Private implementation for PutBucketLifecycleConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketLifecycleConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketLifecycleConfigurationResponse instance.
 */
PutBucketLifecycleConfigurationResponsePrivate::PutBucketLifecycleConfigurationResponsePrivate(
    PutBucketLifecycleConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 PutBucketLifecycleConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketLifecycleConfigurationResponsePrivate::PutBucketLifecycleConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketLifecycleConfigurationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
