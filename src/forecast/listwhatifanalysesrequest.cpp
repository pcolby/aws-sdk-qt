// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listwhatifanalysesrequest.h"
#include "listwhatifanalysesrequest_p.h"
#include "listwhatifanalysesresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListWhatIfAnalysesRequest
 * \brief The ListWhatIfAnalysesRequest class provides an interface for Forecast ListWhatIfAnalyses requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listWhatIfAnalyses
 */

/*!
 * Constructs a copy of \a other.
 */
ListWhatIfAnalysesRequest::ListWhatIfAnalysesRequest(const ListWhatIfAnalysesRequest &other)
    : ForecastRequest(new ListWhatIfAnalysesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWhatIfAnalysesRequest object.
 */
ListWhatIfAnalysesRequest::ListWhatIfAnalysesRequest()
    : ForecastRequest(new ListWhatIfAnalysesRequestPrivate(ForecastRequest::ListWhatIfAnalysesAction, this))
{

}

/*!
 * \reimp
 */
bool ListWhatIfAnalysesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWhatIfAnalysesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWhatIfAnalysesRequest::response(QNetworkReply * const reply) const
{
    return new ListWhatIfAnalysesResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::ListWhatIfAnalysesRequestPrivate
 * \brief The ListWhatIfAnalysesRequestPrivate class provides private implementation for ListWhatIfAnalysesRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListWhatIfAnalysesRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
ListWhatIfAnalysesRequestPrivate::ListWhatIfAnalysesRequestPrivate(
    const ForecastRequest::Action action, ListWhatIfAnalysesRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWhatIfAnalysesRequest
 * class' copy constructor.
 */
ListWhatIfAnalysesRequestPrivate::ListWhatIfAnalysesRequestPrivate(
    const ListWhatIfAnalysesRequestPrivate &other, ListWhatIfAnalysesRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
