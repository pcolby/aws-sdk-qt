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

#include "putbucketwebsiteresponse.h"
#include "putbucketwebsiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  PutBucketWebsiteResponse
 *
 * @brief  Handles S3 PutBucketWebsite responses.
 *
 * @see    S3Client::putBucketWebsite
 */

/**
 * @brief  Constructs a new PutBucketWebsiteResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketWebsiteResponse::PutBucketWebsiteResponse(
        const PutBucketWebsiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketWebsiteResponsePrivate(this), parent)
{
    setRequest(new PutBucketWebsiteRequest(request));
    setReply(reply);
}

const PutBucketWebsiteRequest * PutBucketWebsiteResponse::request() const
{
    Q_D(const PutBucketWebsiteResponse);
    return static_cast<const PutBucketWebsiteRequest *>(d->request);
}

/**
 * @brief  Parse a S3 PutBucketWebsite response.
 *
 * @param  response  Response to parse.
 */
void PutBucketWebsiteResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutBucketWebsiteResponsePrivate
 *
 * @brief  Private implementation for PutBucketWebsiteResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketWebsiteResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketWebsiteResponse instance.
 */
PutBucketWebsiteResponsePrivate::PutBucketWebsiteResponsePrivate(
    PutBucketWebsiteResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 PutBucketWebsiteResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketWebsiteResponsePrivate::PutBucketWebsiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketWebsiteResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
