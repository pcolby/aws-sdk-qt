/*
    Copyright 2013-2020 Paul Colby

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

#include "batchgetjobsrequest.h"
#include "batchgetjobsrequest_p.h"
#include "batchgetjobsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetJobsRequest
 * \brief The BatchGetJobsRequest class provides an interface for Glue BatchGetJobs requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::batchGetJobs
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetJobsRequest::BatchGetJobsRequest(const BatchGetJobsRequest &other)
    : GlueRequest(new BatchGetJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetJobsRequest object.
 */
BatchGetJobsRequest::BatchGetJobsRequest()
    : GlueRequest(new BatchGetJobsRequestPrivate(GlueRequest::BatchGetJobsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetJobsRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::BatchGetJobsRequestPrivate
 * \brief The BatchGetJobsRequestPrivate class provides private implementation for BatchGetJobsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetJobsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
BatchGetJobsRequestPrivate::BatchGetJobsRequestPrivate(
    const GlueRequest::Action action, BatchGetJobsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetJobsRequest
 * class' copy constructor.
 */
BatchGetJobsRequestPrivate::BatchGetJobsRequestPrivate(
    const BatchGetJobsRequestPrivate &other, BatchGetJobsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
