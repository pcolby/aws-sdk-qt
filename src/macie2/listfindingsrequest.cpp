// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfindingsrequest.h"
#include "listfindingsrequest_p.h"
#include "listfindingsresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::ListFindingsRequest
 * \brief The ListFindingsRequest class provides an interface for Macie2 ListFindings requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::listFindings
 */

/*!
 * Constructs a copy of \a other.
 */
ListFindingsRequest::ListFindingsRequest(const ListFindingsRequest &other)
    : Macie2Request(new ListFindingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFindingsRequest object.
 */
ListFindingsRequest::ListFindingsRequest()
    : Macie2Request(new ListFindingsRequestPrivate(Macie2Request::ListFindingsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFindingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFindingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFindingsRequest::response(QNetworkReply * const reply) const
{
    return new ListFindingsResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::ListFindingsRequestPrivate
 * \brief The ListFindingsRequestPrivate class provides private implementation for ListFindingsRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a ListFindingsRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
ListFindingsRequestPrivate::ListFindingsRequestPrivate(
    const Macie2Request::Action action, ListFindingsRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFindingsRequest
 * class' copy constructor.
 */
ListFindingsRequestPrivate::ListFindingsRequestPrivate(
    const ListFindingsRequestPrivate &other, ListFindingsRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
