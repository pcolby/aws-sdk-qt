// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createwhatifanalysisrequest.h"
#include "createwhatifanalysisrequest_p.h"
#include "createwhatifanalysisresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::CreateWhatIfAnalysisRequest
 * \brief The CreateWhatIfAnalysisRequest class provides an interface for Forecast CreateWhatIfAnalysis requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::createWhatIfAnalysis
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWhatIfAnalysisRequest::CreateWhatIfAnalysisRequest(const CreateWhatIfAnalysisRequest &other)
    : ForecastRequest(new CreateWhatIfAnalysisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWhatIfAnalysisRequest object.
 */
CreateWhatIfAnalysisRequest::CreateWhatIfAnalysisRequest()
    : ForecastRequest(new CreateWhatIfAnalysisRequestPrivate(ForecastRequest::CreateWhatIfAnalysisAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWhatIfAnalysisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWhatIfAnalysisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWhatIfAnalysisRequest::response(QNetworkReply * const reply) const
{
    return new CreateWhatIfAnalysisResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::CreateWhatIfAnalysisRequestPrivate
 * \brief The CreateWhatIfAnalysisRequestPrivate class provides private implementation for CreateWhatIfAnalysisRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a CreateWhatIfAnalysisRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
CreateWhatIfAnalysisRequestPrivate::CreateWhatIfAnalysisRequestPrivate(
    const ForecastRequest::Action action, CreateWhatIfAnalysisRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWhatIfAnalysisRequest
 * class' copy constructor.
 */
CreateWhatIfAnalysisRequestPrivate::CreateWhatIfAnalysisRequestPrivate(
    const CreateWhatIfAnalysisRequestPrivate &other, CreateWhatIfAnalysisRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
