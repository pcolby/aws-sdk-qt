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

#include "createadditionalassignmentsforhitrequest.h"
#include "createadditionalassignmentsforhitrequest_p.h"
#include "createadditionalassignmentsforhitresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::CreateAdditionalAssignmentsForHITRequest
 * \brief The CreateAdditionalAssignmentsForHITRequest class provides an interface for MTurk CreateAdditionalAssignmentsForHIT requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::createAdditionalAssignmentsForHIT
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAdditionalAssignmentsForHITRequest::CreateAdditionalAssignmentsForHITRequest(const CreateAdditionalAssignmentsForHITRequest &other)
    : MTurkRequest(new CreateAdditionalAssignmentsForHITRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAdditionalAssignmentsForHITRequest object.
 */
CreateAdditionalAssignmentsForHITRequest::CreateAdditionalAssignmentsForHITRequest()
    : MTurkRequest(new CreateAdditionalAssignmentsForHITRequestPrivate(MTurkRequest::CreateAdditionalAssignmentsForHITAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAdditionalAssignmentsForHITRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAdditionalAssignmentsForHITResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAdditionalAssignmentsForHITRequest::response(QNetworkReply * const reply) const
{
    return new CreateAdditionalAssignmentsForHITResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::CreateAdditionalAssignmentsForHITRequestPrivate
 * \brief The CreateAdditionalAssignmentsForHITRequestPrivate class provides private implementation for CreateAdditionalAssignmentsForHITRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 *
 * Constructs a CreateAdditionalAssignmentsForHITRequestPrivate object for MTurk \a action with,
 * public implementation \a q.
 */
CreateAdditionalAssignmentsForHITRequestPrivate::CreateAdditionalAssignmentsForHITRequestPrivate(
    const MTurkRequest::Action action, CreateAdditionalAssignmentsForHITRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAdditionalAssignmentsForHITRequest
 * class' copy constructor.
 */
CreateAdditionalAssignmentsForHITRequestPrivate::CreateAdditionalAssignmentsForHITRequestPrivate(
    const CreateAdditionalAssignmentsForHITRequestPrivate &other, CreateAdditionalAssignmentsForHITRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
