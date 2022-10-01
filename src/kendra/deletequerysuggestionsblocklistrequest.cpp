// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletequerysuggestionsblocklistrequest.h"
#include "deletequerysuggestionsblocklistrequest_p.h"
#include "deletequerysuggestionsblocklistresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteQuerySuggestionsBlockListRequest
 * \brief The DeleteQuerySuggestionsBlockListRequest class provides an interface for Kendra DeleteQuerySuggestionsBlockList requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteQuerySuggestionsBlockList
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteQuerySuggestionsBlockListRequest::DeleteQuerySuggestionsBlockListRequest(const DeleteQuerySuggestionsBlockListRequest &other)
    : KendraRequest(new DeleteQuerySuggestionsBlockListRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteQuerySuggestionsBlockListRequest object.
 */
DeleteQuerySuggestionsBlockListRequest::DeleteQuerySuggestionsBlockListRequest()
    : KendraRequest(new DeleteQuerySuggestionsBlockListRequestPrivate(KendraRequest::DeleteQuerySuggestionsBlockListAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteQuerySuggestionsBlockListRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteQuerySuggestionsBlockListResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteQuerySuggestionsBlockListRequest::response(QNetworkReply * const reply) const
{
    return new DeleteQuerySuggestionsBlockListResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DeleteQuerySuggestionsBlockListRequestPrivate
 * \brief The DeleteQuerySuggestionsBlockListRequestPrivate class provides private implementation for DeleteQuerySuggestionsBlockListRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteQuerySuggestionsBlockListRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DeleteQuerySuggestionsBlockListRequestPrivate::DeleteQuerySuggestionsBlockListRequestPrivate(
    const KendraRequest::Action action, DeleteQuerySuggestionsBlockListRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteQuerySuggestionsBlockListRequest
 * class' copy constructor.
 */
DeleteQuerySuggestionsBlockListRequestPrivate::DeleteQuerySuggestionsBlockListRequestPrivate(
    const DeleteQuerySuggestionsBlockListRequestPrivate &other, DeleteQuerySuggestionsBlockListRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
