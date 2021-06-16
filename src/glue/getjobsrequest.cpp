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

#include "getjobsrequest.h"
#include "getjobsrequest_p.h"
#include "getjobsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetJobsRequest
 * \brief The GetJobsRequest class provides an interface for Glue GetJobs requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getJobs
 */

/*!
 * Constructs a copy of \a other.
 */
GetJobsRequest::GetJobsRequest(const GetJobsRequest &other)
    : GlueRequest(new GetJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetJobsRequest object.
 */
GetJobsRequest::GetJobsRequest()
    : GlueRequest(new GetJobsRequestPrivate(GlueRequest::GetJobsAction, this))
{

}

/*!
 * \reimp
 */
bool GetJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJobsRequest::response(QNetworkReply * const reply) const
{
    return new GetJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetJobsRequestPrivate
 * \brief The GetJobsRequestPrivate class provides private implementation for GetJobsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetJobsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetJobsRequestPrivate::GetJobsRequestPrivate(
    const GlueRequest::Action action, GetJobsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetJobsRequest
 * class' copy constructor.
 */
GetJobsRequestPrivate::GetJobsRequestPrivate(
    const GetJobsRequestPrivate &other, GetJobsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
