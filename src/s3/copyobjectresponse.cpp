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

#include "copyobjectresponse.h"
#include "copyobjectresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace S3 {

/**
 * @class  CopyObjectResponse
 *
 * @brief  Handles S3 CopyObject responses.
 *
 * @see    S3Client::copyObject
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CopyObjectResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : S3Response(new CopyObjectResponsePrivate(this), parent)
{
    setRequest(new CopyObjectRequest(request));
    setReply(reply);
}

const CopyObjectRequest * CopyObjectResponse::request() const
{
    Q_D(const CopyObjectResponse);
    return static_cast<const CopyObjectRequest *>(d->request);
}

/**
 * @brief  Parse a S3 CopyObject response.
 *
 * @param  response  Response to parse.
 */
void CopyObjectResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CopyObjectResponsePrivate
 *
 * @brief  Private implementation for CopyObjectResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CopyObjectResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CopyObjectResponse instance.
 */
CopyObjectResponsePrivate::CopyObjectResponsePrivate(
    CopyObjectQueueResponse * const q) : CopyObjectPrivate(q)
{

}

/**
 * @brief  Parse an S3 CopyObjectResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CopyObjectResponsePrivate::CopyObjectResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CopyObjectResponse"));
    /// @todo
}

} // namespace S3
} // namespace AWS
