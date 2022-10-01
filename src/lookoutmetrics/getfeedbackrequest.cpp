// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
