// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopresourcerequest.h"
#include "stopresourcerequest_p.h"
#include "stopresourceresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::StopResourceRequest
 * \brief The StopResourceRequest class provides an interface for Forecast StopResource requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::stopResource
 */

/*!
 * Constructs a copy of \a other.
 */
StopResourceRequest::StopResourceRequest(const StopResourceRequest &other)
    : ForecastRequest(new StopResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopResourceRequest object.
 */
StopResourceRequest::StopResourceRequest()
    : ForecastRequest(new StopResourceRequestPrivate(ForecastRequest::StopResourceAction, this))
{

}

/*!
 * \reimp
 */
bool StopResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopResourceRequest::response(QNetworkReply * const reply) const
{
    return new StopResourceResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::StopResourceRequestPrivate
 * \brief The StopResourceRequestPrivate class provides private implementation for StopResourceRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a StopResourceRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
StopResourceRequestPrivate::StopResourceRequestPrivate(
    const ForecastRequest::Action action, StopResourceRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopResourceRequest
 * class' copy constructor.
 */
StopResourceRequestPrivate::StopResourceRequestPrivate(
    const StopResourceRequestPrivate &other, StopResourceRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
