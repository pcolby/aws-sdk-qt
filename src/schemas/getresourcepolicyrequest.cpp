// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getresourcepolicyrequest.h"
#include "getresourcepolicyrequest_p.h"
#include "getresourcepolicyresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::GetResourcePolicyRequest
 * \brief The GetResourcePolicyRequest class provides an interface for Schemas GetResourcePolicy requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::getResourcePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetResourcePolicyRequest::GetResourcePolicyRequest(const GetResourcePolicyRequest &other)
    : SchemasRequest(new GetResourcePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetResourcePolicyRequest object.
 */
GetResourcePolicyRequest::GetResourcePolicyRequest()
    : SchemasRequest(new GetResourcePolicyRequestPrivate(SchemasRequest::GetResourcePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetResourcePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetResourcePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourcePolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetResourcePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::GetResourcePolicyRequestPrivate
 * \brief The GetResourcePolicyRequestPrivate class provides private implementation for GetResourcePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a GetResourcePolicyRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
GetResourcePolicyRequestPrivate::GetResourcePolicyRequestPrivate(
    const SchemasRequest::Action action, GetResourcePolicyRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetResourcePolicyRequest
 * class' copy constructor.
 */
GetResourcePolicyRequestPrivate::GetResourcePolicyRequestPrivate(
    const GetResourcePolicyRequestPrivate &other, GetResourcePolicyRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
