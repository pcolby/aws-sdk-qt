// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteexplainabilityrequest.h"
#include "deleteexplainabilityrequest_p.h"
#include "deleteexplainabilityresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteExplainabilityRequest
 * \brief The DeleteExplainabilityRequest class provides an interface for Forecast DeleteExplainability requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteExplainability
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteExplainabilityRequest::DeleteExplainabilityRequest(const DeleteExplainabilityRequest &other)
    : ForecastRequest(new DeleteExplainabilityRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteExplainabilityRequest object.
 */
DeleteExplainabilityRequest::DeleteExplainabilityRequest()
    : ForecastRequest(new DeleteExplainabilityRequestPrivate(ForecastRequest::DeleteExplainabilityAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteExplainabilityRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteExplainabilityResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteExplainabilityRequest::response(QNetworkReply * const reply) const
{
    return new DeleteExplainabilityResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeleteExplainabilityRequestPrivate
 * \brief The DeleteExplainabilityRequestPrivate class provides private implementation for DeleteExplainabilityRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteExplainabilityRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeleteExplainabilityRequestPrivate::DeleteExplainabilityRequestPrivate(
    const ForecastRequest::Action action, DeleteExplainabilityRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteExplainabilityRequest
 * class' copy constructor.
 */
DeleteExplainabilityRequestPrivate::DeleteExplainabilityRequestPrivate(
    const DeleteExplainabilityRequestPrivate &other, DeleteExplainabilityRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
