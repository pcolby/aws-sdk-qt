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

#include "getschemarequest.h"
#include "getschemarequest_p.h"
#include "getschemaresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSchemaRequest
 * \brief The GetSchemaRequest class provides an interface for Glue GetSchema requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getSchema
 */

/*!
 * Constructs a copy of \a other.
 */
GetSchemaRequest::GetSchemaRequest(const GetSchemaRequest &other)
    : GlueRequest(new GetSchemaRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSchemaRequest object.
 */
GetSchemaRequest::GetSchemaRequest()
    : GlueRequest(new GetSchemaRequestPrivate(GlueRequest::GetSchemaAction, this))
{

}

/*!
 * \reimp
 */
bool GetSchemaRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSchemaResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSchemaRequest::response(QNetworkReply * const reply) const
{
    return new GetSchemaResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetSchemaRequestPrivate
 * \brief The GetSchemaRequestPrivate class provides private implementation for GetSchemaRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSchemaRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetSchemaRequestPrivate::GetSchemaRequestPrivate(
    const GlueRequest::Action action, GetSchemaRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSchemaRequest
 * class' copy constructor.
 */
GetSchemaRequestPrivate::GetSchemaRequestPrivate(
    const GetSchemaRequestPrivate &other, GetSchemaRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
