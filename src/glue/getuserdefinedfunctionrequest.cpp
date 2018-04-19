/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getuserdefinedfunctionrequest.h"
#include "getuserdefinedfunctionrequest_p.h"
#include "getuserdefinedfunctionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetUserDefinedFunctionRequest
 * \brief The GetUserDefinedFunctionRequest class provides an interface for Glue GetUserDefinedFunction requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getUserDefinedFunction
 */

/*!
 * Constructs a copy of \a other.
 */
GetUserDefinedFunctionRequest::GetUserDefinedFunctionRequest(const GetUserDefinedFunctionRequest &other)
    : GlueRequest(new GetUserDefinedFunctionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUserDefinedFunctionRequest object.
 */
GetUserDefinedFunctionRequest::GetUserDefinedFunctionRequest()
    : GlueRequest(new GetUserDefinedFunctionRequestPrivate(GlueRequest::GetUserDefinedFunctionAction, this))
{

}

/*!
 * \reimp
 */
bool GetUserDefinedFunctionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUserDefinedFunctionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUserDefinedFunctionRequest::response(QNetworkReply * const reply) const
{
    return new GetUserDefinedFunctionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetUserDefinedFunctionRequestPrivate
 * \brief The GetUserDefinedFunctionRequestPrivate class provides private implementation for GetUserDefinedFunctionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 *
 * Constructs a GetUserDefinedFunctionRequestPrivate object for Glue \a action with,
 * public implementation \a q.
 */
GetUserDefinedFunctionRequestPrivate::GetUserDefinedFunctionRequestPrivate(
    const GlueRequest::Action action, GetUserDefinedFunctionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUserDefinedFunctionRequest
 * class' copy constructor.
 */
GetUserDefinedFunctionRequestPrivate::GetUserDefinedFunctionRequestPrivate(
    const GetUserDefinedFunctionRequestPrivate &other, GetUserDefinedFunctionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
