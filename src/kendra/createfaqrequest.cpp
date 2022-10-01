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

#include "createfaqrequest.h"
#include "createfaqrequest_p.h"
#include "createfaqresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateFaqRequest
 * \brief The CreateFaqRequest class provides an interface for Kendra CreateFaq requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createFaq
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFaqRequest::CreateFaqRequest(const CreateFaqRequest &other)
    : KendraRequest(new CreateFaqRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFaqRequest object.
 */
CreateFaqRequest::CreateFaqRequest()
    : KendraRequest(new CreateFaqRequestPrivate(KendraRequest::CreateFaqAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFaqRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFaqResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFaqRequest::response(QNetworkReply * const reply) const
{
    return new CreateFaqResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::CreateFaqRequestPrivate
 * \brief The CreateFaqRequestPrivate class provides private implementation for CreateFaqRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateFaqRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
CreateFaqRequestPrivate::CreateFaqRequestPrivate(
    const KendraRequest::Action action, CreateFaqRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFaqRequest
 * class' copy constructor.
 */
CreateFaqRequestPrivate::CreateFaqRequestPrivate(
    const CreateFaqRequestPrivate &other, CreateFaqRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
