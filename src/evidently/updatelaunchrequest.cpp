// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatelaunchrequest.h"
#include "updatelaunchrequest_p.h"
#include "updatelaunchresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::UpdateLaunchRequest
 * \brief The UpdateLaunchRequest class provides an interface for Evidently UpdateLaunch requests.
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
 * \sa EvidentlyClient::updateLaunch
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLaunchRequest::UpdateLaunchRequest(const UpdateLaunchRequest &other)
    : EvidentlyRequest(new UpdateLaunchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLaunchRequest object.
 */
UpdateLaunchRequest::UpdateLaunchRequest()
    : EvidentlyRequest(new UpdateLaunchRequestPrivate(EvidentlyRequest::UpdateLaunchAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLaunchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLaunchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLaunchRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLaunchResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::UpdateLaunchRequestPrivate
 * \brief The UpdateLaunchRequestPrivate class provides private implementation for UpdateLaunchRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a UpdateLaunchRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
UpdateLaunchRequestPrivate::UpdateLaunchRequestPrivate(
    const EvidentlyRequest::Action action, UpdateLaunchRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLaunchRequest
 * class' copy constructor.
 */
UpdateLaunchRequestPrivate::UpdateLaunchRequestPrivate(
    const UpdateLaunchRequestPrivate &other, UpdateLaunchRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
