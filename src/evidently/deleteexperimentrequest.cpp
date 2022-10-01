// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteexperimentrequest.h"
#include "deleteexperimentrequest_p.h"
#include "deleteexperimentresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::DeleteExperimentRequest
 * \brief The DeleteExperimentRequest class provides an interface for Evidently DeleteExperiment requests.
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
 * \sa EvidentlyClient::deleteExperiment
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteExperimentRequest::DeleteExperimentRequest(const DeleteExperimentRequest &other)
    : EvidentlyRequest(new DeleteExperimentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteExperimentRequest object.
 */
DeleteExperimentRequest::DeleteExperimentRequest()
    : EvidentlyRequest(new DeleteExperimentRequestPrivate(EvidentlyRequest::DeleteExperimentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteExperimentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteExperimentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteExperimentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteExperimentResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::DeleteExperimentRequestPrivate
 * \brief The DeleteExperimentRequestPrivate class provides private implementation for DeleteExperimentRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a DeleteExperimentRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
DeleteExperimentRequestPrivate::DeleteExperimentRequestPrivate(
    const EvidentlyRequest::Action action, DeleteExperimentRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteExperimentRequest
 * class' copy constructor.
 */
DeleteExperimentRequestPrivate::DeleteExperimentRequestPrivate(
    const DeleteExperimentRequestPrivate &other, DeleteExperimentRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
