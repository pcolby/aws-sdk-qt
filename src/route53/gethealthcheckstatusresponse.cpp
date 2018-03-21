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

#include "gethealthcheckstatusresponse.h"
#include "gethealthcheckstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  GetHealthCheckStatusResponse
 *
 * @brief  Handles Route53 GetHealthCheckStatus responses.
 *
 * @see    Route53Client::getHealthCheckStatus
 */

/**
 * @brief  Constructs a new GetHealthCheckStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetHealthCheckStatusResponse::GetHealthCheckStatusResponse(
        const GetHealthCheckStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetHealthCheckStatusResponsePrivate(this), parent)
{
    setRequest(new GetHealthCheckStatusRequest(request));
    setReply(reply);
}

const GetHealthCheckStatusRequest * GetHealthCheckStatusResponse::request() const
{
    Q_D(const GetHealthCheckStatusResponse);
    return static_cast<const GetHealthCheckStatusRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 GetHealthCheckStatus response.
 *
 * @param  response  Response to parse.
 */
void GetHealthCheckStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetHealthCheckStatusResponsePrivate
 *
 * @brief  Private implementation for GetHealthCheckStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetHealthCheckStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetHealthCheckStatusResponse instance.
 */
GetHealthCheckStatusResponsePrivate::GetHealthCheckStatusResponsePrivate(
    GetHealthCheckStatusQueueResponse * const q) : GetHealthCheckStatusPrivate(q)
{

}

/**
 * @brief  Parse an Route53 GetHealthCheckStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetHealthCheckStatusResponsePrivate::GetHealthCheckStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHealthCheckStatusResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS
