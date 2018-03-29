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

#include "putbucketcorsresponse.h"
#include "putbucketcorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  PutBucketCorsResponse
 *
 * @brief  Handles S3 PutBucketCors responses.
 *
 * @see    S3Client::putBucketCors
 */

/**
 * @brief  Constructs a new PutBucketCorsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutBucketCorsResponse::PutBucketCorsResponse(
        const PutBucketCorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new PutBucketCorsResponsePrivate(this), parent)
{
    setRequest(new PutBucketCorsRequest(request));
    setReply(reply);
}

const PutBucketCorsRequest * PutBucketCorsResponse::request() const
{
    Q_D(const PutBucketCorsResponse);
    return static_cast<const PutBucketCorsRequest *>(d->request);
}

/**
 * @brief  Parse a S3 PutBucketCors response.
 *
 * @param  response  Response to parse.
 */
void PutBucketCorsResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutBucketCorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutBucketCorsResponsePrivate
 *
 * @brief  Private implementation for PutBucketCorsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutBucketCorsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutBucketCorsResponse instance.
 */
PutBucketCorsResponsePrivate::PutBucketCorsResponsePrivate(
    PutBucketCorsResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 PutBucketCorsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutBucketCorsResponsePrivate::parsePutBucketCorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutBucketCorsResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
