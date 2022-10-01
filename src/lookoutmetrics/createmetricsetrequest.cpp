// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmetricsetrequest.h"
#include "createmetricsetrequest_p.h"
#include "createmetricsetresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::CreateMetricSetRequest
 * \brief The CreateMetricSetRequest class provides an interface for LookoutMetrics CreateMetricSet requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::createMetricSet
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMetricSetRequest::CreateMetricSetRequest(const CreateMetricSetRequest &other)
    : LookoutMetricsRequest(new CreateMetricSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMetricSetRequest object.
 */
CreateMetricSetRequest::CreateMetricSetRequest()
    : LookoutMetricsRequest(new CreateMetricSetRequestPrivate(LookoutMetricsRequest::CreateMetricSetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMetricSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMetricSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMetricSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateMetricSetResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::CreateMetricSetRequestPrivate
 * \brief The CreateMetricSetRequestPrivate class provides private implementation for CreateMetricSetRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a CreateMetricSetRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
CreateMetricSetRequestPrivate::CreateMetricSetRequestPrivate(
    const LookoutMetricsRequest::Action action, CreateMetricSetRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMetricSetRequest
 * class' copy constructor.
 */
CreateMetricSetRequestPrivate::CreateMetricSetRequestPrivate(
    const CreateMetricSetRequestPrivate &other, CreateMetricSetRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
