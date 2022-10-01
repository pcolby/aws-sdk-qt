// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletewhatifforecastrequest.h"
#include "deletewhatifforecastrequest_p.h"
#include "deletewhatifforecastresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteWhatIfForecastRequest
 * \brief The DeleteWhatIfForecastRequest class provides an interface for Forecast DeleteWhatIfForecast requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteWhatIfForecast
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWhatIfForecastRequest::DeleteWhatIfForecastRequest(const DeleteWhatIfForecastRequest &other)
    : ForecastRequest(new DeleteWhatIfForecastRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWhatIfForecastRequest object.
 */
DeleteWhatIfForecastRequest::DeleteWhatIfForecastRequest()
    : ForecastRequest(new DeleteWhatIfForecastRequestPrivate(ForecastRequest::DeleteWhatIfForecastAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWhatIfForecastRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWhatIfForecastResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWhatIfForecastRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWhatIfForecastResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeleteWhatIfForecastRequestPrivate
 * \brief The DeleteWhatIfForecastRequestPrivate class provides private implementation for DeleteWhatIfForecastRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteWhatIfForecastRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeleteWhatIfForecastRequestPrivate::DeleteWhatIfForecastRequestPrivate(
    const ForecastRequest::Action action, DeleteWhatIfForecastRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWhatIfForecastRequest
 * class' copy constructor.
 */
DeleteWhatIfForecastRequestPrivate::DeleteWhatIfForecastRequestPrivate(
    const DeleteWhatIfForecastRequestPrivate &other, DeleteWhatIfForecastRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
