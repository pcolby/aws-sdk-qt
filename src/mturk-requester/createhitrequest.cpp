/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createhitrequest.h"
#include "createhitrequest_p.h"
#include "createhitresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateHITRequest
 * \brief The CreateHITRequest class provides an interface for MTurk CreateHIT requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::createHIT
 */

/*!
 * Constructs a copy of \a other.
 */
CreateHITRequest::CreateHITRequest(const CreateHITRequest &other)
    : MTurkRequest(new CreateHITRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateHITRequest object.
 */
CreateHITRequest::CreateHITRequest()
    : MTurkRequest(new CreateHITRequestPrivate(MTurkRequest::CreateHITAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHITRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateHITResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHITRequest::response(QNetworkReply * const reply) const
{
    return new CreateHITResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::CreateHITRequestPrivate
 * \brief The CreateHITRequestPrivate class provides private implementation for CreateHITRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a CreateHITRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
CreateHITRequestPrivate::CreateHITRequestPrivate(
    const MTurkRequest::Action action, CreateHITRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateHITRequest
 * class' copy constructor.
 */
CreateHITRequestPrivate::CreateHITRequestPrivate(
    const CreateHITRequestPrivate &other, CreateHITRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
