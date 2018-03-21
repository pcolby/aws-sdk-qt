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

#include "gethealthcheckresponse.h"
#include "gethealthcheckresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  GetHealthCheckResponse
 *
 * @brief  Handles Route53 GetHealthCheck responses.
 *
 * @see    Route53Client::getHealthCheck
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetHealthCheckResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetHealthCheckResponsePrivate(this), parent)
{
    setRequest(new GetHealthCheckRequest(request));
    setReply(reply);
}

const GetHealthCheckRequest * GetHealthCheckResponse::request() const
{
    Q_D(const GetHealthCheckResponse);
    return static_cast<const GetHealthCheckRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 GetHealthCheck response.
 *
 * @param  response  Response to parse.
 */
void GetHealthCheckResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetHealthCheckResponsePrivate
 *
 * @brief  Private implementation for GetHealthCheckResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetHealthCheckResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetHealthCheckResponse instance.
 */
GetHealthCheckResponsePrivate::GetHealthCheckResponsePrivate(
    GetHealthCheckQueueResponse * const q) : GetHealthCheckPrivate(q)
{

}

/**
 * @brief  Parse an Route53 GetHealthCheckResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetHealthCheckResponsePrivate::GetHealthCheckResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHealthCheckResponse"));
    /// @todo
}
