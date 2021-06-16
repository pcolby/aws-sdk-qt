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

#include "listparalleldatarequest.h"
#include "listparalleldatarequest_p.h"
#include "listparalleldataresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::ListParallelDataRequest
 * \brief The ListParallelDataRequest class provides an interface for Translate ListParallelData requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::listParallelData
 */

/*!
 * Constructs a copy of \a other.
 */
ListParallelDataRequest::ListParallelDataRequest(const ListParallelDataRequest &other)
    : TranslateRequest(new ListParallelDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListParallelDataRequest object.
 */
ListParallelDataRequest::ListParallelDataRequest()
    : TranslateRequest(new ListParallelDataRequestPrivate(TranslateRequest::ListParallelDataAction, this))
{

}

/*!
 * \reimp
 */
bool ListParallelDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListParallelDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListParallelDataRequest::response(QNetworkReply * const reply) const
{
    return new ListParallelDataResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::ListParallelDataRequestPrivate
 * \brief The ListParallelDataRequestPrivate class provides private implementation for ListParallelDataRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a ListParallelDataRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
ListParallelDataRequestPrivate::ListParallelDataRequestPrivate(
    const TranslateRequest::Action action, ListParallelDataRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListParallelDataRequest
 * class' copy constructor.
 */
ListParallelDataRequestPrivate::ListParallelDataRequestPrivate(
    const ListParallelDataRequestPrivate &other, ListParallelDataRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws
