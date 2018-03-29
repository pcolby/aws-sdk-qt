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

#include "purchasereservednodeofferingresponse.h"
#include "purchasereservednodeofferingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  PurchaseReservedNodeOfferingResponse
 *
 * @brief  Handles Redshift PurchaseReservedNodeOffering responses.
 *
 * @see    RedshiftClient::purchaseReservedNodeOffering
 */

/**
 * @brief  Constructs a new PurchaseReservedNodeOfferingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PurchaseReservedNodeOfferingResponse::PurchaseReservedNodeOfferingResponse(
        const PurchaseReservedNodeOfferingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new PurchaseReservedNodeOfferingResponsePrivate(this), parent)
{
    setRequest(new PurchaseReservedNodeOfferingRequest(request));
    setReply(reply);
}

const PurchaseReservedNodeOfferingRequest * PurchaseReservedNodeOfferingResponse::request() const
{
    Q_D(const PurchaseReservedNodeOfferingResponse);
    return static_cast<const PurchaseReservedNodeOfferingRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift PurchaseReservedNodeOffering response.
 *
 * @param  response  Response to parse.
 */
void PurchaseReservedNodeOfferingResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PurchaseReservedNodeOfferingResponsePrivate
 *
 * @brief  Private implementation for PurchaseReservedNodeOfferingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PurchaseReservedNodeOfferingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PurchaseReservedNodeOfferingResponse instance.
 */
PurchaseReservedNodeOfferingResponsePrivate::PurchaseReservedNodeOfferingResponsePrivate(
    PurchaseReservedNodeOfferingQueueResponse * const q) : PurchaseReservedNodeOfferingPrivate(q)
{

}

/**
 * @brief  Parse an Redshift PurchaseReservedNodeOfferingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PurchaseReservedNodeOfferingResponsePrivate::PurchaseReservedNodeOfferingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PurchaseReservedNodeOfferingResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
