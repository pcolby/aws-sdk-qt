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

#include "getbucketwebsiteresponse.h"
#include "getbucketwebsiteresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  GetBucketWebsiteResponse
 *
 * @brief  Handles S3 GetBucketWebsite responses.
 *
 * @see    S3Client::getBucketWebsite
 */

/**
 * @brief  Constructs a new GetBucketWebsiteResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketWebsiteResponse::GetBucketWebsiteResponse(
        const GetBucketWebsiteRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketWebsiteResponsePrivate(this), parent)
{
    setRequest(new GetBucketWebsiteRequest(request));
    setReply(reply);
}

const GetBucketWebsiteRequest * GetBucketWebsiteResponse::request() const
{
    Q_D(const GetBucketWebsiteResponse);
    return static_cast<const GetBucketWebsiteRequest *>(d->request);
}

/**
 * @brief  Parse a S3 GetBucketWebsite response.
 *
 * @param  response  Response to parse.
 */
void GetBucketWebsiteResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBucketWebsiteResponsePrivate
 *
 * @brief  Private implementation for GetBucketWebsiteResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketWebsiteResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBucketWebsiteResponse instance.
 */
GetBucketWebsiteResponsePrivate::GetBucketWebsiteResponsePrivate(
    GetBucketWebsiteQueueResponse * const q) : GetBucketWebsitePrivate(q)
{

}

/**
 * @brief  Parse an S3 GetBucketWebsiteResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBucketWebsiteResponsePrivate::GetBucketWebsiteResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketWebsiteResponse"));
    /// @todo
}

} // namespace S3
} // namespace AWS
