// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchresourcesrequest.h"
#include "searchresourcesrequest_p.h"
#include "searchresourcesresponse.h"
#include "macie2request_p.h"

namespace QtAws {
namespace Macie2 {

/*!
 * \class QtAws::Macie2::SearchResourcesRequest
 * \brief The SearchResourcesRequest class provides an interface for Macie2 SearchResources requests.
 *
 * \inmodule QtAwsMacie2
 *
 *  Amazon Macie is a fully managed data security and data privacy service that uses machine learning and pattern matching
 *  to discover and protect your sensitive data in AWS. Macie automates the discovery of sensitive data, such as PII and
 *  intellectual property, to provide you with insight into the data that your organization stores in AWS. Macie also
 *  provides an inventory of your Amazon S3 buckets, which it continually monitors for you. If Macie detects sensitive data
 *  or potential data access issues, it generates detailed findings for you to review and act upon as
 *
 * \sa Macie2Client::searchResources
 */

/*!
 * Constructs a copy of \a other.
 */
SearchResourcesRequest::SearchResourcesRequest(const SearchResourcesRequest &other)
    : Macie2Request(new SearchResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchResourcesRequest object.
 */
SearchResourcesRequest::SearchResourcesRequest()
    : Macie2Request(new SearchResourcesRequestPrivate(Macie2Request::SearchResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool SearchResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchResourcesRequest::response(QNetworkReply * const reply) const
{
    return new SearchResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::Macie2::SearchResourcesRequestPrivate
 * \brief The SearchResourcesRequestPrivate class provides private implementation for SearchResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsMacie2
 */

/*!
 * Constructs a SearchResourcesRequestPrivate object for Macie2 \a action,
 * with public implementation \a q.
 */
SearchResourcesRequestPrivate::SearchResourcesRequestPrivate(
    const Macie2Request::Action action, SearchResourcesRequest * const q)
    : Macie2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchResourcesRequest
 * class' copy constructor.
 */
SearchResourcesRequestPrivate::SearchResourcesRequestPrivate(
    const SearchResourcesRequestPrivate &other, SearchResourcesRequest * const q)
    : Macie2RequestPrivate(other, q)
{

}

} // namespace Macie2
} // namespace QtAws
