// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcodebindingsourcerequest.h"
#include "getcodebindingsourcerequest_p.h"
#include "getcodebindingsourceresponse.h"
#include "schemasrequest_p.h"

namespace QtAws {
namespace Schemas {

/*!
 * \class QtAws::Schemas::GetCodeBindingSourceRequest
 * \brief The GetCodeBindingSourceRequest class provides an interface for Schemas GetCodeBindingSource requests.
 *
 * \inmodule QtAwsSchemas
 *
 *  Amazon EventBridge Schema
 *
 * \sa SchemasClient::getCodeBindingSource
 */

/*!
 * Constructs a copy of \a other.
 */
GetCodeBindingSourceRequest::GetCodeBindingSourceRequest(const GetCodeBindingSourceRequest &other)
    : SchemasRequest(new GetCodeBindingSourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCodeBindingSourceRequest object.
 */
GetCodeBindingSourceRequest::GetCodeBindingSourceRequest()
    : SchemasRequest(new GetCodeBindingSourceRequestPrivate(SchemasRequest::GetCodeBindingSourceAction, this))
{

}

/*!
 * \reimp
 */
bool GetCodeBindingSourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCodeBindingSourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCodeBindingSourceRequest::response(QNetworkReply * const reply) const
{
    return new GetCodeBindingSourceResponse(*this, reply);
}

/*!
 * \class QtAws::Schemas::GetCodeBindingSourceRequestPrivate
 * \brief The GetCodeBindingSourceRequestPrivate class provides private implementation for GetCodeBindingSourceRequest.
 * \internal
 *
 * \inmodule QtAwsSchemas
 */

/*!
 * Constructs a GetCodeBindingSourceRequestPrivate object for Schemas \a action,
 * with public implementation \a q.
 */
GetCodeBindingSourceRequestPrivate::GetCodeBindingSourceRequestPrivate(
    const SchemasRequest::Action action, GetCodeBindingSourceRequest * const q)
    : SchemasRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCodeBindingSourceRequest
 * class' copy constructor.
 */
GetCodeBindingSourceRequestPrivate::GetCodeBindingSourceRequestPrivate(
    const GetCodeBindingSourceRequestPrivate &other, GetCodeBindingSourceRequest * const q)
    : SchemasRequestPrivate(other, q)
{

}

} // namespace Schemas
} // namespace QtAws
