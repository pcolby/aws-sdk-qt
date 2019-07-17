/*
    Copyright 2013-2019 Paul Colby

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

#include "listdomainassociationsrequest.h"
#include "listdomainassociationsrequest_p.h"
#include "listdomainassociationsresponse.h"
#include "amplifyrequest_p.h"

namespace QtAws {
namespace Amplify {

/*!
 * \class QtAws::Amplify::ListDomainAssociationsRequest
 * \brief The ListDomainAssociationsRequest class provides an interface for Amplify ListDomainAssociations requests.
 *
 * \inmodule QtAwsAmplify
 *
 *  Amplify is a fully managed continuous deployment and hosting service for modern web apps.
 *
 * \sa AmplifyClient::listDomainAssociations
 */

/*!
 * Constructs a copy of \a other.
 */
ListDomainAssociationsRequest::ListDomainAssociationsRequest(const ListDomainAssociationsRequest &other)
    : AmplifyRequest(new ListDomainAssociationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDomainAssociationsRequest object.
 */
ListDomainAssociationsRequest::ListDomainAssociationsRequest()
    : AmplifyRequest(new ListDomainAssociationsRequestPrivate(AmplifyRequest::ListDomainAssociationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDomainAssociationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDomainAssociationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDomainAssociationsRequest::response(QNetworkReply * const reply) const
{
    return new ListDomainAssociationsResponse(*this, reply);
}

/*!
 * \class QtAws::Amplify::ListDomainAssociationsRequestPrivate
 * \brief The ListDomainAssociationsRequestPrivate class provides private implementation for ListDomainAssociationsRequest.
 * \internal
 *
 * \inmodule QtAwsAmplify
 */

/*!
 * Constructs a ListDomainAssociationsRequestPrivate object for Amplify \a action,
 * with public implementation \a q.
 */
ListDomainAssociationsRequestPrivate::ListDomainAssociationsRequestPrivate(
    const AmplifyRequest::Action action, ListDomainAssociationsRequest * const q)
    : AmplifyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDomainAssociationsRequest
 * class' copy constructor.
 */
ListDomainAssociationsRequestPrivate::ListDomainAssociationsRequestPrivate(
    const ListDomainAssociationsRequestPrivate &other, ListDomainAssociationsRequest * const q)
    : AmplifyRequestPrivate(other, q)
{

}

} // namespace Amplify
} // namespace QtAws
