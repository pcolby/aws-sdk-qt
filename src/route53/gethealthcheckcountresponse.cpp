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

#include "gethealthcheckcountresponse.h"
#include "gethealthcheckcountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  GetHealthCheckCountResponse
 *
 * @brief  Handles Route53 GetHealthCheckCount responses.
 *
 * @see    Route53Client::getHealthCheckCount
 */

/**
 * @brief  Constructs a new GetHealthCheckCountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetHealthCheckCountResponse::GetHealthCheckCountResponse(
        const GetHealthCheckCountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetHealthCheckCountResponsePrivate(this), parent)
{
    setRequest(new GetHealthCheckCountRequest(request));
    setReply(reply);
}

const GetHealthCheckCountRequest * GetHealthCheckCountResponse::request() const
{
    Q_D(const GetHealthCheckCountResponse);
    return static_cast<const GetHealthCheckCountRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 GetHealthCheckCount response.
 *
 * @param  response  Response to parse.
 */
void GetHealthCheckCountResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetHealthCheckCountResponsePrivate
 *
 * @brief  Private implementation for GetHealthCheckCountResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetHealthCheckCountResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetHealthCheckCountResponse instance.
 */
GetHealthCheckCountResponsePrivate::GetHealthCheckCountResponsePrivate(
    GetHealthCheckCountQueueResponse * const q) : GetHealthCheckCountPrivate(q)
{

}

/**
 * @brief  Parse an Route53 GetHealthCheckCountResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetHealthCheckCountResponsePrivate::GetHealthCheckCountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHealthCheckCountResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
