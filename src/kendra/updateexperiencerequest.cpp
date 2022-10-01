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

#include "updateexperiencerequest.h"
#include "updateexperiencerequest_p.h"
#include "updateexperienceresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateExperienceRequest
 * \brief The UpdateExperienceRequest class provides an interface for Kendra UpdateExperience requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateExperience
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateExperienceRequest::UpdateExperienceRequest(const UpdateExperienceRequest &other)
    : KendraRequest(new UpdateExperienceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateExperienceRequest object.
 */
UpdateExperienceRequest::UpdateExperienceRequest()
    : KendraRequest(new UpdateExperienceRequestPrivate(KendraRequest::UpdateExperienceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateExperienceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateExperienceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateExperienceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateExperienceResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::UpdateExperienceRequestPrivate
 * \brief The UpdateExperienceRequestPrivate class provides private implementation for UpdateExperienceRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateExperienceRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
UpdateExperienceRequestPrivate::UpdateExperienceRequestPrivate(
    const KendraRequest::Action action, UpdateExperienceRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateExperienceRequest
 * class' copy constructor.
 */
UpdateExperienceRequestPrivate::UpdateExperienceRequestPrivate(
    const UpdateExperienceRequestPrivate &other, UpdateExperienceRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
