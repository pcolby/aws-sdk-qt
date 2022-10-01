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

#include "registerschemaversionrequest.h"
#include "registerschemaversionrequest_p.h"
#include "registerschemaversionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::RegisterSchemaVersionRequest
 * \brief The RegisterSchemaVersionRequest class provides an interface for Glue RegisterSchemaVersion requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::registerSchemaVersion
 */

/*!
 * Constructs a copy of \a other.
 */
RegisterSchemaVersionRequest::RegisterSchemaVersionRequest(const RegisterSchemaVersionRequest &other)
    : GlueRequest(new RegisterSchemaVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RegisterSchemaVersionRequest object.
 */
RegisterSchemaVersionRequest::RegisterSchemaVersionRequest()
    : GlueRequest(new RegisterSchemaVersionRequestPrivate(GlueRequest::RegisterSchemaVersionAction, this))
{

}

/*!
 * \reimp
 */
bool RegisterSchemaVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RegisterSchemaVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RegisterSchemaVersionRequest::response(QNetworkReply * const reply) const
{
    return new RegisterSchemaVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::RegisterSchemaVersionRequestPrivate
 * \brief The RegisterSchemaVersionRequestPrivate class provides private implementation for RegisterSchemaVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a RegisterSchemaVersionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
RegisterSchemaVersionRequestPrivate::RegisterSchemaVersionRequestPrivate(
    const GlueRequest::Action action, RegisterSchemaVersionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RegisterSchemaVersionRequest
 * class' copy constructor.
 */
RegisterSchemaVersionRequestPrivate::RegisterSchemaVersionRequestPrivate(
    const RegisterSchemaVersionRequestPrivate &other, RegisterSchemaVersionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
