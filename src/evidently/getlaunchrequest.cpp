// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlaunchrequest.h"
#include "getlaunchrequest_p.h"
#include "getlaunchresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::GetLaunchRequest
 * \brief The GetLaunchRequest class provides an interface for Evidently GetLaunch requests.
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
 * \sa EvidentlyClient::getLaunch
 */

/*!
 * Constructs a copy of \a other.
 */
GetLaunchRequest::GetLaunchRequest(const GetLaunchRequest &other)
    : EvidentlyRequest(new GetLaunchRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLaunchRequest object.
 */
GetLaunchRequest::GetLaunchRequest()
    : EvidentlyRequest(new GetLaunchRequestPrivate(EvidentlyRequest::GetLaunchAction, this))
{

}

/*!
 * \reimp
 */
bool GetLaunchRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLaunchResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLaunchRequest::response(QNetworkReply * const reply) const
{
    return new GetLaunchResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::GetLaunchRequestPrivate
 * \brief The GetLaunchRequestPrivate class provides private implementation for GetLaunchRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a GetLaunchRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
GetLaunchRequestPrivate::GetLaunchRequestPrivate(
    const EvidentlyRequest::Action action, GetLaunchRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLaunchRequest
 * class' copy constructor.
 */
GetLaunchRequestPrivate::GetLaunchRequestPrivate(
    const GetLaunchRequestPrivate &other, GetLaunchRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
