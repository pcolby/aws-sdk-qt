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

#include "gethealthchecklastfailurereasonresponse.h"
#include "gethealthchecklastfailurereasonresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  GetHealthCheckLastFailureReasonResponse
 *
 * @brief  Handles Route53 GetHealthCheckLastFailureReason responses.
 *
 * @see    Route53Client::getHealthCheckLastFailureReason
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetHealthCheckLastFailureReasonResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetHealthCheckLastFailureReasonResponsePrivate(this), parent)
{
    setRequest(new GetHealthCheckLastFailureReasonRequest(request));
    setReply(reply);
}

const GetHealthCheckLastFailureReasonRequest * GetHealthCheckLastFailureReasonResponse::request() const
{
    Q_D(const GetHealthCheckLastFailureReasonResponse);
    return static_cast<const GetHealthCheckLastFailureReasonRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 GetHealthCheckLastFailureReason response.
 *
 * @param  response  Response to parse.
 */
void GetHealthCheckLastFailureReasonResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetHealthCheckLastFailureReasonResponsePrivate
 *
 * @brief  Private implementation for GetHealthCheckLastFailureReasonResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetHealthCheckLastFailureReasonResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetHealthCheckLastFailureReasonResponse instance.
 */
GetHealthCheckLastFailureReasonResponsePrivate::GetHealthCheckLastFailureReasonResponsePrivate(
    GetHealthCheckLastFailureReasonQueueResponse * const q) : GetHealthCheckLastFailureReasonPrivate(q)
{

}

/**
 * @brief  Parse an Route53 GetHealthCheckLastFailureReasonResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetHealthCheckLastFailureReasonResponsePrivate::GetHealthCheckLastFailureReasonResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHealthCheckLastFailureReasonResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS
