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

#include "renewofferingresponse.h"
#include "renewofferingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  RenewOfferingResponse
 *
 * @brief  Handles DeviceFarm RenewOffering responses.
 *
 * @see    DeviceFarmClient::renewOffering
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RenewOfferingResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new RenewOfferingResponsePrivate(this), parent)
{
    setRequest(new RenewOfferingRequest(request));
    setReply(reply);
}

const RenewOfferingRequest * RenewOfferingResponse::request() const
{
    Q_D(const RenewOfferingResponse);
    return static_cast<const RenewOfferingRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm RenewOffering response.
 *
 * @param  response  Response to parse.
 */
void RenewOfferingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RenewOfferingResponsePrivate
 *
 * @brief  Private implementation for RenewOfferingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RenewOfferingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RenewOfferingResponse instance.
 */
RenewOfferingResponsePrivate::RenewOfferingResponsePrivate(
    RenewOfferingQueueResponse * const q) : RenewOfferingPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm RenewOfferingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RenewOfferingResponsePrivate::RenewOfferingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RenewOfferingResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace AWS
