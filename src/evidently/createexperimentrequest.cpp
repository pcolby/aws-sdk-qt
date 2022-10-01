// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createexperimentrequest.h"
#include "createexperimentrequest_p.h"
#include "createexperimentresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::CreateExperimentRequest
 * \brief The CreateExperimentRequest class provides an interface for Evidently CreateExperiment requests.
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
 * \sa EvidentlyClient::createExperiment
 */

/*!
 * Constructs a copy of \a other.
 */
CreateExperimentRequest::CreateExperimentRequest(const CreateExperimentRequest &other)
    : EvidentlyRequest(new CreateExperimentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateExperimentRequest object.
 */
CreateExperimentRequest::CreateExperimentRequest()
    : EvidentlyRequest(new CreateExperimentRequestPrivate(EvidentlyRequest::CreateExperimentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateExperimentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateExperimentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateExperimentRequest::response(QNetworkReply * const reply) const
{
    return new CreateExperimentResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::CreateExperimentRequestPrivate
 * \brief The CreateExperimentRequestPrivate class provides private implementation for CreateExperimentRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a CreateExperimentRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
CreateExperimentRequestPrivate::CreateExperimentRequestPrivate(
    const EvidentlyRequest::Action action, CreateExperimentRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateExperimentRequest
 * class' copy constructor.
 */
CreateExperimentRequestPrivate::CreateExperimentRequestPrivate(
    const CreateExperimentRequestPrivate &other, CreateExperimentRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
