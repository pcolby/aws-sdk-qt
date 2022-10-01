// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetpartitionrequest.h"
#include "batchgetpartitionrequest_p.h"
#include "batchgetpartitionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchGetPartitionRequest
 * \brief The BatchGetPartitionRequest class provides an interface for Glue BatchGetPartition requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchGetPartition
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetPartitionRequest::BatchGetPartitionRequest(const BatchGetPartitionRequest &other)
    : GlueRequest(new BatchGetPartitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetPartitionRequest object.
 */
BatchGetPartitionRequest::BatchGetPartitionRequest()
    : GlueRequest(new BatchGetPartitionRequestPrivate(GlueRequest::BatchGetPartitionAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetPartitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetPartitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetPartitionRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetPartitionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::BatchGetPartitionRequestPrivate
 * \brief The BatchGetPartitionRequestPrivate class provides private implementation for BatchGetPartitionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchGetPartitionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
BatchGetPartitionRequestPrivate::BatchGetPartitionRequestPrivate(
    const GlueRequest::Action action, BatchGetPartitionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetPartitionRequest
 * class' copy constructor.
 */
BatchGetPartitionRequestPrivate::BatchGetPartitionRequestPrivate(
    const BatchGetPartitionRequestPrivate &other, BatchGetPartitionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
