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

#include "getgeolocationresponse.h"
#include "getgeolocationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  GetGeoLocationResponse
 *
 * @brief  Handles Route53 GetGeoLocation responses.
 *
 * @see    Route53Client::getGeoLocation
 */

/**
 * @brief  Constructs a new GetGeoLocationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetGeoLocationResponse::GetGeoLocationResponse(
        const GetGeoLocationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetGeoLocationResponsePrivate(this), parent)
{
    setRequest(new GetGeoLocationRequest(request));
    setReply(reply);
}

const GetGeoLocationRequest * GetGeoLocationResponse::request() const
{
    Q_D(const GetGeoLocationResponse);
    return static_cast<const GetGeoLocationRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 GetGeoLocation response.
 *
 * @param  response  Response to parse.
 */
void GetGeoLocationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetGeoLocationResponsePrivate
 *
 * @brief  Private implementation for GetGeoLocationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetGeoLocationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetGeoLocationResponse instance.
 */
GetGeoLocationResponsePrivate::GetGeoLocationResponsePrivate(
    GetGeoLocationQueueResponse * const q) : GetGeoLocationPrivate(q)
{

}

/**
 * @brief  Parse an Route53 GetGeoLocationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetGeoLocationResponsePrivate::GetGeoLocationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetGeoLocationResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS
