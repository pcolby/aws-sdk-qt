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

#include "putbucketinventoryconfigurationresponse.h"
#include "putbucketinventoryconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  PutBucketInventoryConfigurationResponse
 *
 * @brief  Handles S3 PutBucketInventoryConfiguration responses.
 *
 * @see    S3Client::putBucketInventoryConfiguration
 */

/**
 * @brief  Constructs a new PutBucketInventoryConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketInventoryConfigurationResponse::PutBucketInventoryConfigurationResponse(
        const PutBucketInventoryConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PutBucketInventoryConfigurationResponse(new PutBucketInventoryConfigurationResponsePrivate(this), parent)
{
    setRequest(new PutBucketInventoryConfigurationRequest(request));
    setReply(reply);
}

const PutBucketInventoryConfigurationRequest * PutBucketInventoryConfigurationResponse::request() const
{
    Q_D(const PutBucketInventoryConfigurationResponse);
    return static_cast<const PutBucketInventoryConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a S3 PutBucketInventoryConfiguration response.
 *
 * @param  response  Response to parse.
 */
void PutBucketInventoryConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutBucketInventoryConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutBucketInventoryConfigurationResponsePrivate
 *
 * @brief  Private implementation for PutBucketInventoryConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketInventoryConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketInventoryConfigurationResponse instance.
 */
PutBucketInventoryConfigurationResponsePrivate::PutBucketInventoryConfigurationResponsePrivate(
    PutBucketInventoryConfigurationResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 PutBucketInventoryConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketInventoryConfigurationResponsePrivate::parsePutBucketInventoryConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketInventoryConfigurationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
