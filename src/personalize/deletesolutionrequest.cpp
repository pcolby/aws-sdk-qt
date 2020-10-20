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

#include "deletesolutionrequest.h"
#include "deletesolutionrequest_p.h"
#include "deletesolutionresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::DeleteSolutionRequest
 * \brief The DeleteSolutionRequest class provides an interface for Personalize DeleteSolution requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::deleteSolution
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSolutionRequest::DeleteSolutionRequest(const DeleteSolutionRequest &other)
    : PersonalizeRequest(new DeleteSolutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSolutionRequest object.
 */
DeleteSolutionRequest::DeleteSolutionRequest()
    : PersonalizeRequest(new DeleteSolutionRequestPrivate(PersonalizeRequest::DeleteSolutionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSolutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSolutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSolutionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSolutionResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::DeleteSolutionRequestPrivate
 * \brief The DeleteSolutionRequestPrivate class provides private implementation for DeleteSolutionRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a DeleteSolutionRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
DeleteSolutionRequestPrivate::DeleteSolutionRequestPrivate(
    const PersonalizeRequest::Action action, DeleteSolutionRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSolutionRequest
 * class' copy constructor.
 */
DeleteSolutionRequestPrivate::DeleteSolutionRequestPrivate(
    const DeleteSolutionRequestPrivate &other, DeleteSolutionRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
