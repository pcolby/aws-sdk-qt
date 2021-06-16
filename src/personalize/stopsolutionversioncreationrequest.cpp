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

#include "stopsolutionversioncreationrequest.h"
#include "stopsolutionversioncreationrequest_p.h"
#include "stopsolutionversioncreationresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::StopSolutionVersionCreationRequest
 * \brief The StopSolutionVersionCreationRequest class provides an interface for Personalize StopSolutionVersionCreation requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::stopSolutionVersionCreation
 */

/*!
 * Constructs a copy of \a other.
 */
StopSolutionVersionCreationRequest::StopSolutionVersionCreationRequest(const StopSolutionVersionCreationRequest &other)
    : PersonalizeRequest(new StopSolutionVersionCreationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopSolutionVersionCreationRequest object.
 */
StopSolutionVersionCreationRequest::StopSolutionVersionCreationRequest()
    : PersonalizeRequest(new StopSolutionVersionCreationRequestPrivate(PersonalizeRequest::StopSolutionVersionCreationAction, this))
{

}

/*!
 * \reimp
 */
bool StopSolutionVersionCreationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopSolutionVersionCreationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopSolutionVersionCreationRequest::response(QNetworkReply * const reply) const
{
    return new StopSolutionVersionCreationResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::StopSolutionVersionCreationRequestPrivate
 * \brief The StopSolutionVersionCreationRequestPrivate class provides private implementation for StopSolutionVersionCreationRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a StopSolutionVersionCreationRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
StopSolutionVersionCreationRequestPrivate::StopSolutionVersionCreationRequestPrivate(
    const PersonalizeRequest::Action action, StopSolutionVersionCreationRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopSolutionVersionCreationRequest
 * class' copy constructor.
 */
StopSolutionVersionCreationRequestPrivate::StopSolutionVersionCreationRequestPrivate(
    const StopSolutionVersionCreationRequestPrivate &other, StopSolutionVersionCreationRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
