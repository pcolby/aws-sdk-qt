// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgroupsolderthanorderingidrequest.h"
#include "listgroupsolderthanorderingidrequest_p.h"
#include "listgroupsolderthanorderingidresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListGroupsOlderThanOrderingIdRequest
 * \brief The ListGroupsOlderThanOrderingIdRequest class provides an interface for Kendra ListGroupsOlderThanOrderingId requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listGroupsOlderThanOrderingId
 */

/*!
 * Constructs a copy of \a other.
 */
ListGroupsOlderThanOrderingIdRequest::ListGroupsOlderThanOrderingIdRequest(const ListGroupsOlderThanOrderingIdRequest &other)
    : KendraRequest(new ListGroupsOlderThanOrderingIdRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGroupsOlderThanOrderingIdRequest object.
 */
ListGroupsOlderThanOrderingIdRequest::ListGroupsOlderThanOrderingIdRequest()
    : KendraRequest(new ListGroupsOlderThanOrderingIdRequestPrivate(KendraRequest::ListGroupsOlderThanOrderingIdAction, this))
{

}

/*!
 * \reimp
 */
bool ListGroupsOlderThanOrderingIdRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGroupsOlderThanOrderingIdResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroupsOlderThanOrderingIdRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupsOlderThanOrderingIdResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::ListGroupsOlderThanOrderingIdRequestPrivate
 * \brief The ListGroupsOlderThanOrderingIdRequestPrivate class provides private implementation for ListGroupsOlderThanOrderingIdRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListGroupsOlderThanOrderingIdRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
ListGroupsOlderThanOrderingIdRequestPrivate::ListGroupsOlderThanOrderingIdRequestPrivate(
    const KendraRequest::Action action, ListGroupsOlderThanOrderingIdRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGroupsOlderThanOrderingIdRequest
 * class' copy constructor.
 */
ListGroupsOlderThanOrderingIdRequestPrivate::ListGroupsOlderThanOrderingIdRequestPrivate(
    const ListGroupsOlderThanOrderingIdRequestPrivate &other, ListGroupsOlderThanOrderingIdRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
