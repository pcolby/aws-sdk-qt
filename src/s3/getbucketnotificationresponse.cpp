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

#include "getbucketnotificationresponse.h"
#include "getbucketnotificationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  GetBucketNotificationResponse
 *
 * @brief  Handles S3 GetBucketNotification responses.
 *
 * @see    S3Client::getBucketNotification
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBucketNotificationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetBucketNotificationResponsePrivate(this), parent)
{
    setRequest(new GetBucketNotificationRequest(request));
    setReply(reply);
}

const GetBucketNotificationRequest * GetBucketNotificationResponse::request() const
{
    Q_D(const GetBucketNotificationResponse);
    return static_cast<const GetBucketNotificationRequest *>(d->request);
}

/**
 * @brief  Parse a S3 GetBucketNotification response.
 *
 * @param  response  Response to parse.
 */
void GetBucketNotificationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBucketNotificationResponsePrivate
 *
 * @brief  Private implementation for GetBucketNotificationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBucketNotificationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBucketNotificationResponse instance.
 */
GetBucketNotificationResponsePrivate::GetBucketNotificationResponsePrivate(
    GetBucketNotificationQueueResponse * const q) : GetBucketNotificationPrivate(q)
{

}

/**
 * @brief  Parse an S3 GetBucketNotificationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBucketNotificationResponsePrivate::GetBucketNotificationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBucketNotificationResponse"));
    /// @todo
}
