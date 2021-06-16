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

#include "createcontactrequest.h"
#include "createcontactrequest_p.h"
#include "createcontactresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::CreateContactRequest
 * \brief The CreateContactRequest class provides an interface for SSMContacts CreateContact requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::createContact
 */

/*!
 * Constructs a copy of \a other.
 */
CreateContactRequest::CreateContactRequest(const CreateContactRequest &other)
    : SSMContactsRequest(new CreateContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateContactRequest object.
 */
CreateContactRequest::CreateContactRequest()
    : SSMContactsRequest(new CreateContactRequestPrivate(SSMContactsRequest::CreateContactAction, this))
{

}

/*!
 * \reimp
 */
bool CreateContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateContactRequest::response(QNetworkReply * const reply) const
{
    return new CreateContactResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::CreateContactRequestPrivate
 * \brief The CreateContactRequestPrivate class provides private implementation for CreateContactRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a CreateContactRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
CreateContactRequestPrivate::CreateContactRequestPrivate(
    const SSMContactsRequest::Action action, CreateContactRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateContactRequest
 * class' copy constructor.
 */
CreateContactRequestPrivate::CreateContactRequestPrivate(
    const CreateContactRequestPrivate &other, CreateContactRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
