// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchevaluatefeaturerequest.h"
#include "batchevaluatefeaturerequest_p.h"
#include "batchevaluatefeatureresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::BatchEvaluateFeatureRequest
 * \brief The BatchEvaluateFeatureRequest class provides an interface for Evidently BatchEvaluateFeature requests.
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
 * \sa EvidentlyClient::batchEvaluateFeature
 */

/*!
 * Constructs a copy of \a other.
 */
BatchEvaluateFeatureRequest::BatchEvaluateFeatureRequest(const BatchEvaluateFeatureRequest &other)
    : EvidentlyRequest(new BatchEvaluateFeatureRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchEvaluateFeatureRequest object.
 */
BatchEvaluateFeatureRequest::BatchEvaluateFeatureRequest()
    : EvidentlyRequest(new BatchEvaluateFeatureRequestPrivate(EvidentlyRequest::BatchEvaluateFeatureAction, this))
{

}

/*!
 * \reimp
 */
bool BatchEvaluateFeatureRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchEvaluateFeatureResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchEvaluateFeatureRequest::response(QNetworkReply * const reply) const
{
    return new BatchEvaluateFeatureResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::BatchEvaluateFeatureRequestPrivate
 * \brief The BatchEvaluateFeatureRequestPrivate class provides private implementation for BatchEvaluateFeatureRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a BatchEvaluateFeatureRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
BatchEvaluateFeatureRequestPrivate::BatchEvaluateFeatureRequestPrivate(
    const EvidentlyRequest::Action action, BatchEvaluateFeatureRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchEvaluateFeatureRequest
 * class' copy constructor.
 */
BatchEvaluateFeatureRequestPrivate::BatchEvaluateFeatureRequestPrivate(
    const BatchEvaluateFeatureRequestPrivate &other, BatchEvaluateFeatureRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
