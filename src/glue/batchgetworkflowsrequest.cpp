// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
