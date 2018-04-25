/*
    Copyright 2013-2018 Paul Colby

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

#include "getjobrunsrequest.h"
#include "getjobrunsrequest_p.h"
#include "getjobrunsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetJobRunsRequest
 * \brief The GetJobRunsRequest class provides an interface for Glue GetJobRuns requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getJobRuns
 */

/*!
 * Constructs a copy of \a other.
 */
GetJobRunsRequest::GetJobRunsRequest(const GetJobRunsRequest &other)
    : GlueRequest(new GetJobRunsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetJobRunsRequest object.
 */
GetJobRunsRequest::GetJobRunsRequest()
    : GlueRequest(new GetJobRunsRequestPrivate(GlueRequest::GetJobRunsAction, this))
{

}

/*!
 * \reimp
 */
bool GetJobRunsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetJobRunsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJobRunsRequest::response(QNetworkReply * const reply) const
{
    return new GetJobRunsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetJobRunsRequestPrivate
 * \brief The GetJobRunsRequestPrivate class provides private implementation for GetJobRunsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetJobRunsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetJobRunsRequestPrivate::GetJobRunsRequestPrivate(
    const GlueRequest::Action action, GetJobRunsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetJobRunsRequest
 * class' copy constructor.
 */
GetJobRunsRequestPrivate::GetJobRunsRequestPrivate(
    const GetJobRunsRequestPrivate &other, GetJobRunsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
