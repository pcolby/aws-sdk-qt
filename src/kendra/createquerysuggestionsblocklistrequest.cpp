/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createquerysuggestionsblocklistrequest.h"
#include "createquerysuggestionsblocklistrequest_p.h"
#include "createquerysuggestionsblocklistresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::CreateQuerySuggestionsBlockListRequest
 * \brief The CreateQuerySuggestionsBlockListRequest class provides an interface for kendra CreateQuerySuggestionsBlockList requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::createQuerySuggestionsBlockList
 */

/*!
 * Constructs a copy of \a other.
 */
CreateQuerySuggestionsBlockListRequest::CreateQuerySuggestionsBlockListRequest(const CreateQuerySuggestionsBlockListRequest &other)
    : kendraRequest(new CreateQuerySuggestionsBlockListRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateQuerySuggestionsBlockListRequest object.
 */
CreateQuerySuggestionsBlockListRequest::CreateQuerySuggestionsBlockListRequest()
    : kendraRequest(new CreateQuerySuggestionsBlockListRequestPrivate(kendraRequest::CreateQuerySuggestionsBlockListAction, this))
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
 * \class QtAws::kendra::CreateQuerySuggestionsBlockListRequestPrivate
 * \brief The CreateQuerySuggestionsBlockListRequestPrivate class provides private implementation for CreateQuerySuggestionsBlockListRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a CreateQuerySuggestionsBlockListRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
CreateQuerySuggestionsBlockListRequestPrivate::CreateQuerySuggestionsBlockListRequestPrivate(
    const kendraRequest::Action action, CreateQuerySuggestionsBlockListRequest * const q)
    : kendraRequestPrivate(action, q)
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
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
