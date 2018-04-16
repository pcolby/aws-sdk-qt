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

#include "meterusageresponse.h"
#include "meterusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceMetering {

/*!
 * \class QtAws::MarketplaceMetering::MeterUsageResponse
 *
 * \brief The MeterUsageResponse class provides an interace for MarketplaceMetering MeterUsage responses.
 *
 * \ingroup MarketplaceMetering
 *
 *  <fullname>AWS Marketplace Metering Service</fullname>
 * 
 *  This reference provides descriptions of the low-level AWS Marketplace Metering Service
 * 
 *  API>
 * 
 *  AWS Marketplace sellers can use this API to submit usage data for custom usage
 * 
 *  dimensions>
 * 
 *  <b>Submitting Metering Records</b>
 * 
 *  </p <ul> <li>
 * 
 *  <i>MeterUsage</i>- Submits the metering record for a Marketplace product. MeterUsage is called from an EC2
 * 
 *  instance> </li> <li>
 * 
 *  <i>BatchMeterUsage</i>- Submits the metering record for a set of customers. BatchMeterUsage is called from a
 *  software-as-a-service (SaaS)
 * 
 *  application> </li> </ul>
 * 
 *  <b>Accepting New Customers</b>
 * 
 *  </p <ul> <li>
 * 
 *  <i>ResolveCustomer</i>- Called by a SaaS application during the registration process. When a buyer visits your website
 *  during the registration process, the buyer submits a Registration Token through the browser. The Registration Token is
 *  resolved through this API to obtain a CustomerIdentifier and Product
 *
 * \sa MarketplaceMeteringClient::meterUsage
 */

/*!
 * @brief  Constructs a new MeterUsageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
MeterUsageResponse::MeterUsageResponse(
        const MeterUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MarketplaceMeteringResponse(new MeterUsageResponsePrivate(this), parent)
{
    setRequest(new MeterUsageRequest(request));
    setReply(reply);
}

const MeterUsageRequest * MeterUsageResponse::request() const
{
    Q_D(const MeterUsageResponse);
    return static_cast<const MeterUsageRequest *>(d->request);
}

/*!
 * @brief  Parse a MarketplaceMetering MeterUsage response.
 *
 * @param  response  Response to parse.
 */
void MeterUsageResponse::parseSuccess(QIODevice &response)
{
    Q_D(MeterUsageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class MeterUsageResponsePrivate
 *
 * \brief Private implementation for MeterUsageResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new MeterUsageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public MeterUsageResponse instance.
 */
MeterUsageResponsePrivate::MeterUsageResponsePrivate(
    MeterUsageResponse * const q) : MarketplaceMeteringResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MarketplaceMetering MeterUsageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void MeterUsageResponsePrivate::parseMeterUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("MeterUsageResponse"));
    /// @todo
}

} // namespace MarketplaceMetering
} // namespace QtAws
