// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listlaunchprofilemembersrequest.h"
#include "listlaunchprofilemembersrequest_p.h"
#include "listlaunchprofilemembersresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::ListLaunchProfileMembersRequest
 * \brief The ListLaunchProfileMembersRequest class provides an interface for Nimble ListLaunchProfileMembers requests.
 *
 * \inmodule QtAwsNimble
 *
 *  Welcome to the Amazon Nimble Studio API reference. This API reference provides methods, schema, resources, parameters,
 *  and more to help you get the most out of Nimble
 * 
 *  Studio>
 * 
 *  Nimble Studio is a virtual studio that empowers visual effects, animation, and interactive content teams to create
 *  content securely within a scalable, private cloud
 *
 * \sa NimbleClient::listLaunchProfileMembers
 */

/*!
 * Constructs a copy of \a other.
 */
ListLaunchProfileMembersRequest::ListLaunchProfileMembersRequest(const ListLaunchProfileMembersRequest &other)
    : NimbleRequest(new ListLaunchProfileMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLaunchProfileMembersRequest object.
 */
ListLaunchProfileMembersRequest::ListLaunchProfileMembersRequest()
    : NimbleRequest(new ListLaunchProfileMembersRequestPrivate(NimbleRequest::ListLaunchProfileMembersAction, this))
{

}

/*!
 * \reimp
 */
bool ListLaunchProfileMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLaunchProfileMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLaunchProfileMembersRequest::response(QNetworkReply * const reply) const
{
    return new ListLaunchProfileMembersResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::ListLaunchProfileMembersRequestPrivate
 * \brief The ListLaunchProfileMembersRequestPrivate class provides private implementation for ListLaunchProfileMembersRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a ListLaunchProfileMembersRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
ListLaunchProfileMembersRequestPrivate::ListLaunchProfileMembersRequestPrivate(
    const NimbleRequest::Action action, ListLaunchProfileMembersRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLaunchProfileMembersRequest
 * class' copy constructor.
 */
ListLaunchProfileMembersRequestPrivate::ListLaunchProfileMembersRequestPrivate(
    const ListLaunchProfileMembersRequestPrivate &other, ListLaunchProfileMembersRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
