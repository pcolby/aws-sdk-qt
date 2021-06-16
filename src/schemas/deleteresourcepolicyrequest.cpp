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

#include "deleteresourcepolicyrequest.h"
#include "deleteresourcepolicyrequest_p.h"
#include "deleteresourcepolicyresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::DeleteResourcePolicyRequest
 * \brief The DeleteResourcePolicyRequest class provides an interface for Schemas DeleteResourcePolicy requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::deleteResourcePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteResourcePolicyRequest::DeleteResourcePolicyRequest(const DeleteResourcePolicyRequest &other)
    : SchemasRequest(new DeleteResourcePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteResourcePolicyRequest object.
 */
DeleteResourcePolicyRequest::DeleteResourcePolicyRequest()
    : SchemasRequest(new DeleteResourcePolicyRequestPrivate(SchemasRequest::DeleteResourcePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteResourcePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteResourcePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteResourcePolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteResourcePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::DeleteResourcePolicyRequestPrivate
 * \brief The DeleteResourcePolicyRequestPrivate class provides private implementation for DeleteResourcePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a DeleteResourcePolicyRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
DeleteResourcePolicyRequestPrivate::DeleteResourcePolicyRequestPrivate(
    const SchemasRequest::Action action, DeleteResourcePolicyRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteResourcePolicyRequest
 * class' copy constructor.
 */
DeleteResourcePolicyRequestPrivate::DeleteResourcePolicyRequestPrivate(
    const DeleteResourcePolicyRequestPrivate &other, DeleteResourcePolicyRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
