// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createalertrequest.h"
#include "createalertrequest_p.h"
#include "createalertresponse.h"
#include "lookoutmetricsrequest_p.h"

namespace QtAws {
namespace LookoutMetrics {

/*!
 * \class QtAws::LookoutMetrics::CreateAlertRequest
 * \brief The CreateAlertRequest class provides an interface for LookoutMetrics CreateAlert requests.
 *
 * \inmodule QtAwsLookoutMetrics
 *
 *  This is the <i>Amazon Lookout for Metrics API Reference</i>. For an introduction to the service with tutorials for
 *  getting started, visit <a href="https://docs.aws.amazon.com/lookoutmetrics/latest/dev">Amazon Lookout for Metrics
 *  Developer
 *
 * \sa LookoutMetricsClient::createAlert
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAlertRequest::CreateAlertRequest(const CreateAlertRequest &other)
    : LookoutMetricsRequest(new CreateAlertRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAlertRequest object.
 */
CreateAlertRequest::CreateAlertRequest()
    : LookoutMetricsRequest(new CreateAlertRequestPrivate(LookoutMetricsRequest::CreateAlertAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAlertRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAlertResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAlertRequest::response(QNetworkReply * const reply) const
{
    return new CreateAlertResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutMetrics::CreateAlertRequestPrivate
 * \brief The CreateAlertRequestPrivate class provides private implementation for CreateAlertRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutMetrics
 */

/*!
 * Constructs a CreateAlertRequestPrivate object for LookoutMetrics \a action,
 * with public implementation \a q.
 */
CreateAlertRequestPrivate::CreateAlertRequestPrivate(
    const LookoutMetricsRequest::Action action, CreateAlertRequest * const q)
    : LookoutMetricsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAlertRequest
 * class' copy constructor.
 */
CreateAlertRequestPrivate::CreateAlertRequestPrivate(
    const CreateAlertRequestPrivate &other, CreateAlertRequest * const q)
    : LookoutMetricsRequestPrivate(other, q)
{

}

} // namespace LookoutMetrics
} // namespace QtAws
