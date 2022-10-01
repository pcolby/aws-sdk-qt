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

#include "describeprincipalmappingrequest.h"
#include "describeprincipalmappingrequest_p.h"
#include "describeprincipalmappingresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribePrincipalMappingRequest
 * \brief The DescribePrincipalMappingRequest class provides an interface for Kendra DescribePrincipalMapping requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describePrincipalMapping
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePrincipalMappingRequest::DescribePrincipalMappingRequest(const DescribePrincipalMappingRequest &other)
    : KendraRequest(new DescribePrincipalMappingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePrincipalMappingRequest object.
 */
DescribePrincipalMappingRequest::DescribePrincipalMappingRequest()
    : KendraRequest(new DescribePrincipalMappingRequestPrivate(KendraRequest::DescribePrincipalMappingAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePrincipalMappingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePrincipalMappingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePrincipalMappingRequest::response(QNetworkReply * const reply) const
{
    return new DescribePrincipalMappingResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DescribePrincipalMappingRequestPrivate
 * \brief The DescribePrincipalMappingRequestPrivate class provides private implementation for DescribePrincipalMappingRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribePrincipalMappingRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DescribePrincipalMappingRequestPrivate::DescribePrincipalMappingRequestPrivate(
    const KendraRequest::Action action, DescribePrincipalMappingRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePrincipalMappingRequest
 * class' copy constructor.
 */
DescribePrincipalMappingRequestPrivate::DescribePrincipalMappingRequestPrivate(
    const DescribePrincipalMappingRequestPrivate &other, DescribePrincipalMappingRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
