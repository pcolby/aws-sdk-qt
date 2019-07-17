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

#include "batchgetworkflowsrequest.h"
#include "batchgetworkflowsrequest_p.h"
#include "batchgetworkflowsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetWorkflowsRequest
 * \brief The BatchGetWorkflowsRequest class provides an interface for Glue BatchGetWorkflows requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::batchGetWorkflows
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetWorkflowsRequest::BatchGetWorkflowsRequest(const BatchGetWorkflowsRequest &other)
    : GlueRequest(new BatchGetWorkflowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetWorkflowsRequest object.
 */
BatchGetWorkflowsRequest::BatchGetWorkflowsRequest()
    : GlueRequest(new BatchGetWorkflowsRequestPrivate(GlueRequest::BatchGetWorkflowsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetWorkflowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetWorkflowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetWorkflowsRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetWorkflowsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::BatchGetWorkflowsRequestPrivate
 * \brief The BatchGetWorkflowsRequestPrivate class provides private implementation for BatchGetWorkflowsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetWorkflowsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
BatchGetWorkflowsRequestPrivate::BatchGetWorkflowsRequestPrivate(
    const GlueRequest::Action action, BatchGetWorkflowsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetWorkflowsRequest
 * class' copy constructor.
 */
BatchGetWorkflowsRequestPrivate::BatchGetWorkflowsRequestPrivate(
    const BatchGetWorkflowsRequestPrivate &other, BatchGetWorkflowsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
