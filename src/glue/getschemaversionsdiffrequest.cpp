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

#include "getschemaversionsdiffrequest.h"
#include "getschemaversionsdiffrequest_p.h"
#include "getschemaversionsdiffresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSchemaVersionsDiffRequest
 * \brief The GetSchemaVersionsDiffRequest class provides an interface for Glue GetSchemaVersionsDiff requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getSchemaVersionsDiff
 */

/*!
 * Constructs a copy of \a other.
 */
GetSchemaVersionsDiffRequest::GetSchemaVersionsDiffRequest(const GetSchemaVersionsDiffRequest &other)
    : GlueRequest(new GetSchemaVersionsDiffRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSchemaVersionsDiffRequest object.
 */
GetSchemaVersionsDiffRequest::GetSchemaVersionsDiffRequest()
    : GlueRequest(new GetSchemaVersionsDiffRequestPrivate(GlueRequest::GetSchemaVersionsDiffAction, this))
{

}

/*!
 * \reimp
 */
bool GetSchemaVersionsDiffRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSchemaVersionsDiffResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSchemaVersionsDiffRequest::response(QNetworkReply * const reply) const
{
    return new GetSchemaVersionsDiffResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetSchemaVersionsDiffRequestPrivate
 * \brief The GetSchemaVersionsDiffRequestPrivate class provides private implementation for GetSchemaVersionsDiffRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSchemaVersionsDiffRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetSchemaVersionsDiffRequestPrivate::GetSchemaVersionsDiffRequestPrivate(
    const GlueRequest::Action action, GetSchemaVersionsDiffRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSchemaVersionsDiffRequest
 * class' copy constructor.
 */
GetSchemaVersionsDiffRequestPrivate::GetSchemaVersionsDiffRequestPrivate(
    const GetSchemaVersionsDiffRequestPrivate &other, GetSchemaVersionsDiffRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
