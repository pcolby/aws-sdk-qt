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

#include "getbucketcorsresponse.h"
#include "getbucketcorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  GetBucketCorsResponse
 *
 * @brief  Handles S3 GetBucketCors responses.
 *
 * @see    S3Client::getBucketCors
 */

/**
 * @brief  Constructs a new GetBucketCorsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketCorsResponse::GetBucketCorsResponse(
        const GetBucketCorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketCorsResponsePrivate(this), parent)
{
    setRequest(new GetBucketCorsRequest(request));
    setReply(reply);
}

const GetBucketCorsRequest * GetBucketCorsResponse::request() const
{
    Q_D(const GetBucketCorsResponse);
    return static_cast<const GetBucketCorsRequest *>(d->request);
}

/**
 * @brief  Parse a S3 GetBucketCors response.
 *
 * @param  response  Response to parse.
 */
void GetBucketCorsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBucketCorsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBucketCorsResponsePrivate
 *
 * @brief  Private implementation for GetBucketCorsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketCorsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBucketCorsResponse instance.
 */
GetBucketCorsResponsePrivate::GetBucketCorsResponsePrivate(
    GetBucketCorsResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 GetBucketCorsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBucketCorsResponsePrivate::GetBucketCorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketCorsResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
