// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startlaunchrequest.h"
#include "startlaunchrequest_p.h"
#include "startlaunchresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::StartLaunchRequest
 * \brief The StartLaunchRequest class provides an interface for Evidently StartLaunch requests.
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
 * \sa EvidentlyClient::startLaunch
 */

/*!
 * Constructs a copy of \a other.
 */
StartLaunchRequest::StartLaunchRequest(const StartLaunchRequest &other)
    : EvidentlyRequest(new StartLaunchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartLaunchRequest object.
 */
StartLaunchRequest::StartLaunchRequest()
    : EvidentlyRequest(new StartLaunchRequestPrivate(EvidentlyRequest::StartLaunchAction, this))
{

}

/*!
 * \reimp
 */
bool StartLaunchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartLaunchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartLaunchRequest::response(QNetworkReply * const reply) const
{
    return new StartLaunchResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::StartLaunchRequestPrivate
 * \brief The StartLaunchRequestPrivate class provides private implementation for StartLaunchRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a StartLaunchRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
StartLaunchRequestPrivate::StartLaunchRequestPrivate(
    const EvidentlyRequest::Action action, StartLaunchRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartLaunchRequest
 * class' copy constructor.
 */
StartLaunchRequestPrivate::StartLaunchRequestPrivate(
    const StartLaunchRequestPrivate &other, StartLaunchRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
