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

#include "listpagesbycontactrequest.h"
#include "listpagesbycontactrequest_p.h"
#include "listpagesbycontactresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::ListPagesByContactRequest
 * \brief The ListPagesByContactRequest class provides an interface for SSMContacts ListPagesByContact requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::listPagesByContact
 */

/*!
 * Constructs a copy of \a other.
 */
ListPagesByContactRequest::ListPagesByContactRequest(const ListPagesByContactRequest &other)
    : SSMContactsRequest(new ListPagesByContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPagesByContactRequest object.
 */
ListPagesByContactRequest::ListPagesByContactRequest()
    : SSMContactsRequest(new ListPagesByContactRequestPrivate(SSMContactsRequest::ListPagesByContactAction, this))
{

}

/*!
 * \reimp
 */
bool ListPagesByContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPagesByContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPagesByContactRequest::response(QNetworkReply * const reply) const
{
    return new ListPagesByContactResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::ListPagesByContactRequestPrivate
 * \brief The ListPagesByContactRequestPrivate class provides private implementation for ListPagesByContactRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a ListPagesByContactRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
ListPagesByContactRequestPrivate::ListPagesByContactRequestPrivate(
    const SSMContactsRequest::Action action, ListPagesByContactRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPagesByContactRequest
 * class' copy constructor.
 */
ListPagesByContactRequestPrivate::ListPagesByContactRequestPrivate(
    const ListPagesByContactRequestPrivate &other, ListPagesByContactRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
