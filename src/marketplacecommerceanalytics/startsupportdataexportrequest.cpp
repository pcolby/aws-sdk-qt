// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
