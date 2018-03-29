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

#include "getbucketlocationresponse.h"
#include "getbucketlocationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace S3 {

/**
 * @class  GetBucketLocationResponse
 *
 * @brief  Handles S3 GetBucketLocation responses.
 *
 * @see    S3Client::getBucketLocation
 */

/**
 * @brief  Constructs a new GetBucketLocationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketLocationResponse::GetBucketLocationResponse(
        const GetBucketLocationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketLocationResponsePrivate(this), parent)
{
    setRequest(new GetBucketLocationRequest(request));
    setReply(reply);
}

const GetBucketLocationRequest * GetBucketLocationResponse::request() const
{
    Q_D(const GetBucketLocationResponse);
    return static_cast<const GetBucketLocationRequest *>(d->request);
}

/**
 * @brief  Parse a S3 GetBucketLocation response.
 *
 * @param  response  Response to parse.
 */
void GetBucketLocationResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBucketLocationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBucketLocationResponsePrivate
 *
 * @brief  Private implementation for GetBucketLocationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketLocationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBucketLocationResponse instance.
 */
GetBucketLocationResponsePrivate::GetBucketLocationResponsePrivate(
    GetBucketLocationResponse * const q) : S3ResponsePrivate(q)
{

}

/**
 * @brief  Parse an S3 GetBucketLocationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBucketLocationResponsePrivate::GetBucketLocationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketLocationResponse"));
    /// @todo
}

} // namespace S3
} // namespace QtAws
