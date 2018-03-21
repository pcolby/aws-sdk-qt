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

#include "purchasereserveddbinstancesofferingresponse.h"
#include "purchasereserveddbinstancesofferingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  PurchaseReservedDBInstancesOfferingResponse
 *
 * @brief  Handles RDS PurchaseReservedDBInstancesOffering responses.
 *
 * @see    RDSClient::purchaseReservedDBInstancesOffering
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PurchaseReservedDBInstancesOfferingResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new PurchaseReservedDBInstancesOfferingResponsePrivate(this), parent)
{
    setRequest(new PurchaseReservedDBInstancesOfferingRequest(request));
    setReply(reply);
}

const PurchaseReservedDBInstancesOfferingRequest * PurchaseReservedDBInstancesOfferingResponse::request() const
{
    Q_D(const PurchaseReservedDBInstancesOfferingResponse);
    return static_cast<const PurchaseReservedDBInstancesOfferingRequest *>(d->request);
}

/**
 * @brief  Parse a RDS PurchaseReservedDBInstancesOffering response.
 *
 * @param  response  Response to parse.
 */
void PurchaseReservedDBInstancesOfferingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PurchaseReservedDBInstancesOfferingResponsePrivate
 *
 * @brief  Private implementation for PurchaseReservedDBInstancesOfferingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PurchaseReservedDBInstancesOfferingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PurchaseReservedDBInstancesOfferingResponse instance.
 */
PurchaseReservedDBInstancesOfferingResponsePrivate::PurchaseReservedDBInstancesOfferingResponsePrivate(
    PurchaseReservedDBInstancesOfferingQueueResponse * const q) : PurchaseReservedDBInstancesOfferingPrivate(q)
{

}

/**
 * @brief  Parse an RDS PurchaseReservedDBInstancesOfferingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PurchaseReservedDBInstancesOfferingResponsePrivate::PurchaseReservedDBInstancesOfferingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PurchaseReservedDBInstancesOfferingResponse"));
    /// @todo
}
