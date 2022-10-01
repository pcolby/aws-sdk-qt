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
