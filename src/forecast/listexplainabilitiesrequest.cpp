// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexplainabilitiesrequest.h"
#include "listexplainabilitiesrequest_p.h"
#include "listexplainabilitiesresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListExplainabilitiesRequest
 * \brief The ListExplainabilitiesRequest class provides an interface for Forecast ListExplainabilities requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listExplainabilities
 */

/*!
 * Constructs a copy of \a other.
 */
ListExplainabilitiesRequest::ListExplainabilitiesRequest(const ListExplainabilitiesRequest &other)
    : ForecastRequest(new ListExplainabilitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExplainabilitiesRequest object.
 */
ListExplainabilitiesRequest::ListExplainabilitiesRequest()
    : ForecastRequest(new ListExplainabilitiesRequestPrivate(ForecastRequest::ListExplainabilitiesAction, this))
{

}

/*!
 * \reimp
 */
bool ListExplainabilitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExplainabilitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExplainabilitiesRequest::response(QNetworkReply * const reply) const
{
    return new ListExplainabilitiesResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::ListExplainabilitiesRequestPrivate
 * \brief The ListExplainabilitiesRequestPrivate class provides private implementation for ListExplainabilitiesRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListExplainabilitiesRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
ListExplainabilitiesRequestPrivate::ListExplainabilitiesRequestPrivate(
    const ForecastRequest::Action action, ListExplainabilitiesRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExplainabilitiesRequest
 * class' copy constructor.
 */
ListExplainabilitiesRequestPrivate::ListExplainabilitiesRequestPrivate(
    const ListExplainabilitiesRequestPrivate &other, ListExplainabilitiesRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
