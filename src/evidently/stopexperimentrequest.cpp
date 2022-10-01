// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopexperimentrequest.h"
#include "stopexperimentrequest_p.h"
#include "stopexperimentresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::StopExperimentRequest
 * \brief The StopExperimentRequest class provides an interface for Evidently StopExperiment requests.
 *
 * \inmodule QtAwsEvidently
 *
 *  You can use Amazon CloudWatch Evidently to safely validate new features by serving them to a specified percentage of
 *  your users while you roll out the feature. You can monitor the performance of the new feature to help you decide when to
 *  ramp up traffic to your users. This helps you reduce risk and identify unintended consequences before you fully launch
 *  the
 * 
 *  feature>
 * 
 *  You can also conduct A/B experiments to make feature design decisions based on evidence and data. An experiment can test
 *  as many as five variations at once. Evidently collects experiment data and analyzes it using statistical methods. It
 *  also provides clear recommendations about which variations perform better. You can test both user-facing features and
 *  backend
 *
 * \sa EvidentlyClient::stopExperiment
 */

/*!
 * Constructs a copy of \a other.
 */
StopExperimentRequest::StopExperimentRequest(const StopExperimentRequest &other)
    : EvidentlyRequest(new StopExperimentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopExperimentRequest object.
 */
StopExperimentRequest::StopExperimentRequest()
    : EvidentlyRequest(new StopExperimentRequestPrivate(EvidentlyRequest::StopExperimentAction, this))
{

}

/*!
 * \reimp
 */
bool StopExperimentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopExperimentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopExperimentRequest::response(QNetworkReply * const reply) const
{
    return new StopExperimentResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::StopExperimentRequestPrivate
 * \brief The StopExperimentRequestPrivate class provides private implementation for StopExperimentRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a StopExperimentRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
StopExperimentRequestPrivate::StopExperimentRequestPrivate(
    const EvidentlyRequest::Action action, StopExperimentRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopExperimentRequest
 * class' copy constructor.
 */
StopExperimentRequestPrivate::StopExperimentRequestPrivate(
    const StopExperimentRequestPrivate &other, StopExperimentRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
