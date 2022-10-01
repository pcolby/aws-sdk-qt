// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putresourcepolicyrequest.h"
#include "putresourcepolicyrequest_p.h"
#include "putresourcepolicyresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::PutResourcePolicyRequest
 * \brief The PutResourcePolicyRequest class provides an interface for Schemas PutResourcePolicy requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::putResourcePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutResourcePolicyRequest::PutResourcePolicyRequest(const PutResourcePolicyRequest &other)
    : SchemasRequest(new PutResourcePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutResourcePolicyRequest object.
 */
PutResourcePolicyRequest::PutResourcePolicyRequest()
    : SchemasRequest(new PutResourcePolicyRequestPrivate(SchemasRequest::PutResourcePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutResourcePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutResourcePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutResourcePolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutResourcePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::PutResourcePolicyRequestPrivate
 * \brief The PutResourcePolicyRequestPrivate class provides private implementation for PutResourcePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a PutResourcePolicyRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
PutResourcePolicyRequestPrivate::PutResourcePolicyRequestPrivate(
    const SchemasRequest::Action action, PutResourcePolicyRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutResourcePolicyRequest
 * class' copy constructor.
 */
PutResourcePolicyRequestPrivate::PutResourcePolicyRequestPrivate(
    const PutResourcePolicyRequestPrivate &other, PutResourcePolicyRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
