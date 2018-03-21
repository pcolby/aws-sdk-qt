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

#include "purchaseofferingresponse.h"
#include "purchaseofferingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DeviceFarm {

/**
 * @class  PurchaseOfferingResponse
 *
 * @brief  Handles DeviceFarm PurchaseOffering responses.
 *
 * @see    DeviceFarmClient::purchaseOffering
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PurchaseOfferingResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeviceFarmResponse(new PurchaseOfferingResponsePrivate(this), parent)
{
    setRequest(new PurchaseOfferingRequest(request));
    setReply(reply);
}

const PurchaseOfferingRequest * PurchaseOfferingResponse::request() const
{
    Q_D(const PurchaseOfferingResponse);
    return static_cast<const PurchaseOfferingRequest *>(d->request);
}

/**
 * @brief  Parse a DeviceFarm PurchaseOffering response.
 *
 * @param  response  Response to parse.
 */
void PurchaseOfferingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PurchaseOfferingResponsePrivate
 *
 * @brief  Private implementation for PurchaseOfferingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PurchaseOfferingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PurchaseOfferingResponse instance.
 */
PurchaseOfferingResponsePrivate::PurchaseOfferingResponsePrivate(
    PurchaseOfferingQueueResponse * const q) : PurchaseOfferingPrivate(q)
{

}

/**
 * @brief  Parse an DeviceFarm PurchaseOfferingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PurchaseOfferingResponsePrivate::PurchaseOfferingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PurchaseOfferingResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace AWS
