// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfindingsfiltersrequest.h"
#include "listfindingsfiltersrequest_p.h"
#include "listfindingsfiltersresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::ListFindingsFiltersRequest
 * \brief The ListFindingsFiltersRequest class provides an interface for Macie2 ListFindingsFilters requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::listFindingsFilters
 */

/*!
 * Constructs a copy of \a other.
 */
ListFindingsFiltersRequest::ListFindingsFiltersRequest(const ListFindingsFiltersRequest &other)
    : Macie2Request(new ListFindingsFiltersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFindingsFiltersRequest object.
 */
ListFindingsFiltersRequest::ListFindingsFiltersRequest()
    : Macie2Request(new ListFindingsFiltersRequestPrivate(Macie2Request::ListFindingsFiltersAction, this))
{

}

/*!
 * \reimp
 */
bool ListFindingsFiltersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFindingsFiltersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFindingsFiltersRequest::response(QNetworkReply * const reply) const
{
    return new ListFindingsFiltersResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::ListFindingsFiltersRequestPrivate
 * \brief The ListFindingsFiltersRequestPrivate class provides private implementation for ListFindingsFiltersRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a ListFindingsFiltersRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
ListFindingsFiltersRequestPrivate::ListFindingsFiltersRequestPrivate(
    const Macie2Request::Action action, ListFindingsFiltersRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFindingsFiltersRequest
 * class' copy constructor.
 */
ListFindingsFiltersRequestPrivate::ListFindingsFiltersRequestPrivate(
    const ListFindingsFiltersRequestPrivate &other, ListFindingsFiltersRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
