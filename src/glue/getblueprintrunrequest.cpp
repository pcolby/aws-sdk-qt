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

#include "getblueprintrunrequest.h"
#include "getblueprintrunrequest_p.h"
#include "getblueprintrunresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetBlueprintRunRequest
 * \brief The GetBlueprintRunRequest class provides an interface for Glue GetBlueprintRun requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getBlueprintRun
 */

/*!
 * Constructs a copy of \a other.
 */
GetBlueprintRunRequest::GetBlueprintRunRequest(const GetBlueprintRunRequest &other)
    : GlueRequest(new GetBlueprintRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBlueprintRunRequest object.
 */
GetBlueprintRunRequest::GetBlueprintRunRequest()
    : GlueRequest(new GetBlueprintRunRequestPrivate(GlueRequest::GetBlueprintRunAction, this))
{

}

/*!
 * \reimp
 */
bool GetBlueprintRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBlueprintRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBlueprintRunRequest::response(QNetworkReply * const reply) const
{
    return new GetBlueprintRunResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetBlueprintRunRequestPrivate
 * \brief The GetBlueprintRunRequestPrivate class provides private implementation for GetBlueprintRunRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetBlueprintRunRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetBlueprintRunRequestPrivate::GetBlueprintRunRequestPrivate(
    const GlueRequest::Action action, GetBlueprintRunRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBlueprintRunRequest
 * class' copy constructor.
 */
GetBlueprintRunRequestPrivate::GetBlueprintRunRequestPrivate(
    const GetBlueprintRunRequestPrivate &other, GetBlueprintRunRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
