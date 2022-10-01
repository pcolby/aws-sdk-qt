// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "detectmetricsetconfigrequest.h"
#include "detectmetricsetconfigrequest_p.h"
#include "detectmetricsetconfigresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::DetectMetricSetConfigRequest
 * \brief The DetectMetricSetConfigRequest class provides an interface for LookoutMetrics DetectMetricSetConfig requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::detectMetricSetConfig
 */

/*!
 * Constructs a copy of \a other.
 */
DetectMetricSetConfigRequest::DetectMetricSetConfigRequest(const DetectMetricSetConfigRequest &other)
    : LookoutMetricsRequest(new DetectMetricSetConfigRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectMetricSetConfigRequest object.
 */
DetectMetricSetConfigRequest::DetectMetricSetConfigRequest()
    : LookoutMetricsRequest(new DetectMetricSetConfigRequestPrivate(LookoutMetricsRequest::DetectMetricSetConfigAction, this))
{

}

/*!
 * \reimp
 */
bool DetectMetricSetConfigRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectMetricSetConfigResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectMetricSetConfigRequest::response(QNetworkReply * const reply) const
{
    return new DetectMetricSetConfigResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::DetectMetricSetConfigRequestPrivate
 * \brief The DetectMetricSetConfigRequestPrivate class provides private implementation for DetectMetricSetConfigRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a DetectMetricSetConfigRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
DetectMetricSetConfigRequestPrivate::DetectMetricSetConfigRequestPrivate(
    const LookoutMetricsRequest::Action action, DetectMetricSetConfigRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectMetricSetConfigRequest
 * class' copy constructor.
 */
DetectMetricSetConfigRequestPrivate::DetectMetricSetConfigRequestPrivate(
    const DetectMetricSetConfigRequestPrivate &other, DetectMetricSetConfigRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
