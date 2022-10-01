// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateexperimentrequest.h"
#include "updateexperimentrequest_p.h"
#include "updateexperimentresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::UpdateExperimentRequest
 * \brief The UpdateExperimentRequest class provides an interface for Evidently UpdateExperiment requests.
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
 * \sa EvidentlyClient::updateExperiment
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateExperimentRequest::UpdateExperimentRequest(const UpdateExperimentRequest &other)
    : EvidentlyRequest(new UpdateExperimentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateExperimentRequest object.
 */
UpdateExperimentRequest::UpdateExperimentRequest()
    : EvidentlyRequest(new UpdateExperimentRequestPrivate(EvidentlyRequest::UpdateExperimentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateExperimentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateExperimentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateExperimentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateExperimentResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::UpdateExperimentRequestPrivate
 * \brief The UpdateExperimentRequestPrivate class provides private implementation for UpdateExperimentRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a UpdateExperimentRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
UpdateExperimentRequestPrivate::UpdateExperimentRequestPrivate(
    const EvidentlyRequest::Action action, UpdateExperimentRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateExperimentRequest
 * class' copy constructor.
 */
UpdateExperimentRequestPrivate::UpdateExperimentRequestPrivate(
    const UpdateExperimentRequestPrivate &other, UpdateExperimentRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
