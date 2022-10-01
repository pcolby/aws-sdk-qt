// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
