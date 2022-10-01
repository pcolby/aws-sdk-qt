// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpredictorrequest.h"
#include "createpredictorrequest_p.h"
#include "createpredictorresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreatePredictorRequest
 * \brief The CreatePredictorRequest class provides an interface for Forecast CreatePredictor requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createPredictor
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePredictorRequest::CreatePredictorRequest(const CreatePredictorRequest &other)
    : ForecastRequest(new CreatePredictorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePredictorRequest object.
 */
CreatePredictorRequest::CreatePredictorRequest()
    : ForecastRequest(new CreatePredictorRequestPrivate(ForecastRequest::CreatePredictorAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePredictorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePredictorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePredictorRequest::response(QNetworkReply * const reply) const
{
    return new CreatePredictorResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreatePredictorRequestPrivate
 * \brief The CreatePredictorRequestPrivate class provides private implementation for CreatePredictorRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreatePredictorRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreatePredictorRequestPrivate::CreatePredictorRequestPrivate(
    const ForecastRequest::Action action, CreatePredictorRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePredictorRequest
 * class' copy constructor.
 */
CreatePredictorRequestPrivate::CreatePredictorRequestPrivate(
    const CreatePredictorRequestPrivate &other, CreatePredictorRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
