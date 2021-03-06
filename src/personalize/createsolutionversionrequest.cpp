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

#include "createsolutionversionrequest.h"
#include "createsolutionversionrequest_p.h"
#include "createsolutionversionresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::CreateSolutionVersionRequest
 * \brief The CreateSolutionVersionRequest class provides an interface for Personalize CreateSolutionVersion requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::createSolutionVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSolutionVersionRequest::CreateSolutionVersionRequest(const CreateSolutionVersionRequest &other)
    : PersonalizeRequest(new CreateSolutionVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSolutionVersionRequest object.
 */
CreateSolutionVersionRequest::CreateSolutionVersionRequest()
    : PersonalizeRequest(new CreateSolutionVersionRequestPrivate(PersonalizeRequest::CreateSolutionVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSolutionVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSolutionVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSolutionVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateSolutionVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::CreateSolutionVersionRequestPrivate
 * \brief The CreateSolutionVersionRequestPrivate class provides private implementation for CreateSolutionVersionRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a CreateSolutionVersionRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
CreateSolutionVersionRequestPrivate::CreateSolutionVersionRequestPrivate(
    const PersonalizeRequest::Action action, CreateSolutionVersionRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSolutionVersionRequest
 * class' copy constructor.
 */
CreateSolutionVersionRequestPrivate::CreateSolutionVersionRequestPrivate(
    const CreateSolutionVersionRequestPrivate &other, CreateSolutionVersionRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
