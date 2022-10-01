// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getschemabydefinitionrequest.h"
#include "getschemabydefinitionrequest_p.h"
#include "getschemabydefinitionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSchemaByDefinitionRequest
 * \brief The GetSchemaByDefinitionRequest class provides an interface for Glue GetSchemaByDefinition requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getSchemaByDefinition
 */

/*!
 * Constructs a copy of \a other.
 */
GetSchemaByDefinitionRequest::GetSchemaByDefinitionRequest(const GetSchemaByDefinitionRequest &other)
    : GlueRequest(new GetSchemaByDefinitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSchemaByDefinitionRequest object.
 */
GetSchemaByDefinitionRequest::GetSchemaByDefinitionRequest()
    : GlueRequest(new GetSchemaByDefinitionRequestPrivate(GlueRequest::GetSchemaByDefinitionAction, this))
{

}

/*!
 * \reimp
 */
bool GetSchemaByDefinitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSchemaByDefinitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSchemaByDefinitionRequest::response(QNetworkReply * const reply) const
{
    return new GetSchemaByDefinitionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetSchemaByDefinitionRequestPrivate
 * \brief The GetSchemaByDefinitionRequestPrivate class provides private implementation for GetSchemaByDefinitionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSchemaByDefinitionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetSchemaByDefinitionRequestPrivate::GetSchemaByDefinitionRequestPrivate(
    const GlueRequest::Action action, GetSchemaByDefinitionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSchemaByDefinitionRequest
 * class' copy constructor.
 */
GetSchemaByDefinitionRequestPrivate::GetSchemaByDefinitionRequestPrivate(
    const GetSchemaByDefinitionRequestPrivate &other, GetSchemaByDefinitionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
