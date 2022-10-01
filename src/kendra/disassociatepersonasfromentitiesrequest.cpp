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

#include "disassociatepersonasfromentitiesrequest.h"
#include "disassociatepersonasfromentitiesrequest_p.h"
#include "disassociatepersonasfromentitiesresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DisassociatePersonasFromEntitiesRequest
 * \brief The DisassociatePersonasFromEntitiesRequest class provides an interface for Kendra DisassociatePersonasFromEntities requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::disassociatePersonasFromEntities
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociatePersonasFromEntitiesRequest::DisassociatePersonasFromEntitiesRequest(const DisassociatePersonasFromEntitiesRequest &other)
    : KendraRequest(new DisassociatePersonasFromEntitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociatePersonasFromEntitiesRequest object.
 */
DisassociatePersonasFromEntitiesRequest::DisassociatePersonasFromEntitiesRequest()
    : KendraRequest(new DisassociatePersonasFromEntitiesRequestPrivate(KendraRequest::DisassociatePersonasFromEntitiesAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociatePersonasFromEntitiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociatePersonasFromEntitiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociatePersonasFromEntitiesRequest::response(QNetworkReply * const reply) const
{
    return new DisassociatePersonasFromEntitiesResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DisassociatePersonasFromEntitiesRequestPrivate
 * \brief The DisassociatePersonasFromEntitiesRequestPrivate class provides private implementation for DisassociatePersonasFromEntitiesRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DisassociatePersonasFromEntitiesRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DisassociatePersonasFromEntitiesRequestPrivate::DisassociatePersonasFromEntitiesRequestPrivate(
    const KendraRequest::Action action, DisassociatePersonasFromEntitiesRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociatePersonasFromEntitiesRequest
 * class' copy constructor.
 */
DisassociatePersonasFromEntitiesRequestPrivate::DisassociatePersonasFromEntitiesRequestPrivate(
    const DisassociatePersonasFromEntitiesRequestPrivate &other, DisassociatePersonasFromEntitiesRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
