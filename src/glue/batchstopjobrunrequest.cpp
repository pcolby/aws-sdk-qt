// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchstopjobrunrequest.h"
#include "batchstopjobrunrequest_p.h"
#include "batchstopjobrunresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchStopJobRunRequest
 * \brief The BatchStopJobRunRequest class provides an interface for Glue BatchStopJobRun requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchStopJobRun
 */

/*!
 * Constructs a copy of \a other.
 */
BatchStopJobRunRequest::BatchStopJobRunRequest(const BatchStopJobRunRequest &other)
    : GlueRequest(new BatchStopJobRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchStopJobRunRequest object.
 */
BatchStopJobRunRequest::BatchStopJobRunRequest()
    : GlueRequest(new BatchStopJobRunRequestPrivate(GlueRequest::BatchStopJobRunAction, this))
{

}

/*!
 * \reimp
 */
bool BatchStopJobRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchStopJobRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchStopJobRunRequest::response(QNetworkReply * const reply) const
{
    return new BatchStopJobRunResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::BatchStopJobRunRequestPrivate
 * \brief The BatchStopJobRunRequestPrivate class provides private implementation for BatchStopJobRunRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchStopJobRunRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
BatchStopJobRunRequestPrivate::BatchStopJobRunRequestPrivate(
    const GlueRequest::Action action, BatchStopJobRunRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchStopJobRunRequest
 * class' copy constructor.
 */
BatchStopJobRunRequestPrivate::BatchStopJobRunRequestPrivate(
    const BatchStopJobRunRequestPrivate &other, BatchStopJobRunRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
