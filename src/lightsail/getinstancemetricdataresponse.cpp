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

#include "getinstancemetricdataresponse.h"
#include "getinstancemetricdataresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  GetInstanceMetricDataResponse
 *
 * @brief  Handles Lightsail GetInstanceMetricData responses.
 *
 * @see    LightsailClient::getInstanceMetricData
 */

/**
 * @brief  Constructs a new GetInstanceMetricDataResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInstanceMetricDataResponse::GetInstanceMetricDataResponse(
        const GetInstanceMetricDataRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetInstanceMetricDataResponsePrivate(this), parent)
{
    setRequest(new GetInstanceMetricDataRequest(request));
    setReply(reply);
}

const GetInstanceMetricDataRequest * GetInstanceMetricDataResponse::request() const
{
    Q_D(const GetInstanceMetricDataResponse);
    return static_cast<const GetInstanceMetricDataRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetInstanceMetricData response.
 *
 * @param  response  Response to parse.
 */
void GetInstanceMetricDataResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetInstanceMetricDataResponsePrivate
 *
 * @brief  Private implementation for GetInstanceMetricDataResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceMetricDataResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetInstanceMetricDataResponse instance.
 */
GetInstanceMetricDataResponsePrivate::GetInstanceMetricDataResponsePrivate(
    GetInstanceMetricDataQueueResponse * const q) : GetInstanceMetricDataPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetInstanceMetricDataResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetInstanceMetricDataResponsePrivate::GetInstanceMetricDataResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInstanceMetricDataResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
