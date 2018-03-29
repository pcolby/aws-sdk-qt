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

#include "gethealthchecklastfailurereasonresponse.h"
#include "gethealthchecklastfailurereasonresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  GetHealthCheckLastFailureReasonResponse
 *
 * @brief  Handles Route53 GetHealthCheckLastFailureReason responses.
 *
 * @see    Route53Client::getHealthCheckLastFailureReason
 */

/**
 * @brief  Constructs a new GetHealthCheckLastFailureReasonResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetHealthCheckLastFailureReasonResponse::GetHealthCheckLastFailureReasonResponse(
        const GetHealthCheckLastFailureReasonRequest &request,
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
    GetHealthCheckLastFailureReasonResponse * const q) : Route53ResponsePrivate(q)
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
} // namespace QtAws
