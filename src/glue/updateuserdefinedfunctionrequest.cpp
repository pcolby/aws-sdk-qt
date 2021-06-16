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

#include "updateuserdefinedfunctionrequest.h"
#include "updateuserdefinedfunctionrequest_p.h"
#include "updateuserdefinedfunctionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateUserDefinedFunctionRequest
 * \brief The UpdateUserDefinedFunctionRequest class provides an interface for Glue UpdateUserDefinedFunction requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateUserDefinedFunction
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateUserDefinedFunctionRequest::UpdateUserDefinedFunctionRequest(const UpdateUserDefinedFunctionRequest &other)
    : GlueRequest(new UpdateUserDefinedFunctionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateUserDefinedFunctionRequest object.
 */
UpdateUserDefinedFunctionRequest::UpdateUserDefinedFunctionRequest()
    : GlueRequest(new UpdateUserDefinedFunctionRequestPrivate(GlueRequest::UpdateUserDefinedFunctionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateUserDefinedFunctionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateUserDefinedFunctionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateUserDefinedFunctionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateUserDefinedFunctionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateUserDefinedFunctionRequestPrivate
 * \brief The UpdateUserDefinedFunctionRequestPrivate class provides private implementation for UpdateUserDefinedFunctionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateUserDefinedFunctionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateUserDefinedFunctionRequestPrivate::UpdateUserDefinedFunctionRequestPrivate(
    const GlueRequest::Action action, UpdateUserDefinedFunctionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateUserDefinedFunctionRequest
 * class' copy constructor.
 */
UpdateUserDefinedFunctionRequestPrivate::UpdateUserDefinedFunctionRequestPrivate(
    const UpdateUserDefinedFunctionRequestPrivate &other, UpdateUserDefinedFunctionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
