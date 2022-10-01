// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putcodebindingrequest.h"
#include "putcodebindingrequest_p.h"
#include "putcodebindingresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::PutCodeBindingRequest
 * \brief The PutCodeBindingRequest class provides an interface for Schemas PutCodeBinding requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::putCodeBinding
 */

/*!
 * Constructs a copy of \a other.
 */
PutCodeBindingRequest::PutCodeBindingRequest(const PutCodeBindingRequest &other)
    : SchemasRequest(new PutCodeBindingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutCodeBindingRequest object.
 */
PutCodeBindingRequest::PutCodeBindingRequest()
    : SchemasRequest(new PutCodeBindingRequestPrivate(SchemasRequest::PutCodeBindingAction, this))
{

}

/*!
 * \reimp
 */
bool PutCodeBindingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutCodeBindingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutCodeBindingRequest::response(QNetworkReply * const reply) const
{
    return new PutCodeBindingResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::PutCodeBindingRequestPrivate
 * \brief The PutCodeBindingRequestPrivate class provides private implementation for PutCodeBindingRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a PutCodeBindingRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
PutCodeBindingRequestPrivate::PutCodeBindingRequestPrivate(
    const SchemasRequest::Action action, PutCodeBindingRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutCodeBindingRequest
 * class' copy constructor.
 */
PutCodeBindingRequestPrivate::PutCodeBindingRequestPrivate(
    const PutCodeBindingRequestPrivate &other, PutCodeBindingRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
