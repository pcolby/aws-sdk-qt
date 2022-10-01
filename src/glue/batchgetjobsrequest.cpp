// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
