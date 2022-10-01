// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
