// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletefeaturerequest.h"
#include "deletefeaturerequest_p.h"
#include "deletefeatureresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::DeleteFeatureRequest
 * \brief The DeleteFeatureRequest class provides an interface for Evidently DeleteFeature requests.
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
 * \sa EvidentlyClient::deleteFeature
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFeatureRequest::DeleteFeatureRequest(const DeleteFeatureRequest &other)
    : EvidentlyRequest(new DeleteFeatureRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFeatureRequest object.
 */
DeleteFeatureRequest::DeleteFeatureRequest()
    : EvidentlyRequest(new DeleteFeatureRequestPrivate(EvidentlyRequest::DeleteFeatureAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFeatureRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFeatureResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFeatureRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFeatureResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::DeleteFeatureRequestPrivate
 * \brief The DeleteFeatureRequestPrivate class provides private implementation for DeleteFeatureRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a DeleteFeatureRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
DeleteFeatureRequestPrivate::DeleteFeatureRequestPrivate(
    const EvidentlyRequest::Action action, DeleteFeatureRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFeatureRequest
 * class' copy constructor.
 */
DeleteFeatureRequestPrivate::DeleteFeatureRequestPrivate(
    const DeleteFeatureRequestPrivate &other, DeleteFeatureRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
