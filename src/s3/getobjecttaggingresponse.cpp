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

#include "getobjecttaggingresponse.h"
#include "getobjecttaggingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  GetObjectTaggingResponse
 *
 * @brief  Handles S3 GetObjectTagging responses.
 *
 * @see    S3Client::getObjectTagging
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetObjectTaggingResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new GetObjectTaggingResponsePrivate(this), parent)
{
    setRequest(new GetObjectTaggingRequest(request));
    setReply(reply);
}

const GetObjectTaggingRequest * GetObjectTaggingResponse::request() const
{
    Q_D(const GetObjectTaggingResponse);
    return static_cast<const GetObjectTaggingRequest *>(d->request);
}

/**
 * @brief  Parse a S3 GetObjectTagging response.
 *
 * @param  response  Response to parse.
 */
void GetObjectTaggingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetObjectTaggingResponsePrivate
 *
 * @brief  Private implementation for GetObjectTaggingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetObjectTaggingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetObjectTaggingResponse instance.
 */
GetObjectTaggingResponsePrivate::GetObjectTaggingResponsePrivate(
    GetObjectTaggingQueueResponse * const q) : GetObjectTaggingPrivate(q)
{

}

/**
 * @brief  Parse an S3 GetObjectTaggingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetObjectTaggingResponsePrivate::GetObjectTaggingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetObjectTaggingResponse"));
    /// @todo
}
