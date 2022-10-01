// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describequerysuggestionsblocklistrequest.h"
#include "describequerysuggestionsblocklistrequest_p.h"
#include "describequerysuggestionsblocklistresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeQuerySuggestionsBlockListRequest
 * \brief The DescribeQuerySuggestionsBlockListRequest class provides an interface for Kendra DescribeQuerySuggestionsBlockList requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeQuerySuggestionsBlockList
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeQuerySuggestionsBlockListRequest::DescribeQuerySuggestionsBlockListRequest(const DescribeQuerySuggestionsBlockListRequest &other)
    : KendraRequest(new DescribeQuerySuggestionsBlockListRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeQuerySuggestionsBlockListRequest object.
 */
DescribeQuerySuggestionsBlockListRequest::DescribeQuerySuggestionsBlockListRequest()
    : KendraRequest(new DescribeQuerySuggestionsBlockListRequestPrivate(KendraRequest::DescribeQuerySuggestionsBlockListAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeQuerySuggestionsBlockListRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeQuerySuggestionsBlockListResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeQuerySuggestionsBlockListRequest::response(QNetworkReply * const reply) const
{
    return new DescribeQuerySuggestionsBlockListResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DescribeQuerySuggestionsBlockListRequestPrivate
 * \brief The DescribeQuerySuggestionsBlockListRequestPrivate class provides private implementation for DescribeQuerySuggestionsBlockListRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeQuerySuggestionsBlockListRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DescribeQuerySuggestionsBlockListRequestPrivate::DescribeQuerySuggestionsBlockListRequestPrivate(
    const KendraRequest::Action action, DescribeQuerySuggestionsBlockListRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeQuerySuggestionsBlockListRequest
 * class' copy constructor.
 */
DescribeQuerySuggestionsBlockListRequestPrivate::DescribeQuerySuggestionsBlockListRequestPrivate(
    const DescribeQuerySuggestionsBlockListRequestPrivate &other, DescribeQuerySuggestionsBlockListRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
