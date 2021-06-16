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

#include "createsolutionrequest.h"
#include "createsolutionrequest_p.h"
#include "createsolutionresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateSolutionRequest
 * \brief The CreateSolutionRequest class provides an interface for Personalize CreateSolution requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createSolution
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSolutionRequest::CreateSolutionRequest(const CreateSolutionRequest &other)
    : PersonalizeRequest(new CreateSolutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSolutionRequest object.
 */
CreateSolutionRequest::CreateSolutionRequest()
    : PersonalizeRequest(new CreateSolutionRequestPrivate(PersonalizeRequest::CreateSolutionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSolutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSolutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSolutionRequest::response(QNetworkReply * const reply) const
{
    return new CreateSolutionResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::CreateSolutionRequestPrivate
 * \brief The CreateSolutionRequestPrivate class provides private implementation for CreateSolutionRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateSolutionRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
CreateSolutionRequestPrivate::CreateSolutionRequestPrivate(
    const PersonalizeRequest::Action action, CreateSolutionRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSolutionRequest
 * class' copy constructor.
 */
CreateSolutionRequestPrivate::CreateSolutionRequestPrivate(
    const CreateSolutionRequestPrivate &other, CreateSolutionRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
