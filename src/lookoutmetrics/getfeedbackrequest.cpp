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

#include "getfeedbackrequest.h"
#include "getfeedbackrequest_p.h"
#include "getfeedbackresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::GetFeedbackRequest
 * \brief The GetFeedbackRequest class provides an interface for LookoutMetrics GetFeedback requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::getFeedback
 */

/*!
 * Constructs a copy of \a other.
 */
GetFeedbackRequest::GetFeedbackRequest(const GetFeedbackRequest &other)
    : LookoutMetricsRequest(new GetFeedbackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetFeedbackRequest object.
 */
GetFeedbackRequest::GetFeedbackRequest()
    : LookoutMetricsRequest(new GetFeedbackRequestPrivate(LookoutMetricsRequest::GetFeedbackAction, this))
{

}

/*!
 * \reimp
 */
bool GetFeedbackRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetFeedbackResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetFeedbackRequest::response(QNetworkReply * const reply) const
{
    return new GetFeedbackResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::GetFeedbackRequestPrivate
 * \brief The GetFeedbackRequestPrivate class provides private implementation for GetFeedbackRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a GetFeedbackRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
GetFeedbackRequestPrivate::GetFeedbackRequestPrivate(
    const LookoutMetricsRequest::Action action, GetFeedbackRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetFeedbackRequest
 * class' copy constructor.
 */
GetFeedbackRequestPrivate::GetFeedbackRequestPrivate(
    const GetFeedbackRequestPrivate &other, GetFeedbackRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
