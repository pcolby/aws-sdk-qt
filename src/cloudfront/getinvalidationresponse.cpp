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

#include "getinvalidationresponse.h"
#include "getinvalidationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFront {

/**
 * @class  GetInvalidationResponse
 *
 * @brief  Handles CloudFront GetInvalidation responses.
 *
 * @see    CloudFrontClient::getInvalidation
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInvalidationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFrontResponse(new GetInvalidationResponsePrivate(this), parent)
{
    setRequest(new GetInvalidationRequest(request));
    setReply(reply);
}

const GetInvalidationRequest * GetInvalidationResponse::request() const
{
    Q_D(const GetInvalidationResponse);
    return static_cast<const GetInvalidationRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFront GetInvalidation response.
 *
 * @param  response  Response to parse.
 */
void GetInvalidationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetInvalidationResponsePrivate
 *
 * @brief  Private implementation for GetInvalidationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInvalidationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetInvalidationResponse instance.
 */
GetInvalidationResponsePrivate::GetInvalidationResponsePrivate(
    GetInvalidationQueueResponse * const q) : GetInvalidationPrivate(q)
{

}

/**
 * @brief  Parse an CloudFront GetInvalidationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetInvalidationResponsePrivate::GetInvalidationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInvalidationResponse"));
    /// @todo
}

} // namespace CloudFront
} // namespace AWS
