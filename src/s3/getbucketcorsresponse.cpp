/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getbucketcorsresponse.h"
#include "getbucketcorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  GetBucketCorsResponse
 *
 * @brief  Handles S3 GetBucketCors responses.
 *
 * @see    S3Client::getBucketCors
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketCorsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
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
    Q_D(Response);
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
    GetBucketCorsQueueResponse * const q) : GetBucketCorsPrivate(q)
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
