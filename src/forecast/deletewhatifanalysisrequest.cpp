// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletewhatifanalysisrequest.h"
#include "deletewhatifanalysisrequest_p.h"
#include "deletewhatifanalysisresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DeleteWhatIfAnalysisRequest
 * \brief The DeleteWhatIfAnalysisRequest class provides an interface for Forecast DeleteWhatIfAnalysis requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::deleteWhatIfAnalysis
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWhatIfAnalysisRequest::DeleteWhatIfAnalysisRequest(const DeleteWhatIfAnalysisRequest &other)
    : ForecastRequest(new DeleteWhatIfAnalysisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWhatIfAnalysisRequest object.
 */
DeleteWhatIfAnalysisRequest::DeleteWhatIfAnalysisRequest()
    : ForecastRequest(new DeleteWhatIfAnalysisRequestPrivate(ForecastRequest::DeleteWhatIfAnalysisAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWhatIfAnalysisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWhatIfAnalysisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWhatIfAnalysisRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWhatIfAnalysisResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DeleteWhatIfAnalysisRequestPrivate
 * \brief The DeleteWhatIfAnalysisRequestPrivate class provides private implementation for DeleteWhatIfAnalysisRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DeleteWhatIfAnalysisRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DeleteWhatIfAnalysisRequestPrivate::DeleteWhatIfAnalysisRequestPrivate(
    const ForecastRequest::Action action, DeleteWhatIfAnalysisRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWhatIfAnalysisRequest
 * class' copy constructor.
 */
DeleteWhatIfAnalysisRequestPrivate::DeleteWhatIfAnalysisRequestPrivate(
    const DeleteWhatIfAnalysisRequestPrivate &other, DeleteWhatIfAnalysisRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
