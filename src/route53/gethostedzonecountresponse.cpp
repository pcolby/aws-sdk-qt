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

#include "gethostedzonecountresponse.h"
#include "gethostedzonecountresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  GetHostedZoneCountResponse
 *
 * @brief  Handles Route53 GetHostedZoneCount responses.
 *
 * @see    Route53Client::getHostedZoneCount
 */

/**
 * @brief  Constructs a new GetHostedZoneCountResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetHostedZoneCountResponse::GetHostedZoneCountResponse(
        const GetHostedZoneCountRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetHostedZoneCountResponsePrivate(this), parent)
{
    setRequest(new GetHostedZoneCountRequest(request));
    setReply(reply);
}

const GetHostedZoneCountRequest * GetHostedZoneCountResponse::request() const
{
    Q_D(const GetHostedZoneCountResponse);
    return static_cast<const GetHostedZoneCountRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 GetHostedZoneCount response.
 *
 * @param  response  Response to parse.
 */
void GetHostedZoneCountResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetHostedZoneCountResponsePrivate
 *
 * @brief  Private implementation for GetHostedZoneCountResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetHostedZoneCountResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetHostedZoneCountResponse instance.
 */
GetHostedZoneCountResponsePrivate::GetHostedZoneCountResponsePrivate(
    GetHostedZoneCountResponse * const q) : Route53ResponsePrivate(q)
{

}

/**
 * @brief  Parse an Route53 GetHostedZoneCountResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetHostedZoneCountResponsePrivate::GetHostedZoneCountResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetHostedZoneCountResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
