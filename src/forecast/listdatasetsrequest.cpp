// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetsrequest.h"
#include "listdatasetsrequest_p.h"
#include "listdatasetsresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::ListDatasetsRequest
 * \brief The ListDatasetsRequest class provides an interface for Forecast ListDatasets requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::listDatasets
 */

/*!
 * Constructs a copy of \a other.
 */
ListDatasetsRequest::ListDatasetsRequest(const ListDatasetsRequest &other)
    : ForecastRequest(new ListDatasetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDatasetsRequest object.
 */
ListDatasetsRequest::ListDatasetsRequest()
    : ForecastRequest(new ListDatasetsRequestPrivate(ForecastRequest::ListDatasetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDatasetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDatasetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDatasetsRequest::response(QNetworkReply * const reply) const
{
    return new ListDatasetsResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::ListDatasetsRequestPrivate
 * \brief The ListDatasetsRequestPrivate class provides private implementation for ListDatasetsRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a ListDatasetsRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
ListDatasetsRequestPrivate::ListDatasetsRequestPrivate(
    const ForecastRequest::Action action, ListDatasetsRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDatasetsRequest
 * class' copy constructor.
 */
ListDatasetsRequestPrivate::ListDatasetsRequestPrivate(
    const ListDatasetsRequestPrivate &other, ListDatasetsRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
