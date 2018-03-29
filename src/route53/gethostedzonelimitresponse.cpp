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

#include "gethostedzonelimitresponse.h"
#include "gethostedzonelimitresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  GetHostedZoneLimitResponse
 *
 * @brief  Handles Route53 GetHostedZoneLimit responses.
 *
 * @see    Route53Client::getHostedZoneLimit
 */

/**
 * @brief  Constructs a new GetHostedZoneLimitResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetHostedZoneLimitResponse::GetHostedZoneLimitResponse(
        const GetHostedZoneLimitRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetHostedZoneLimitResponsePrivate(this), parent)
{
    setRequest(new GetHostedZoneLimitRequest(request));
    setReply(reply);
}

const GetHostedZoneLimitRequest * GetHostedZoneLimitResponse::request() const
{
    Q_D(const GetHostedZoneLimitResponse);
    return static_cast<const GetHostedZoneLimitRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 GetHostedZoneLimit response.
 *
 * @param  response  Response to parse.
 */
void GetHostedZoneLimitResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetHostedZoneLimitResponsePrivate
 *
 * @brief  Private implementation for GetHostedZoneLimitResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetHostedZoneLimitResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetHostedZoneLimitResponse instance.
 */
GetHostedZoneLimitResponsePrivate::GetHostedZoneLimitResponsePrivate(
    GetHostedZoneLimitQueueResponse * const q) : GetHostedZoneLimitPrivate(q)
{

}

/**
 * @brief  Parse an Route53 GetHostedZoneLimitResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetHostedZoneLimitResponsePrivate::GetHostedZoneLimitResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHostedZoneLimitResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
