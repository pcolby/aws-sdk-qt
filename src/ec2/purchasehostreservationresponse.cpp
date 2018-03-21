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

#include "purchasehostreservationresponse.h"
#include "purchasehostreservationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EC2 {

/**
 * @class  PurchaseHostReservationResponse
 *
 * @brief  Handles EC2 PurchaseHostReservation responses.
 *
 * @see    EC2Client::purchaseHostReservation
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PurchaseHostReservationResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EC2Response(new PurchaseHostReservationResponsePrivate(this), parent)
{
    setRequest(new PurchaseHostReservationRequest(request));
    setReply(reply);
}

const PurchaseHostReservationRequest * PurchaseHostReservationResponse::request() const
{
    Q_D(const PurchaseHostReservationResponse);
    return static_cast<const PurchaseHostReservationRequest *>(d->request);
}

/**
 * @brief  Parse a EC2 PurchaseHostReservation response.
 *
 * @param  response  Response to parse.
 */
void PurchaseHostReservationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PurchaseHostReservationResponsePrivate
 *
 * @brief  Private implementation for PurchaseHostReservationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PurchaseHostReservationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PurchaseHostReservationResponse instance.
 */
PurchaseHostReservationResponsePrivate::PurchaseHostReservationResponsePrivate(
    PurchaseHostReservationQueueResponse * const q) : PurchaseHostReservationPrivate(q)
{

}

/**
 * @brief  Parse an EC2 PurchaseHostReservationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PurchaseHostReservationResponsePrivate::PurchaseHostReservationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PurchaseHostReservationResponse"));
    /// @todo
}
