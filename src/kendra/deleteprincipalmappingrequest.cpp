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

#include "deleteprincipalmappingrequest.h"
#include "deleteprincipalmappingrequest_p.h"
#include "deleteprincipalmappingresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeletePrincipalMappingRequest
 * \brief The DeletePrincipalMappingRequest class provides an interface for Kendra DeletePrincipalMapping requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deletePrincipalMapping
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePrincipalMappingRequest::DeletePrincipalMappingRequest(const DeletePrincipalMappingRequest &other)
    : KendraRequest(new DeletePrincipalMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePrincipalMappingRequest object.
 */
DeletePrincipalMappingRequest::DeletePrincipalMappingRequest()
    : KendraRequest(new DeletePrincipalMappingRequestPrivate(KendraRequest::DeletePrincipalMappingAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePrincipalMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePrincipalMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePrincipalMappingRequest::response(QNetworkReply * const reply) const
{
    return new DeletePrincipalMappingResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DeletePrincipalMappingRequestPrivate
 * \brief The DeletePrincipalMappingRequestPrivate class provides private implementation for DeletePrincipalMappingRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeletePrincipalMappingRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DeletePrincipalMappingRequestPrivate::DeletePrincipalMappingRequestPrivate(
    const KendraRequest::Action action, DeletePrincipalMappingRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePrincipalMappingRequest
 * class' copy constructor.
 */
DeletePrincipalMappingRequestPrivate::DeletePrincipalMappingRequestPrivate(
    const DeletePrincipalMappingRequestPrivate &other, DeletePrincipalMappingRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
