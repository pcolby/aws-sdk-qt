// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listmembersrequest.h"
#include "listmembersrequest_p.h"
#include "listmembersresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::ListMembersRequest
 * \brief The ListMembersRequest class provides an interface for Macie2 ListMembers requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::listMembers
 */

/*!
 * Constructs a copy of \a other.
 */
ListMembersRequest::ListMembersRequest(const ListMembersRequest &other)
    : Macie2Request(new ListMembersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListMembersRequest object.
 */
ListMembersRequest::ListMembersRequest()
    : Macie2Request(new ListMembersRequestPrivate(Macie2Request::ListMembersAction, this))
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
 * \class QtAws::Macie2::ListMembersRequestPrivate
 * \brief The ListMembersRequestPrivate class provides private implementation for ListMembersRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a ListMembersRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
ListMembersRequestPrivate::ListMembersRequestPrivate(
    const Macie2Request::Action action, ListMembersRequest * const q)
    : Macie2RequestPrivate(action, q)
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
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
