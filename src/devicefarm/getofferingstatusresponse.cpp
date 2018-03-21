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

#include "getofferingstatusresponse.h"
#include "getofferingstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  GetOfferingStatusResponse
 *
 * @brief  Handles DeviceFarm GetOfferingStatus responses.
 *
 * @see    DeviceFarmClient::getOfferingStatus
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetOfferingStatusResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new GetOfferingStatusResponsePrivate(this), parent)
{
    setRequest(new GetOfferingStatusRequest(request));
    setReply(reply);
}

const GetOfferingStatusRequest * GetOfferingStatusResponse::request() const
{
    Q_D(const GetOfferingStatusResponse);
    return static_cast<const GetOfferingStatusRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm GetOfferingStatus response.
 *
 * @param  response  Response to parse.
 */
void GetOfferingStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetOfferingStatusResponsePrivate
 *
 * @brief  Private implementation for GetOfferingStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetOfferingStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetOfferingStatusResponse instance.
 */
GetOfferingStatusResponsePrivate::GetOfferingStatusResponsePrivate(
    GetOfferingStatusQueueResponse * const q) : GetOfferingStatusPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm GetOfferingStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetOfferingStatusResponsePrivate::GetOfferingStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOfferingStatusResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace AWS
