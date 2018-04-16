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

#include "purchaseofferingresponse.h"
#include "purchaseofferingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::PurchaseOfferingResponse
 *
 * \brief The PurchaseOfferingResponse class encapsulates DeviceFarm PurchaseOffering responses.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::purchaseOffering
 */

/*!
 * @brief  Constructs a new PurchaseOfferingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PurchaseOfferingResponse::PurchaseOfferingResponse(
        const PurchaseOfferingRequest &request,
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

/*!
 * @brief  Parse a DeviceFarm PurchaseOffering response.
 *
 * @param  response  Response to parse.
 */
void PurchaseOfferingResponse::parseSuccess(QIODevice &response)
{
    Q_D(PurchaseOfferingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PurchaseOfferingResponsePrivate
 *
 * \brief Private implementation for PurchaseOfferingResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PurchaseOfferingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PurchaseOfferingResponse instance.
 */
PurchaseOfferingResponsePrivate::PurchaseOfferingResponsePrivate(
    PurchaseOfferingResponse * const q) : DeviceFarmResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DeviceFarm PurchaseOfferingResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PurchaseOfferingResponsePrivate::parsePurchaseOfferingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PurchaseOfferingResponse"));
    /// @todo
}

} // namespace DeviceFarm
} // namespace QtAws
