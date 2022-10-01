// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createquerysuggestionsblocklistrequest.h"
#include "createquerysuggestionsblocklistrequest_p.h"
#include "createquerysuggestionsblocklistresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateQuerySuggestionsBlockListRequest
 * \brief The CreateQuerySuggestionsBlockListRequest class provides an interface for Kendra CreateQuerySuggestionsBlockList requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createQuerySuggestionsBlockList
 */

/*!
 * Constructs a copy of \a other.
 */
CreateQuerySuggestionsBlockListRequest::CreateQuerySuggestionsBlockListRequest(const CreateQuerySuggestionsBlockListRequest &other)
    : KendraRequest(new CreateQuerySuggestionsBlockListRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateQuerySuggestionsBlockListRequest object.
 */
CreateQuerySuggestionsBlockListRequest::CreateQuerySuggestionsBlockListRequest()
    : KendraRequest(new CreateQuerySuggestionsBlockListRequestPrivate(KendraRequest::CreateQuerySuggestionsBlockListAction, this))
{

}

/*!
 * \reimp
 */
bool CreateQuerySuggestionsBlockListRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateQuerySuggestionsBlockListResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateQuerySuggestionsBlockListRequest::response(QNetworkReply * const reply) const
{
    return new CreateQuerySuggestionsBlockListResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::CreateQuerySuggestionsBlockListRequestPrivate
 * \brief The CreateQuerySuggestionsBlockListRequestPrivate class provides private implementation for CreateQuerySuggestionsBlockListRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateQuerySuggestionsBlockListRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
CreateQuerySuggestionsBlockListRequestPrivate::CreateQuerySuggestionsBlockListRequestPrivate(
    const KendraRequest::Action action, CreateQuerySuggestionsBlockListRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateQuerySuggestionsBlockListRequest
 * class' copy constructor.
 */
CreateQuerySuggestionsBlockListRequestPrivate::CreateQuerySuggestionsBlockListRequestPrivate(
    const CreateQuerySuggestionsBlockListRequestPrivate &other, CreateQuerySuggestionsBlockListRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
