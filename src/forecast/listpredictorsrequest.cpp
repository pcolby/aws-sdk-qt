// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpredictorsrequest.h"
#include "listpredictorsrequest_p.h"
#include "listpredictorsresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListPredictorsRequest
 * \brief The ListPredictorsRequest class provides an interface for Forecast ListPredictors requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listPredictors
 */

/*!
 * Constructs a copy of \a other.
 */
ListPredictorsRequest::ListPredictorsRequest(const ListPredictorsRequest &other)
    : ForecastRequest(new ListPredictorsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPredictorsRequest object.
 */
ListPredictorsRequest::ListPredictorsRequest()
    : ForecastRequest(new ListPredictorsRequestPrivate(ForecastRequest::ListPredictorsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPredictorsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPredictorsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPredictorsRequest::response(QNetworkReply * const reply) const
{
    return new ListPredictorsResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::ListPredictorsRequestPrivate
 * \brief The ListPredictorsRequestPrivate class provides private implementation for ListPredictorsRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListPredictorsRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
ListPredictorsRequestPrivate::ListPredictorsRequestPrivate(
    const ForecastRequest::Action action, ListPredictorsRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPredictorsRequest
 * class' copy constructor.
 */
ListPredictorsRequestPrivate::ListPredictorsRequestPrivate(
    const ListPredictorsRequestPrivate &other, ListPredictorsRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
