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

#include "gettableversionrequest.h"
#include "gettableversionrequest_p.h"
#include "gettableversionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetTableVersionRequest
 * \brief The GetTableVersionRequest class provides an interface for Glue GetTableVersion requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getTableVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetTableVersionRequest::GetTableVersionRequest(const GetTableVersionRequest &other)
    : GlueRequest(new GetTableVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTableVersionRequest object.
 */
GetTableVersionRequest::GetTableVersionRequest()
    : GlueRequest(new GetTableVersionRequestPrivate(GlueRequest::GetTableVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetTableVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTableVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTableVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetTableVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetTableVersionRequestPrivate
 * \brief The GetTableVersionRequestPrivate class provides private implementation for GetTableVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetTableVersionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetTableVersionRequestPrivate::GetTableVersionRequestPrivate(
    const GlueRequest::Action action, GetTableVersionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTableVersionRequest
 * class' copy constructor.
 */
GetTableVersionRequestPrivate::GetTableVersionRequestPrivate(
    const GetTableVersionRequestPrivate &other, GetTableVersionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
