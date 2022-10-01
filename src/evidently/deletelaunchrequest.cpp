// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletelaunchrequest.h"
#include "deletelaunchrequest_p.h"
#include "deletelaunchresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::DeleteLaunchRequest
 * \brief The DeleteLaunchRequest class provides an interface for Evidently DeleteLaunch requests.
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
 * \sa EvidentlyClient::deleteLaunch
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLaunchRequest::DeleteLaunchRequest(const DeleteLaunchRequest &other)
    : EvidentlyRequest(new DeleteLaunchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLaunchRequest object.
 */
DeleteLaunchRequest::DeleteLaunchRequest()
    : EvidentlyRequest(new DeleteLaunchRequestPrivate(EvidentlyRequest::DeleteLaunchAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLaunchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLaunchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLaunchRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLaunchResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::DeleteLaunchRequestPrivate
 * \brief The DeleteLaunchRequestPrivate class provides private implementation for DeleteLaunchRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a DeleteLaunchRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
DeleteLaunchRequestPrivate::DeleteLaunchRequestPrivate(
    const EvidentlyRequest::Action action, DeleteLaunchRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLaunchRequest
 * class' copy constructor.
 */
DeleteLaunchRequestPrivate::DeleteLaunchRequestPrivate(
    const DeleteLaunchRequestPrivate &other, DeleteLaunchRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
