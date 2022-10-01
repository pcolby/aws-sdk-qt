// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "generatedatasetrequest.h"
#include "generatedatasetrequest_p.h"
#include "generatedatasetresponse.h"
#include "marketplacecommerceanalyticsrequest_p.h"

namespace QtAws {
namespace MarketplaceCommerceAnalytics {

/*!
 * \class QtAws::MarketplaceCommerceAnalytics::GenerateDataSetRequest
 * \brief The GenerateDataSetRequest class provides an interface for MarketplaceCommerceAnalytics GenerateDataSet requests.
 *
 * \inmodule QtAwsMarketplaceCommerceAnalytics
 *
 *
 * \sa MarketplaceCommerceAnalyticsClient::generateDataSet
 */

/*!
 * Constructs a copy of \a other.
 */
GenerateDataSetRequest::GenerateDataSetRequest(const GenerateDataSetRequest &other)
    : MarketplaceCommerceAnalyticsRequest(new GenerateDataSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GenerateDataSetRequest object.
 */
GenerateDataSetRequest::GenerateDataSetRequest()
    : MarketplaceCommerceAnalyticsRequest(new GenerateDataSetRequestPrivate(MarketplaceCommerceAnalyticsRequest::GenerateDataSetAction, this))
{

}

/*!
 * \reimp
 */
bool GenerateDataSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GenerateDataSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GenerateDataSetRequest::response(QNetworkReply * const reply) const
{
    return new GenerateDataSetResponse(*this, reply);
}

/*!
 * \class QtAws::MarketplaceCommerceAnalytics::GenerateDataSetRequestPrivate
 * \brief The GenerateDataSetRequestPrivate class provides private implementation for GenerateDataSetRequest.
 * \internal
 *
 * \inmodule QtAwsMarketplaceCommerceAnalytics
 */

/*!
 * Constructs a GenerateDataSetRequestPrivate object for MarketplaceCommerceAnalytics \a action,
 * with public implementation \a q.
 */
GenerateDataSetRequestPrivate::GenerateDataSetRequestPrivate(
    const MarketplaceCommerceAnalyticsRequest::Action action, GenerateDataSetRequest * const q)
    : MarketplaceCommerceAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GenerateDataSetRequest
 * class' copy constructor.
 */
GenerateDataSetRequestPrivate::GenerateDataSetRequestPrivate(
    const GenerateDataSetRequestPrivate &other, GenerateDataSetRequest * const q)
    : MarketplaceCommerceAnalyticsRequestPrivate(other, q)
{

}

} // namespace MarketplaceCommerceAnalytics
} // namespace QtAws
