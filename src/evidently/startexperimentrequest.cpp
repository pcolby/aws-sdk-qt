// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startexperimentrequest.h"
#include "startexperimentrequest_p.h"
#include "startexperimentresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::StartExperimentRequest
 * \brief The StartExperimentRequest class provides an interface for Evidently StartExperiment requests.
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
 * \sa EvidentlyClient::startExperiment
 */

/*!
 * Constructs a copy of \a other.
 */
StartExperimentRequest::StartExperimentRequest(const StartExperimentRequest &other)
    : EvidentlyRequest(new StartExperimentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartExperimentRequest object.
 */
StartExperimentRequest::StartExperimentRequest()
    : EvidentlyRequest(new StartExperimentRequestPrivate(EvidentlyRequest::StartExperimentAction, this))
{

}

/*!
 * \reimp
 */
bool StartExperimentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartExperimentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartExperimentRequest::response(QNetworkReply * const reply) const
{
    return new StartExperimentResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::StartExperimentRequestPrivate
 * \brief The StartExperimentRequestPrivate class provides private implementation for StartExperimentRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a StartExperimentRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
StartExperimentRequestPrivate::StartExperimentRequestPrivate(
    const EvidentlyRequest::Action action, StartExperimentRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartExperimentRequest
 * class' copy constructor.
 */
StartExperimentRequestPrivate::StartExperimentRequestPrivate(
    const StartExperimentRequestPrivate &other, StartExperimentRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
