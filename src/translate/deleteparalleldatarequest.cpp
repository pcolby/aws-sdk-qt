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

#include "deleteparalleldatarequest.h"
#include "deleteparalleldatarequest_p.h"
#include "deleteparalleldataresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::DeleteParallelDataRequest
 * \brief The DeleteParallelDataRequest class provides an interface for Translate DeleteParallelData requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::deleteParallelData
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteParallelDataRequest::DeleteParallelDataRequest(const DeleteParallelDataRequest &other)
    : TranslateRequest(new DeleteParallelDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteParallelDataRequest object.
 */
DeleteParallelDataRequest::DeleteParallelDataRequest()
    : TranslateRequest(new DeleteParallelDataRequestPrivate(TranslateRequest::DeleteParallelDataAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteParallelDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteParallelDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteParallelDataRequest::response(QNetworkReply * const reply) const
{
    return new DeleteParallelDataResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::DeleteParallelDataRequestPrivate
 * \brief The DeleteParallelDataRequestPrivate class provides private implementation for DeleteParallelDataRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a DeleteParallelDataRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
DeleteParallelDataRequestPrivate::DeleteParallelDataRequestPrivate(
    const TranslateRequest::Action action, DeleteParallelDataRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteParallelDataRequest
 * class' copy constructor.
 */
DeleteParallelDataRequestPrivate::DeleteParallelDataRequestPrivate(
    const DeleteParallelDataRequestPrivate &other, DeleteParallelDataRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws
