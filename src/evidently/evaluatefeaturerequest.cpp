// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "evaluatefeaturerequest.h"
#include "evaluatefeaturerequest_p.h"
#include "evaluatefeatureresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::EvaluateFeatureRequest
 * \brief The EvaluateFeatureRequest class provides an interface for Evidently EvaluateFeature requests.
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
 * \sa EvidentlyClient::evaluateFeature
 */

/*!
 * Constructs a copy of \a other.
 */
EvaluateFeatureRequest::EvaluateFeatureRequest(const EvaluateFeatureRequest &other)
    : EvidentlyRequest(new EvaluateFeatureRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EvaluateFeatureRequest object.
 */
EvaluateFeatureRequest::EvaluateFeatureRequest()
    : EvidentlyRequest(new EvaluateFeatureRequestPrivate(EvidentlyRequest::EvaluateFeatureAction, this))
{

}

/*!
 * \reimp
 */
bool EvaluateFeatureRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EvaluateFeatureResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EvaluateFeatureRequest::response(QNetworkReply * const reply) const
{
    return new EvaluateFeatureResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::EvaluateFeatureRequestPrivate
 * \brief The EvaluateFeatureRequestPrivate class provides private implementation for EvaluateFeatureRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a EvaluateFeatureRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
EvaluateFeatureRequestPrivate::EvaluateFeatureRequestPrivate(
    const EvidentlyRequest::Action action, EvaluateFeatureRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EvaluateFeatureRequest
 * class' copy constructor.
 */
EvaluateFeatureRequestPrivate::EvaluateFeatureRequestPrivate(
    const EvaluateFeatureRequestPrivate &other, EvaluateFeatureRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
