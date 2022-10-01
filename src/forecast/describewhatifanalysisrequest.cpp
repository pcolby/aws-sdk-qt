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

#include "describewhatifanalysisrequest.h"
#include "describewhatifanalysisrequest_p.h"
#include "describewhatifanalysisresponse.h"
#include "forecastrequest_p.h"

namespace QtAws {
namespace Forecast {

/*!
 * \class QtAws::Forecast::DescribeWhatIfAnalysisRequest
 * \brief The DescribeWhatIfAnalysisRequest class provides an interface for Forecast DescribeWhatIfAnalysis requests.
 *
 * \inmodule QtAwsForecast
 *
 *  Provides APIs for creating and managing Amazon Forecast
 *
 * \sa ForecastClient::describeWhatIfAnalysis
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWhatIfAnalysisRequest::DescribeWhatIfAnalysisRequest(const DescribeWhatIfAnalysisRequest &other)
    : ForecastRequest(new DescribeWhatIfAnalysisRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWhatIfAnalysisRequest object.
 */
DescribeWhatIfAnalysisRequest::DescribeWhatIfAnalysisRequest()
    : ForecastRequest(new DescribeWhatIfAnalysisRequestPrivate(ForecastRequest::DescribeWhatIfAnalysisAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWhatIfAnalysisRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWhatIfAnalysisResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWhatIfAnalysisRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWhatIfAnalysisResponse(*this, reply);
}

/*!
 * \class QtAws::Forecast::DescribeWhatIfAnalysisRequestPrivate
 * \brief The DescribeWhatIfAnalysisRequestPrivate class provides private implementation for DescribeWhatIfAnalysisRequest.
 * \internal
 *
 * \inmodule QtAwsForecast
 */

/*!
 * Constructs a DescribeWhatIfAnalysisRequestPrivate object for Forecast \a action,
 * with public implementation \a q.
 */
DescribeWhatIfAnalysisRequestPrivate::DescribeWhatIfAnalysisRequestPrivate(
    const ForecastRequest::Action action, DescribeWhatIfAnalysisRequest * const q)
    : ForecastRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWhatIfAnalysisRequest
 * class' copy constructor.
 */
DescribeWhatIfAnalysisRequestPrivate::DescribeWhatIfAnalysisRequestPrivate(
    const DescribeWhatIfAnalysisRequestPrivate &other, DescribeWhatIfAnalysisRequest * const q)
    : ForecastRequestPrivate(other, q)
{

}

} // namespace Forecast
} // namespace QtAws
