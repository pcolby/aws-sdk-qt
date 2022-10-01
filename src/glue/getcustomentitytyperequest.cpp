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

#include "getcustomentitytyperequest.h"
#include "getcustomentitytyperequest_p.h"
#include "getcustomentitytyperesponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetCustomEntityTypeRequest
 * \brief The GetCustomEntityTypeRequest class provides an interface for Glue GetCustomEntityType requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getCustomEntityType
 */

/*!
 * Constructs a copy of \a other.
 */
GetCustomEntityTypeRequest::GetCustomEntityTypeRequest(const GetCustomEntityTypeRequest &other)
    : GlueRequest(new GetCustomEntityTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCustomEntityTypeRequest object.
 */
GetCustomEntityTypeRequest::GetCustomEntityTypeRequest()
    : GlueRequest(new GetCustomEntityTypeRequestPrivate(GlueRequest::GetCustomEntityTypeAction, this))
{

}

/*!
 * \reimp
 */
bool GetCustomEntityTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCustomEntityTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCustomEntityTypeRequest::response(QNetworkReply * const reply) const
{
    return new GetCustomEntityTypeResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetCustomEntityTypeRequestPrivate
 * \brief The GetCustomEntityTypeRequestPrivate class provides private implementation for GetCustomEntityTypeRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetCustomEntityTypeRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetCustomEntityTypeRequestPrivate::GetCustomEntityTypeRequestPrivate(
    const GlueRequest::Action action, GetCustomEntityTypeRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCustomEntityTypeRequest
 * class' copy constructor.
 */
GetCustomEntityTypeRequestPrivate::GetCustomEntityTypeRequestPrivate(
    const GetCustomEntityTypeRequestPrivate &other, GetCustomEntityTypeRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
