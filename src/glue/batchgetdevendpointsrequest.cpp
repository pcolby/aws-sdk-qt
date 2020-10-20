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

#include "batchgetdevendpointsrequest.h"
#include "batchgetdevendpointsrequest_p.h"
#include "batchgetdevendpointsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetDevEndpointsRequest
 * \brief The BatchGetDevEndpointsRequest class provides an interface for Glue BatchGetDevEndpoints requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::batchGetDevEndpoints
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetDevEndpointsRequest::BatchGetDevEndpointsRequest(const BatchGetDevEndpointsRequest &other)
    : GlueRequest(new BatchGetDevEndpointsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetDevEndpointsRequest object.
 */
BatchGetDevEndpointsRequest::BatchGetDevEndpointsRequest()
    : GlueRequest(new BatchGetDevEndpointsRequestPrivate(GlueRequest::BatchGetDevEndpointsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetDevEndpointsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetDevEndpointsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetDevEndpointsRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetDevEndpointsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::BatchGetDevEndpointsRequestPrivate
 * \brief The BatchGetDevEndpointsRequestPrivate class provides private implementation for BatchGetDevEndpointsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetDevEndpointsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
BatchGetDevEndpointsRequestPrivate::BatchGetDevEndpointsRequestPrivate(
    const GlueRequest::Action action, BatchGetDevEndpointsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetDevEndpointsRequest
 * class' copy constructor.
 */
BatchGetDevEndpointsRequestPrivate::BatchGetDevEndpointsRequestPrivate(
    const BatchGetDevEndpointsRequestPrivate &other, BatchGetDevEndpointsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
