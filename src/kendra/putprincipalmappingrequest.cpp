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

#include "putprincipalmappingrequest.h"
#include "putprincipalmappingrequest_p.h"
#include "putprincipalmappingresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::PutPrincipalMappingRequest
 * \brief The PutPrincipalMappingRequest class provides an interface for Kendra PutPrincipalMapping requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::putPrincipalMapping
 */

/*!
 * Constructs a copy of \a other.
 */
PutPrincipalMappingRequest::PutPrincipalMappingRequest(const PutPrincipalMappingRequest &other)
    : KendraRequest(new PutPrincipalMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutPrincipalMappingRequest object.
 */
PutPrincipalMappingRequest::PutPrincipalMappingRequest()
    : KendraRequest(new PutPrincipalMappingRequestPrivate(KendraRequest::PutPrincipalMappingAction, this))
{

}

/*!
 * \reimp
 */
bool PutPrincipalMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutPrincipalMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutPrincipalMappingRequest::response(QNetworkReply * const reply) const
{
    return new PutPrincipalMappingResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::PutPrincipalMappingRequestPrivate
 * \brief The PutPrincipalMappingRequestPrivate class provides private implementation for PutPrincipalMappingRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a PutPrincipalMappingRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
PutPrincipalMappingRequestPrivate::PutPrincipalMappingRequestPrivate(
    const KendraRequest::Action action, PutPrincipalMappingRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutPrincipalMappingRequest
 * class' copy constructor.
 */
PutPrincipalMappingRequestPrivate::PutPrincipalMappingRequestPrivate(
    const PutPrincipalMappingRequestPrivate &other, PutPrincipalMappingRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
