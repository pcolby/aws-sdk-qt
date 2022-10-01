// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefeaturerequest.h"
#include "updatefeaturerequest_p.h"
#include "updatefeatureresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::UpdateFeatureRequest
 * \brief The UpdateFeatureRequest class provides an interface for Evidently UpdateFeature requests.
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
 * \sa EvidentlyClient::updateFeature
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFeatureRequest::UpdateFeatureRequest(const UpdateFeatureRequest &other)
    : EvidentlyRequest(new UpdateFeatureRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFeatureRequest object.
 */
UpdateFeatureRequest::UpdateFeatureRequest()
    : EvidentlyRequest(new UpdateFeatureRequestPrivate(EvidentlyRequest::UpdateFeatureAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFeatureRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFeatureResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFeatureRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFeatureResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::UpdateFeatureRequestPrivate
 * \brief The UpdateFeatureRequestPrivate class provides private implementation for UpdateFeatureRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a UpdateFeatureRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
UpdateFeatureRequestPrivate::UpdateFeatureRequestPrivate(
    const EvidentlyRequest::Action action, UpdateFeatureRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFeatureRequest
 * class' copy constructor.
 */
UpdateFeatureRequestPrivate::UpdateFeatureRequestPrivate(
    const UpdateFeatureRequestPrivate &other, UpdateFeatureRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
