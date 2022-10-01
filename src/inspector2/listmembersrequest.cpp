// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmembersrequest.h"
#include "listmembersrequest_p.h"
#include "listmembersresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::ListMembersRequest
 * \brief The ListMembersRequest class provides an interface for Inspector2 ListMembers requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::listMembers
 */

/*!
 * Constructs a copy of \a other.
 */
ListMembersRequest::ListMembersRequest(const ListMembersRequest &other)
    : Inspector2Request(new ListMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMembersRequest object.
 */
ListMembersRequest::ListMembersRequest()
    : Inspector2Request(new ListMembersRequestPrivate(Inspector2Request::ListMembersAction, this))
{

}

/*!
 * \reimp
 */
bool ListMembersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListMembersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListMembersRequest::response(QNetworkReply * const reply) const
{
    return new ListMembersResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::ListMembersRequestPrivate
 * \brief The ListMembersRequestPrivate class provides private implementation for ListMembersRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a ListMembersRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
ListMembersRequestPrivate::ListMembersRequestPrivate(
    const Inspector2Request::Action action, ListMembersRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListMembersRequest
 * class' copy constructor.
 */
ListMembersRequestPrivate::ListMembersRequestPrivate(
    const ListMembersRequestPrivate &other, ListMembersRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
