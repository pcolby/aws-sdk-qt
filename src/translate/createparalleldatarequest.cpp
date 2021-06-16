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

#include "createparalleldatarequest.h"
#include "createparalleldatarequest_p.h"
#include "createparalleldataresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::CreateParallelDataRequest
 * \brief The CreateParallelDataRequest class provides an interface for Translate CreateParallelData requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::createParallelData
 */

/*!
 * Constructs a copy of \a other.
 */
CreateParallelDataRequest::CreateParallelDataRequest(const CreateParallelDataRequest &other)
    : TranslateRequest(new CreateParallelDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateParallelDataRequest object.
 */
CreateParallelDataRequest::CreateParallelDataRequest()
    : TranslateRequest(new CreateParallelDataRequestPrivate(TranslateRequest::CreateParallelDataAction, this))
{

}

/*!
 * \reimp
 */
bool CreateParallelDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateParallelDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateParallelDataRequest::response(QNetworkReply * const reply) const
{
    return new CreateParallelDataResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::CreateParallelDataRequestPrivate
 * \brief The CreateParallelDataRequestPrivate class provides private implementation for CreateParallelDataRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a CreateParallelDataRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
CreateParallelDataRequestPrivate::CreateParallelDataRequestPrivate(
    const TranslateRequest::Action action, CreateParallelDataRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateParallelDataRequest
 * class' copy constructor.
 */
CreateParallelDataRequestPrivate::CreateParallelDataRequestPrivate(
    const CreateParallelDataRequestPrivate &other, CreateParallelDataRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws
