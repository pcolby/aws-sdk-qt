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
