// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoplaunchrequest.h"
#include "stoplaunchrequest_p.h"
#include "stoplaunchresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::StopLaunchRequest
 * \brief The StopLaunchRequest class provides an interface for Evidently StopLaunch requests.
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
 * \sa EvidentlyClient::stopLaunch
 */

/*!
 * Constructs a copy of \a other.
 */
StopLaunchRequest::StopLaunchRequest(const StopLaunchRequest &other)
    : EvidentlyRequest(new StopLaunchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopLaunchRequest object.
 */
StopLaunchRequest::StopLaunchRequest()
    : EvidentlyRequest(new StopLaunchRequestPrivate(EvidentlyRequest::StopLaunchAction, this))
{

}

/*!
 * \reimp
 */
bool StopLaunchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopLaunchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopLaunchRequest::response(QNetworkReply * const reply) const
{
    return new StopLaunchResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::StopLaunchRequestPrivate
 * \brief The StopLaunchRequestPrivate class provides private implementation for StopLaunchRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a StopLaunchRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
StopLaunchRequestPrivate::StopLaunchRequestPrivate(
    const EvidentlyRequest::Action action, StopLaunchRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopLaunchRequest
 * class' copy constructor.
 */
StopLaunchRequestPrivate::StopLaunchRequestPrivate(
    const StopLaunchRequestPrivate &other, StopLaunchRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
