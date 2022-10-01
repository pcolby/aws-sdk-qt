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

#include "createexperiencerequest.h"
#include "createexperiencerequest_p.h"
#include "createexperienceresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateExperienceRequest
 * \brief The CreateExperienceRequest class provides an interface for Kendra CreateExperience requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createExperience
 */

/*!
 * Constructs a copy of \a other.
 */
CreateExperienceRequest::CreateExperienceRequest(const CreateExperienceRequest &other)
    : KendraRequest(new CreateExperienceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateExperienceRequest object.
 */
CreateExperienceRequest::CreateExperienceRequest()
    : KendraRequest(new CreateExperienceRequestPrivate(KendraRequest::CreateExperienceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateExperienceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateExperienceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateExperienceRequest::response(QNetworkReply * const reply) const
{
    return new CreateExperienceResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::CreateExperienceRequestPrivate
 * \brief The CreateExperienceRequestPrivate class provides private implementation for CreateExperienceRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateExperienceRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
CreateExperienceRequestPrivate::CreateExperienceRequestPrivate(
    const KendraRequest::Action action, CreateExperienceRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateExperienceRequest
 * class' copy constructor.
 */
CreateExperienceRequestPrivate::CreateExperienceRequestPrivate(
    const CreateExperienceRequestPrivate &other, CreateExperienceRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
