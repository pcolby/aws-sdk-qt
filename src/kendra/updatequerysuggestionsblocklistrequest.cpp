// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatequerysuggestionsblocklistrequest.h"
#include "updatequerysuggestionsblocklistrequest_p.h"
#include "updatequerysuggestionsblocklistresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateQuerySuggestionsBlockListRequest
 * \brief The UpdateQuerySuggestionsBlockListRequest class provides an interface for Kendra UpdateQuerySuggestionsBlockList requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateQuerySuggestionsBlockList
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateQuerySuggestionsBlockListRequest::UpdateQuerySuggestionsBlockListRequest(const UpdateQuerySuggestionsBlockListRequest &other)
    : KendraRequest(new UpdateQuerySuggestionsBlockListRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateQuerySuggestionsBlockListRequest object.
 */
UpdateQuerySuggestionsBlockListRequest::UpdateQuerySuggestionsBlockListRequest()
    : KendraRequest(new UpdateQuerySuggestionsBlockListRequestPrivate(KendraRequest::UpdateQuerySuggestionsBlockListAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateQuerySuggestionsBlockListRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateQuerySuggestionsBlockListResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateQuerySuggestionsBlockListRequest::response(QNetworkReply * const reply) const
{
    return new UpdateQuerySuggestionsBlockListResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::UpdateQuerySuggestionsBlockListRequestPrivate
 * \brief The UpdateQuerySuggestionsBlockListRequestPrivate class provides private implementation for UpdateQuerySuggestionsBlockListRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateQuerySuggestionsBlockListRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
UpdateQuerySuggestionsBlockListRequestPrivate::UpdateQuerySuggestionsBlockListRequestPrivate(
    const KendraRequest::Action action, UpdateQuerySuggestionsBlockListRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateQuerySuggestionsBlockListRequest
 * class' copy constructor.
 */
UpdateQuerySuggestionsBlockListRequestPrivate::UpdateQuerySuggestionsBlockListRequestPrivate(
    const UpdateQuerySuggestionsBlockListRequestPrivate &other, UpdateQuerySuggestionsBlockListRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
