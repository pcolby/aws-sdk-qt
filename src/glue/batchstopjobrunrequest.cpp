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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
