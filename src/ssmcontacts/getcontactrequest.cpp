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

#include "getcontactrequest.h"
#include "getcontactrequest_p.h"
#include "getcontactresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::GetContactRequest
 * \brief The GetContactRequest class provides an interface for SSMContacts GetContact requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::getContact
 */

/*!
 * Constructs a copy of \a other.
 */
GetContactRequest::GetContactRequest(const GetContactRequest &other)
    : SSMContactsRequest(new GetContactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetContactRequest object.
 */
GetContactRequest::GetContactRequest()
    : SSMContactsRequest(new GetContactRequestPrivate(SSMContactsRequest::GetContactAction, this))
{

}

/*!
 * \reimp
 */
bool GetContactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetContactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContactRequest::response(QNetworkReply * const reply) const
{
    return new GetContactResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::GetContactRequestPrivate
 * \brief The GetContactRequestPrivate class provides private implementation for GetContactRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a GetContactRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
GetContactRequestPrivate::GetContactRequestPrivate(
    const SSMContactsRequest::Action action, GetContactRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetContactRequest
 * class' copy constructor.
 */
GetContactRequestPrivate::GetContactRequestPrivate(
    const GetContactRequestPrivate &other, GetContactRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
