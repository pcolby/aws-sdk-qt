// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getexperimentrequest.h"
#include "getexperimentrequest_p.h"
#include "getexperimentresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::GetExperimentRequest
 * \brief The GetExperimentRequest class provides an interface for Evidently GetExperiment requests.
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
 * \sa EvidentlyClient::getExperiment
 */

/*!
 * Constructs a copy of \a other.
 */
GetExperimentRequest::GetExperimentRequest(const GetExperimentRequest &other)
    : EvidentlyRequest(new GetExperimentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetExperimentRequest object.
 */
GetExperimentRequest::GetExperimentRequest()
    : EvidentlyRequest(new GetExperimentRequestPrivate(EvidentlyRequest::GetExperimentAction, this))
{

}

/*!
 * \reimp
 */
bool GetExperimentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetExperimentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExperimentRequest::response(QNetworkReply * const reply) const
{
    return new GetExperimentResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::GetExperimentRequestPrivate
 * \brief The GetExperimentRequestPrivate class provides private implementation for GetExperimentRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a GetExperimentRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
GetExperimentRequestPrivate::GetExperimentRequestPrivate(
    const EvidentlyRequest::Action action, GetExperimentRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetExperimentRequest
 * class' copy constructor.
 */
GetExperimentRequestPrivate::GetExperimentRequestPrivate(
    const GetExperimentRequestPrivate &other, GetExperimentRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
