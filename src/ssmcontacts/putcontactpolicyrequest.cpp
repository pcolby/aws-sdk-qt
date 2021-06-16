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

#include "putcontactpolicyrequest.h"
#include "putcontactpolicyrequest_p.h"
#include "putcontactpolicyresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::PutContactPolicyRequest
 * \brief The PutContactPolicyRequest class provides an interface for SSMContacts PutContactPolicy requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::putContactPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutContactPolicyRequest::PutContactPolicyRequest(const PutContactPolicyRequest &other)
    : SSMContactsRequest(new PutContactPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutContactPolicyRequest object.
 */
PutContactPolicyRequest::PutContactPolicyRequest()
    : SSMContactsRequest(new PutContactPolicyRequestPrivate(SSMContactsRequest::PutContactPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutContactPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutContactPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutContactPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutContactPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::PutContactPolicyRequestPrivate
 * \brief The PutContactPolicyRequestPrivate class provides private implementation for PutContactPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a PutContactPolicyRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
PutContactPolicyRequestPrivate::PutContactPolicyRequestPrivate(
    const SSMContactsRequest::Action action, PutContactPolicyRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutContactPolicyRequest
 * class' copy constructor.
 */
PutContactPolicyRequestPrivate::PutContactPolicyRequestPrivate(
    const PutContactPolicyRequestPrivate &other, PutContactPolicyRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
