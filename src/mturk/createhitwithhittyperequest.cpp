/*
    Copyright 2013-2019 Paul Colby

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

#include "createhitwithhittyperequest.h"
#include "createhitwithhittyperequest_p.h"
#include "createhitwithhittyperesponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateHITWithHITTypeRequest
 * \brief The CreateHITWithHITTypeRequest class provides an interface for MTurk CreateHITWithHITType requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::createHITWithHITType
 */

/*!
 * Constructs a copy of \a other.
 */
CreateHITWithHITTypeRequest::CreateHITWithHITTypeRequest(const CreateHITWithHITTypeRequest &other)
    : MTurkRequest(new CreateHITWithHITTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateHITWithHITTypeRequest object.
 */
CreateHITWithHITTypeRequest::CreateHITWithHITTypeRequest()
    : MTurkRequest(new CreateHITWithHITTypeRequestPrivate(MTurkRequest::CreateHITWithHITTypeAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHITWithHITTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateHITWithHITTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHITWithHITTypeRequest::response(QNetworkReply * const reply) const
{
    return new CreateHITWithHITTypeResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::CreateHITWithHITTypeRequestPrivate
 * \brief The CreateHITWithHITTypeRequestPrivate class provides private implementation for CreateHITWithHITTypeRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a CreateHITWithHITTypeRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
CreateHITWithHITTypeRequestPrivate::CreateHITWithHITTypeRequestPrivate(
    const MTurkRequest::Action action, CreateHITWithHITTypeRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateHITWithHITTypeRequest
 * class' copy constructor.
 */
CreateHITWithHITTypeRequestPrivate::CreateHITWithHITTypeRequestPrivate(
    const CreateHITWithHITTypeRequestPrivate &other, CreateHITWithHITTypeRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
