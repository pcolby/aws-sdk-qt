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

#include "startsupportdataexportrequest.h"
#include "startsupportdataexportrequest_p.h"
#include "startsupportdataexportresponse.h"
#include "marketplacecommerceanalyticsrequest_p.h"

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

/*!
 * \class QtAws::MarketplaceCommerceAnalytics::StartSupportDataExportRequest
 * \brief The StartSupportDataExportRequest class provides an interface for MarketplaceCommerceAnalytics StartSupportDataExport requests.
 *
 * \inmodule QtAwsMarketplaceCommerceAnalytics
 *
 *
 * \sa MarketplaceCommerceAnalyticsClient::startSupportDataExport
 */

/*!
 * Constructs a copy of \a other.
 */
StartSupportDataExportRequest::StartSupportDataExportRequest(const StartSupportDataExportRequest &other)
    : MarketplaceCommerceAnalyticsRequest(new StartSupportDataExportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartSupportDataExportRequest object.
 */
StartSupportDataExportRequest::StartSupportDataExportRequest()
    : MarketplaceCommerceAnalyticsRequest(new StartSupportDataExportRequestPrivate(MarketplaceCommerceAnalyticsRequest::StartSupportDataExportAction, this))
{

}

/*!
 * \reimp
 */
bool StartSupportDataExportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartSupportDataExportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartSupportDataExportRequest::response(QNetworkReply * const reply) const
{
    return new StartSupportDataExportResponse(*this, reply);
}

/*!
 * \class QtAws::MarketplaceCommerceAnalytics::StartSupportDataExportRequestPrivate
 * \brief The StartSupportDataExportRequestPrivate class provides private implementation for StartSupportDataExportRequest.
 * \internal
 *
 * \inmodule QtAwsMarketplaceCommerceAnalytics
 */

/*!
 * Constructs a StartSupportDataExportRequestPrivate object for MarketplaceCommerceAnalytics \a action,
 * with public implementation \a q.
 */
StartSupportDataExportRequestPrivate::StartSupportDataExportRequestPrivate(
    const MarketplaceCommerceAnalyticsRequest::Action action, StartSupportDataExportRequest * const q)
    : MarketplaceCommerceAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartSupportDataExportRequest
 * class' copy constructor.
 */
StartSupportDataExportRequestPrivate::StartSupportDataExportRequestPrivate(
    const StartSupportDataExportRequestPrivate &other, StartSupportDataExportRequest * const q)
    : MarketplaceCommerceAnalyticsRequestPrivate(other, q)
{

}

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws
