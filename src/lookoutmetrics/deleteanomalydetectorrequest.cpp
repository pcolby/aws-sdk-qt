// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteanomalydetectorrequest.h"
#include "deleteanomalydetectorrequest_p.h"
#include "deleteanomalydetectorresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DeleteAnomalyDetectorRequest
 * \brief The DeleteAnomalyDetectorRequest class provides an interface for LookoutMetrics DeleteAnomalyDetector requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::deleteAnomalyDetector
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAnomalyDetectorRequest::DeleteAnomalyDetectorRequest(const DeleteAnomalyDetectorRequest &other)
    : LookoutMetricsRequest(new DeleteAnomalyDetectorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAnomalyDetectorRequest object.
 */
DeleteAnomalyDetectorRequest::DeleteAnomalyDetectorRequest()
    : LookoutMetricsRequest(new DeleteAnomalyDetectorRequestPrivate(LookoutMetricsRequest::DeleteAnomalyDetectorAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAnomalyDetectorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAnomalyDetectorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAnomalyDetectorRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAnomalyDetectorResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::DeleteAnomalyDetectorRequestPrivate
 * \brief The DeleteAnomalyDetectorRequestPrivate class provides private implementation for DeleteAnomalyDetectorRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DeleteAnomalyDetectorRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
DeleteAnomalyDetectorRequestPrivate::DeleteAnomalyDetectorRequestPrivate(
    const LookoutMetricsRequest::Action action, DeleteAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAnomalyDetectorRequest
 * class' copy constructor.
 */
DeleteAnomalyDetectorRequestPrivate::DeleteAnomalyDetectorRequestPrivate(
    const DeleteAnomalyDetectorRequestPrivate &other, DeleteAnomalyDetectorRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
