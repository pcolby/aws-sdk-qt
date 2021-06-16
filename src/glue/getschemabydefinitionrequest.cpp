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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
