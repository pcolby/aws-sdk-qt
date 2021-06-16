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

#include "deletecontactrequest.h"
#include "deletecontactrequest_p.h"
#include "deletecontactresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::DeleteContactRequest
 * \brief The DeleteContactRequest class provides an interface for SSMContacts DeleteContact requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::deleteContact
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteContactRequest::DeleteContactRequest(const DeleteContactRequest &other)
    : SSMContactsRequest(new DeleteContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteContactRequest object.
 */
DeleteContactRequest::DeleteContactRequest()
    : SSMContactsRequest(new DeleteContactRequestPrivate(SSMContactsRequest::DeleteContactAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteContactRequest::response(QNetworkReply * const reply) const
{
    return new DeleteContactResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::DeleteContactRequestPrivate
 * \brief The DeleteContactRequestPrivate class provides private implementation for DeleteContactRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a DeleteContactRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
DeleteContactRequestPrivate::DeleteContactRequestPrivate(
    const SSMContactsRequest::Action action, DeleteContactRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteContactRequest
 * class' copy constructor.
 */
DeleteContactRequestPrivate::DeleteContactRequestPrivate(
    const DeleteContactRequestPrivate &other, DeleteContactRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
