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

#include "updatecontactrequest.h"
#include "updatecontactrequest_p.h"
#include "updatecontactresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::UpdateContactRequest
 * \brief The UpdateContactRequest class provides an interface for SSMContacts UpdateContact requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::updateContact
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateContactRequest::UpdateContactRequest(const UpdateContactRequest &other)
    : SSMContactsRequest(new UpdateContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateContactRequest object.
 */
UpdateContactRequest::UpdateContactRequest()
    : SSMContactsRequest(new UpdateContactRequestPrivate(SSMContactsRequest::UpdateContactAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateContactRequest::response(QNetworkReply * const reply) const
{
    return new UpdateContactResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::UpdateContactRequestPrivate
 * \brief The UpdateContactRequestPrivate class provides private implementation for UpdateContactRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a UpdateContactRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
UpdateContactRequestPrivate::UpdateContactRequestPrivate(
    const SSMContactsRequest::Action action, UpdateContactRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateContactRequest
 * class' copy constructor.
 */
UpdateContactRequestPrivate::UpdateContactRequestPrivate(
    const UpdateContactRequestPrivate &other, UpdateContactRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
