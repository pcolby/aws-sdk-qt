// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
