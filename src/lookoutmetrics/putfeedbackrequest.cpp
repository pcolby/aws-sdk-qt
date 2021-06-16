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

#include "putfeedbackrequest.h"
#include "putfeedbackrequest_p.h"
#include "putfeedbackresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::PutFeedbackRequest
 * \brief The PutFeedbackRequest class provides an interface for LookoutMetrics PutFeedback requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::putFeedback
 */

/*!
 * Constructs a copy of \a other.
 */
PutFeedbackRequest::PutFeedbackRequest(const PutFeedbackRequest &other)
    : LookoutMetricsRequest(new PutFeedbackRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutFeedbackRequest object.
 */
PutFeedbackRequest::PutFeedbackRequest()
    : LookoutMetricsRequest(new PutFeedbackRequestPrivate(LookoutMetricsRequest::PutFeedbackAction, this))
{

}

/*!
 * \reimp
 */
bool PutFeedbackRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutFeedbackResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutFeedbackRequest::response(QNetworkReply * const reply) const
{
    return new PutFeedbackResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::PutFeedbackRequestPrivate
 * \brief The PutFeedbackRequestPrivate class provides private implementation for PutFeedbackRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a PutFeedbackRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
PutFeedbackRequestPrivate::PutFeedbackRequestPrivate(
    const LookoutMetricsRequest::Action action, PutFeedbackRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutFeedbackRequest
 * class' copy constructor.
 */
PutFeedbackRequestPrivate::PutFeedbackRequestPrivate(
    const PutFeedbackRequestPrivate &other, PutFeedbackRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
