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

#include "deleteexperiencerequest.h"
#include "deleteexperiencerequest_p.h"
#include "deleteexperienceresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteExperienceRequest
 * \brief The DeleteExperienceRequest class provides an interface for Kendra DeleteExperience requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteExperience
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteExperienceRequest::DeleteExperienceRequest(const DeleteExperienceRequest &other)
    : KendraRequest(new DeleteExperienceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteExperienceRequest object.
 */
DeleteExperienceRequest::DeleteExperienceRequest()
    : KendraRequest(new DeleteExperienceRequestPrivate(KendraRequest::DeleteExperienceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteExperienceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteExperienceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteExperienceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteExperienceResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DeleteExperienceRequestPrivate
 * \brief The DeleteExperienceRequestPrivate class provides private implementation for DeleteExperienceRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteExperienceRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DeleteExperienceRequestPrivate::DeleteExperienceRequestPrivate(
    const KendraRequest::Action action, DeleteExperienceRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteExperienceRequest
 * class' copy constructor.
 */
DeleteExperienceRequestPrivate::DeleteExperienceRequestPrivate(
    const DeleteExperienceRequestPrivate &other, DeleteExperienceRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
