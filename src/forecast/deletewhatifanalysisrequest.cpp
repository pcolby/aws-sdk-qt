/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
