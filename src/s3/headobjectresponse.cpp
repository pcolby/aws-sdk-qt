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

#include "headobjectresponse.h"
#include "headobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  HeadObjectResponse
 *
 * @brief  Handles S3 HeadObject responses.
 *
 * @see    S3Client::headObject
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
HeadObjectResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new HeadObjectResponsePrivate(this), parent)
{
    setRequest(new HeadObjectRequest(request));
    setReply(reply);
}

const HeadObjectRequest * HeadObjectResponse::request() const
{
    Q_D(const HeadObjectResponse);
    return static_cast<const HeadObjectRequest *>(d->request);
}

/**
 * @brief  Parse a S3 HeadObject response.
 *
 * @param  response  Response to parse.
 */
void HeadObjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  HeadObjectResponsePrivate
 *
 * @brief  Private implementation for HeadObjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new HeadObjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public HeadObjectResponse instance.
 */
HeadObjectResponsePrivate::HeadObjectResponsePrivate(
    HeadObjectQueueResponse * const q) : HeadObjectPrivate(q)
{

}

/**
 * @brief  Parse an S3 HeadObjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void HeadObjectResponsePrivate::HeadObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("HeadObjectResponse"));
    /// @todo
}
