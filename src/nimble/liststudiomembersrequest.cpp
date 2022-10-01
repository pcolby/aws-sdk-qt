// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststudiomembersrequest.h"
#include "liststudiomembersrequest_p.h"
#include "liststudiomembersresponse.h"
#include "nimblerequest_p.h"

namespace QtAws {
namespace Nimble {

/*!
 * \class QtAws::Nimble::ListStudioMembersRequest
 * \brief The ListStudioMembersRequest class provides an interface for Nimble ListStudioMembers requests.
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
 * \sa NimbleClient::listStudioMembers
 */

/*!
 * Constructs a copy of \a other.
 */
ListStudioMembersRequest::ListStudioMembersRequest(const ListStudioMembersRequest &other)
    : NimbleRequest(new ListStudioMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStudioMembersRequest object.
 */
ListStudioMembersRequest::ListStudioMembersRequest()
    : NimbleRequest(new ListStudioMembersRequestPrivate(NimbleRequest::ListStudioMembersAction, this))
{

}

/*!
 * \reimp
 */
bool ListStudioMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStudioMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStudioMembersRequest::response(QNetworkReply * const reply) const
{
    return new ListStudioMembersResponse(*this, reply);
}

/*!
 * \class QtAws::Nimble::ListStudioMembersRequestPrivate
 * \brief The ListStudioMembersRequestPrivate class provides private implementation for ListStudioMembersRequest.
 * \internal
 *
 * \inmodule QtAwsNimble
 */

/*!
 * Constructs a ListStudioMembersRequestPrivate object for Nimble \a action,
 * with public implementation \a q.
 */
ListStudioMembersRequestPrivate::ListStudioMembersRequestPrivate(
    const NimbleRequest::Action action, ListStudioMembersRequest * const q)
    : NimbleRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStudioMembersRequest
 * class' copy constructor.
 */
ListStudioMembersRequestPrivate::ListStudioMembersRequestPrivate(
    const ListStudioMembersRequestPrivate &other, ListStudioMembersRequest * const q)
    : NimbleRequestPrivate(other, q)
{

}

} // namespace Nimble
} // namespace QtAws
