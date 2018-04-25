/*
    Copyright 2013-2018 Paul Colby

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

#include "createuserdefinedfunctionrequest.h"
#include "createuserdefinedfunctionrequest_p.h"
#include "createuserdefinedfunctionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateUserDefinedFunctionRequest
 * \brief The CreateUserDefinedFunctionRequest class provides an interface for Glue CreateUserDefinedFunction requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::createUserDefinedFunction
 */

/*!
 * Constructs a copy of \a other.
 */
CreateUserDefinedFunctionRequest::CreateUserDefinedFunctionRequest(const CreateUserDefinedFunctionRequest &other)
    : GlueRequest(new CreateUserDefinedFunctionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateUserDefinedFunctionRequest object.
 */
CreateUserDefinedFunctionRequest::CreateUserDefinedFunctionRequest()
    : GlueRequest(new CreateUserDefinedFunctionRequestPrivate(GlueRequest::CreateUserDefinedFunctionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUserDefinedFunctionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateUserDefinedFunctionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUserDefinedFunctionRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserDefinedFunctionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateUserDefinedFunctionRequestPrivate
 * \brief The CreateUserDefinedFunctionRequestPrivate class provides private implementation for CreateUserDefinedFunctionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateUserDefinedFunctionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateUserDefinedFunctionRequestPrivate::CreateUserDefinedFunctionRequestPrivate(
    const GlueRequest::Action action, CreateUserDefinedFunctionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateUserDefinedFunctionRequest
 * class' copy constructor.
 */
CreateUserDefinedFunctionRequestPrivate::CreateUserDefinedFunctionRequestPrivate(
    const CreateUserDefinedFunctionRequestPrivate &other, CreateUserDefinedFunctionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
