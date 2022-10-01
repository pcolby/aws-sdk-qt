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

#include "disassociateentitiesfromexperiencerequest.h"
#include "disassociateentitiesfromexperiencerequest_p.h"
#include "disassociateentitiesfromexperienceresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DisassociateEntitiesFromExperienceRequest
 * \brief The DisassociateEntitiesFromExperienceRequest class provides an interface for Kendra DisassociateEntitiesFromExperience requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::disassociateEntitiesFromExperience
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateEntitiesFromExperienceRequest::DisassociateEntitiesFromExperienceRequest(const DisassociateEntitiesFromExperienceRequest &other)
    : KendraRequest(new DisassociateEntitiesFromExperienceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateEntitiesFromExperienceRequest object.
 */
DisassociateEntitiesFromExperienceRequest::DisassociateEntitiesFromExperienceRequest()
    : KendraRequest(new DisassociateEntitiesFromExperienceRequestPrivate(KendraRequest::DisassociateEntitiesFromExperienceAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateEntitiesFromExperienceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateEntitiesFromExperienceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateEntitiesFromExperienceRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateEntitiesFromExperienceResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DisassociateEntitiesFromExperienceRequestPrivate
 * \brief The DisassociateEntitiesFromExperienceRequestPrivate class provides private implementation for DisassociateEntitiesFromExperienceRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DisassociateEntitiesFromExperienceRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DisassociateEntitiesFromExperienceRequestPrivate::DisassociateEntitiesFromExperienceRequestPrivate(
    const KendraRequest::Action action, DisassociateEntitiesFromExperienceRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateEntitiesFromExperienceRequest
 * class' copy constructor.
 */
DisassociateEntitiesFromExperienceRequestPrivate::DisassociateEntitiesFromExperienceRequestPrivate(
    const DisassociateEntitiesFromExperienceRequestPrivate &other, DisassociateEntitiesFromExperienceRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
