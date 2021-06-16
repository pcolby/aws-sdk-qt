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

#include "listcontactsrequest.h"
#include "listcontactsrequest_p.h"
#include "listcontactsresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::ListContactsRequest
 * \brief The ListContactsRequest class provides an interface for SSMContacts ListContacts requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::listContacts
 */

/*!
 * Constructs a copy of \a other.
 */
ListContactsRequest::ListContactsRequest(const ListContactsRequest &other)
    : SSMContactsRequest(new ListContactsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListContactsRequest object.
 */
ListContactsRequest::ListContactsRequest()
    : SSMContactsRequest(new ListContactsRequestPrivate(SSMContactsRequest::ListContactsAction, this))
{

}

/*!
 * \reimp
 */
bool ListContactsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListContactsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListContactsRequest::response(QNetworkReply * const reply) const
{
    return new ListContactsResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::ListContactsRequestPrivate
 * \brief The ListContactsRequestPrivate class provides private implementation for ListContactsRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a ListContactsRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
ListContactsRequestPrivate::ListContactsRequestPrivate(
    const SSMContactsRequest::Action action, ListContactsRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListContactsRequest
 * class' copy constructor.
 */
ListContactsRequestPrivate::ListContactsRequestPrivate(
    const ListContactsRequestPrivate &other, ListContactsRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
