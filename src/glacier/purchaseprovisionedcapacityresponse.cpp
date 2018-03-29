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

#include "purchaseprovisionedcapacityresponse.h"
#include "purchaseprovisionedcapacityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glacier {

/**
 * @class  PurchaseProvisionedCapacityResponse
 *
 * @brief  Handles Glacier PurchaseProvisionedCapacity responses.
 *
 * @see    GlacierClient::purchaseProvisionedCapacity
 */

/**
 * @brief  Constructs a new PurchaseProvisionedCapacityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PurchaseProvisionedCapacityResponse::PurchaseProvisionedCapacityResponse(
        const PurchaseProvisionedCapacityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new PurchaseProvisionedCapacityResponsePrivate(this), parent)
{
    setRequest(new PurchaseProvisionedCapacityRequest(request));
    setReply(reply);
}

const PurchaseProvisionedCapacityRequest * PurchaseProvisionedCapacityResponse::request() const
{
    Q_D(const PurchaseProvisionedCapacityResponse);
    return static_cast<const PurchaseProvisionedCapacityRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier PurchaseProvisionedCapacity response.
 *
 * @param  response  Response to parse.
 */
void PurchaseProvisionedCapacityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PurchaseProvisionedCapacityResponsePrivate
 *
 * @brief  Private implementation for PurchaseProvisionedCapacityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PurchaseProvisionedCapacityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PurchaseProvisionedCapacityResponse instance.
 */
PurchaseProvisionedCapacityResponsePrivate::PurchaseProvisionedCapacityResponsePrivate(
    PurchaseProvisionedCapacityResponse * const q) : GlacierResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glacier PurchaseProvisionedCapacityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PurchaseProvisionedCapacityResponsePrivate::PurchaseProvisionedCapacityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PurchaseProvisionedCapacityResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace QtAws
