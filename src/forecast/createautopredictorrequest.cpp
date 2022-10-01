// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createautopredictorrequest.h"
#include "createautopredictorrequest_p.h"
#include "createautopredictorresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateAutoPredictorRequest
 * \brief The CreateAutoPredictorRequest class provides an interface for Forecast CreateAutoPredictor requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createAutoPredictor
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAutoPredictorRequest::CreateAutoPredictorRequest(const CreateAutoPredictorRequest &other)
    : ForecastRequest(new CreateAutoPredictorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAutoPredictorRequest object.
 */
CreateAutoPredictorRequest::CreateAutoPredictorRequest()
    : ForecastRequest(new CreateAutoPredictorRequestPrivate(ForecastRequest::CreateAutoPredictorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAutoPredictorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAutoPredictorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAutoPredictorRequest::response(QNetworkReply * const reply) const
{
    return new CreateAutoPredictorResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreateAutoPredictorRequestPrivate
 * \brief The CreateAutoPredictorRequestPrivate class provides private implementation for CreateAutoPredictorRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateAutoPredictorRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreateAutoPredictorRequestPrivate::CreateAutoPredictorRequestPrivate(
    const ForecastRequest::Action action, CreateAutoPredictorRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAutoPredictorRequest
 * class' copy constructor.
 */
CreateAutoPredictorRequestPrivate::CreateAutoPredictorRequestPrivate(
    const CreateAutoPredictorRequestPrivate &other, CreateAutoPredictorRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
