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

#include "getcontactpolicyrequest.h"
#include "getcontactpolicyrequest_p.h"
#include "getcontactpolicyresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::GetContactPolicyRequest
 * \brief The GetContactPolicyRequest class provides an interface for SSMContacts GetContactPolicy requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::getContactPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetContactPolicyRequest::GetContactPolicyRequest(const GetContactPolicyRequest &other)
    : SSMContactsRequest(new GetContactPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetContactPolicyRequest object.
 */
GetContactPolicyRequest::GetContactPolicyRequest()
    : SSMContactsRequest(new GetContactPolicyRequestPrivate(SSMContactsRequest::GetContactPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetContactPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetContactPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetContactPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetContactPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::GetContactPolicyRequestPrivate
 * \brief The GetContactPolicyRequestPrivate class provides private implementation for GetContactPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a GetContactPolicyRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
GetContactPolicyRequestPrivate::GetContactPolicyRequestPrivate(
    const SSMContactsRequest::Action action, GetContactPolicyRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetContactPolicyRequest
 * class' copy constructor.
 */
GetContactPolicyRequestPrivate::GetContactPolicyRequestPrivate(
    const GetContactPolicyRequestPrivate &other, GetContactPolicyRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
