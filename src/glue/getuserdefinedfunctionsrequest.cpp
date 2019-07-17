/*
    Copyright 2013-2019 Paul Colby

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

#include "getuserdefinedfunctionsrequest.h"
#include "getuserdefinedfunctionsrequest_p.h"
#include "getuserdefinedfunctionsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetUserDefinedFunctionsRequest
 * \brief The GetUserDefinedFunctionsRequest class provides an interface for Glue GetUserDefinedFunctions requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getUserDefinedFunctions
 */

/*!
 * Constructs a copy of \a other.
 */
GetUserDefinedFunctionsRequest::GetUserDefinedFunctionsRequest(const GetUserDefinedFunctionsRequest &other)
    : GlueRequest(new GetUserDefinedFunctionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetUserDefinedFunctionsRequest object.
 */
GetUserDefinedFunctionsRequest::GetUserDefinedFunctionsRequest()
    : GlueRequest(new GetUserDefinedFunctionsRequestPrivate(GlueRequest::GetUserDefinedFunctionsAction, this))
{

}

/*!
 * \reimp
 */
bool GetUserDefinedFunctionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetUserDefinedFunctionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetUserDefinedFunctionsRequest::response(QNetworkReply * const reply) const
{
    return new GetUserDefinedFunctionsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetUserDefinedFunctionsRequestPrivate
 * \brief The GetUserDefinedFunctionsRequestPrivate class provides private implementation for GetUserDefinedFunctionsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetUserDefinedFunctionsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetUserDefinedFunctionsRequestPrivate::GetUserDefinedFunctionsRequestPrivate(
    const GlueRequest::Action action, GetUserDefinedFunctionsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetUserDefinedFunctionsRequest
 * class' copy constructor.
 */
GetUserDefinedFunctionsRequestPrivate::GetUserDefinedFunctionsRequestPrivate(
    const GetUserDefinedFunctionsRequestPrivate &other, GetUserDefinedFunctionsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
