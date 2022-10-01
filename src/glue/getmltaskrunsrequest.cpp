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

#include "getmltaskrunsrequest.h"
#include "getmltaskrunsrequest_p.h"
#include "getmltaskrunsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetMLTaskRunsRequest
 * \brief The GetMLTaskRunsRequest class provides an interface for Glue GetMLTaskRuns requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getMLTaskRuns
 */

/*!
 * Constructs a copy of \a other.
 */
GetMLTaskRunsRequest::GetMLTaskRunsRequest(const GetMLTaskRunsRequest &other)
    : GlueRequest(new GetMLTaskRunsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMLTaskRunsRequest object.
 */
GetMLTaskRunsRequest::GetMLTaskRunsRequest()
    : GlueRequest(new GetMLTaskRunsRequestPrivate(GlueRequest::GetMLTaskRunsAction, this))
{

}

/*!
 * \reimp
 */
bool GetMLTaskRunsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMLTaskRunsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMLTaskRunsRequest::response(QNetworkReply * const reply) const
{
    return new GetMLTaskRunsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetMLTaskRunsRequestPrivate
 * \brief The GetMLTaskRunsRequestPrivate class provides private implementation for GetMLTaskRunsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetMLTaskRunsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetMLTaskRunsRequestPrivate::GetMLTaskRunsRequestPrivate(
    const GlueRequest::Action action, GetMLTaskRunsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMLTaskRunsRequest
 * class' copy constructor.
 */
GetMLTaskRunsRequestPrivate::GetMLTaskRunsRequestPrivate(
    const GetMLTaskRunsRequestPrivate &other, GetMLTaskRunsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
