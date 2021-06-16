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

#include "putinlinepolicytopermissionsetrequest.h"
#include "putinlinepolicytopermissionsetrequest_p.h"
#include "putinlinepolicytopermissionsetresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::PutInlinePolicyToPermissionSetRequest
 * \brief The PutInlinePolicyToPermissionSetRequest class provides an interface for SSOAdmin PutInlinePolicyToPermissionSet requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::putInlinePolicyToPermissionSet
 */

/*!
 * Constructs a copy of \a other.
 */
PutInlinePolicyToPermissionSetRequest::PutInlinePolicyToPermissionSetRequest(const PutInlinePolicyToPermissionSetRequest &other)
    : SSOAdminRequest(new PutInlinePolicyToPermissionSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutInlinePolicyToPermissionSetRequest object.
 */
PutInlinePolicyToPermissionSetRequest::PutInlinePolicyToPermissionSetRequest()
    : SSOAdminRequest(new PutInlinePolicyToPermissionSetRequestPrivate(SSOAdminRequest::PutInlinePolicyToPermissionSetAction, this))
{

}

/*!
 * \reimp
 */
bool PutInlinePolicyToPermissionSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutInlinePolicyToPermissionSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutInlinePolicyToPermissionSetRequest::response(QNetworkReply * const reply) const
{
    return new PutInlinePolicyToPermissionSetResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::PutInlinePolicyToPermissionSetRequestPrivate
 * \brief The PutInlinePolicyToPermissionSetRequestPrivate class provides private implementation for PutInlinePolicyToPermissionSetRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a PutInlinePolicyToPermissionSetRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
PutInlinePolicyToPermissionSetRequestPrivate::PutInlinePolicyToPermissionSetRequestPrivate(
    const SSOAdminRequest::Action action, PutInlinePolicyToPermissionSetRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutInlinePolicyToPermissionSetRequest
 * class' copy constructor.
 */
PutInlinePolicyToPermissionSetRequestPrivate::PutInlinePolicyToPermissionSetRequestPrivate(
    const PutInlinePolicyToPermissionSetRequestPrivate &other, PutInlinePolicyToPermissionSetRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
