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

#include "getparalleldatarequest.h"
#include "getparalleldatarequest_p.h"
#include "getparalleldataresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::GetParallelDataRequest
 * \brief The GetParallelDataRequest class provides an interface for Translate GetParallelData requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::getParallelData
 */

/*!
 * Constructs a copy of \a other.
 */
GetParallelDataRequest::GetParallelDataRequest(const GetParallelDataRequest &other)
    : TranslateRequest(new GetParallelDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetParallelDataRequest object.
 */
GetParallelDataRequest::GetParallelDataRequest()
    : TranslateRequest(new GetParallelDataRequestPrivate(TranslateRequest::GetParallelDataAction, this))
{

}

/*!
 * \reimp
 */
bool GetParallelDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetParallelDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetParallelDataRequest::response(QNetworkReply * const reply) const
{
    return new GetParallelDataResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::GetParallelDataRequestPrivate
 * \brief The GetParallelDataRequestPrivate class provides private implementation for GetParallelDataRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a GetParallelDataRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
GetParallelDataRequestPrivate::GetParallelDataRequestPrivate(
    const TranslateRequest::Action action, GetParallelDataRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetParallelDataRequest
 * class' copy constructor.
 */
GetParallelDataRequestPrivate::GetParallelDataRequestPrivate(
    const GetParallelDataRequestPrivate &other, GetParallelDataRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws
