/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "batchmeterusageresponse.h"
#include "batchmeterusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MarketplaceMetering {

/*!
 * \class QtAws::MarketplaceMetering::BatchMeterUsageResponse
 * \brief The BatchMeterUsageResponse class provides an interace for MarketplaceMetering BatchMeterUsage responses.
 *
 * \inmodule QtAwsMarketplaceMetering
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
 * \sa MarketplaceMeteringClient::batchMeterUsage
 */

/*!
 * Constructs a BatchMeterUsageResponse object for \a reply to \a request, with parent \a parent.
 */
BatchMeterUsageResponse::BatchMeterUsageResponse(
        const BatchMeterUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MarketplaceMeteringResponse(new BatchMeterUsageResponsePrivate(this), parent)
{
    setRequest(new BatchMeterUsageRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchMeterUsageRequest * BatchMeterUsageResponse::request() const
{
    Q_D(const BatchMeterUsageResponse);
    return static_cast<const BatchMeterUsageRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful MarketplaceMetering BatchMeterUsage \a response.
 */
void BatchMeterUsageResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchMeterUsageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::MarketplaceMetering::BatchMeterUsageResponsePrivate
 * \brief The BatchMeterUsageResponsePrivate class provides private implementation for BatchMeterUsageResponse.
 * \internal
 *
 * \inmodule QtAwsMarketplaceMetering
 */

/*!
 * Constructs a BatchMeterUsageResponsePrivate object with public implementation \a q.
 */
BatchMeterUsageResponsePrivate::BatchMeterUsageResponsePrivate(
    BatchMeterUsageResponse * const q) : MarketplaceMeteringResponsePrivate(q)
{

}

/*!
 * Parses a MarketplaceMetering BatchMeterUsage response element from \a xml.
 */
void BatchMeterUsageResponsePrivate::parseBatchMeterUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchMeterUsageResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace MarketplaceMetering
} // namespace QtAws
