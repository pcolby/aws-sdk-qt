// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlaunchesrequest.h"
#include "listlaunchesrequest_p.h"
#include "listlaunchesresponse.h"
#include "evidentlyrequest_p.h"

namespace QtAws {
namespace Evidently {

/*!
 * \class QtAws::Evidently::ListLaunchesRequest
 * \brief The ListLaunchesRequest class provides an interface for Evidently ListLaunches requests.
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
 * \sa EvidentlyClient::listLaunches
 */

/*!
 * Constructs a copy of \a other.
 */
ListLaunchesRequest::ListLaunchesRequest(const ListLaunchesRequest &other)
    : EvidentlyRequest(new ListLaunchesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLaunchesRequest object.
 */
ListLaunchesRequest::ListLaunchesRequest()
    : EvidentlyRequest(new ListLaunchesRequestPrivate(EvidentlyRequest::ListLaunchesAction, this))
{

}

/*!
 * \reimp
 */
bool ListLaunchesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLaunchesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLaunchesRequest::response(QNetworkReply * const reply) const
{
    return new ListLaunchesResponse(*this, reply);
}

/*!
 * \class QtAws::Evidently::ListLaunchesRequestPrivate
 * \brief The ListLaunchesRequestPrivate class provides private implementation for ListLaunchesRequest.
 * \internal
 *
 * \inmodule QtAwsEvidently
 */

/*!
 * Constructs a ListLaunchesRequestPrivate object for Evidently \a action,
 * with public implementation \a q.
 */
ListLaunchesRequestPrivate::ListLaunchesRequestPrivate(
    const EvidentlyRequest::Action action, ListLaunchesRequest * const q)
    : EvidentlyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLaunchesRequest
 * class' copy constructor.
 */
ListLaunchesRequestPrivate::ListLaunchesRequestPrivate(
    const ListLaunchesRequestPrivate &other, ListLaunchesRequest * const q)
    : EvidentlyRequestPrivate(other, q)
{

}

} // namespace Evidently
} // namespace QtAws
