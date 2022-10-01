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

#include "getblueprintrunsrequest.h"
#include "getblueprintrunsrequest_p.h"
#include "getblueprintrunsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetBlueprintRunsRequest
 * \brief The GetBlueprintRunsRequest class provides an interface for Glue GetBlueprintRuns requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getBlueprintRuns
 */

/*!
 * Constructs a copy of \a other.
 */
GetBlueprintRunsRequest::GetBlueprintRunsRequest(const GetBlueprintRunsRequest &other)
    : GlueRequest(new GetBlueprintRunsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBlueprintRunsRequest object.
 */
GetBlueprintRunsRequest::GetBlueprintRunsRequest()
    : GlueRequest(new GetBlueprintRunsRequestPrivate(GlueRequest::GetBlueprintRunsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBlueprintRunsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBlueprintRunsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBlueprintRunsRequest::response(QNetworkReply * const reply) const
{
    return new GetBlueprintRunsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetBlueprintRunsRequestPrivate
 * \brief The GetBlueprintRunsRequestPrivate class provides private implementation for GetBlueprintRunsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetBlueprintRunsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetBlueprintRunsRequestPrivate::GetBlueprintRunsRequestPrivate(
    const GlueRequest::Action action, GetBlueprintRunsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBlueprintRunsRequest
 * class' copy constructor.
 */
GetBlueprintRunsRequestPrivate::GetBlueprintRunsRequestPrivate(
    const GetBlueprintRunsRequestPrivate &other, GetBlueprintRunsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
