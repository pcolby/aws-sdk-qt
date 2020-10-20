/*
    Copyright 2013-2020 Paul Colby

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

#include "createeventtrackerrequest.h"
#include "createeventtrackerrequest_p.h"
#include "createeventtrackerresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateEventTrackerRequest
 * \brief The CreateEventTrackerRequest class provides an interface for Personalize CreateEventTracker requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createEventTracker
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEventTrackerRequest::CreateEventTrackerRequest(const CreateEventTrackerRequest &other)
    : PersonalizeRequest(new CreateEventTrackerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEventTrackerRequest object.
 */
CreateEventTrackerRequest::CreateEventTrackerRequest()
    : PersonalizeRequest(new CreateEventTrackerRequestPrivate(PersonalizeRequest::CreateEventTrackerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEventTrackerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEventTrackerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEventTrackerRequest::response(QNetworkReply * const reply) const
{
    return new CreateEventTrackerResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::CreateEventTrackerRequestPrivate
 * \brief The CreateEventTrackerRequestPrivate class provides private implementation for CreateEventTrackerRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateEventTrackerRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
CreateEventTrackerRequestPrivate::CreateEventTrackerRequestPrivate(
    const PersonalizeRequest::Action action, CreateEventTrackerRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEventTrackerRequest
 * class' copy constructor.
 */
CreateEventTrackerRequestPrivate::CreateEventTrackerRequestPrivate(
    const CreateEventTrackerRequestPrivate &other, CreateEventTrackerRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
