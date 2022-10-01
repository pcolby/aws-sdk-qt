// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchupdatepartitionrequest.h"
#include "batchupdatepartitionrequest_p.h"
#include "batchupdatepartitionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchUpdatePartitionRequest
 * \brief The BatchUpdatePartitionRequest class provides an interface for Glue BatchUpdatePartition requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchUpdatePartition
 */

/*!
 * Constructs a copy of \a other.
 */
BatchUpdatePartitionRequest::BatchUpdatePartitionRequest(const BatchUpdatePartitionRequest &other)
    : GlueRequest(new BatchUpdatePartitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchUpdatePartitionRequest object.
 */
BatchUpdatePartitionRequest::BatchUpdatePartitionRequest()
    : GlueRequest(new BatchUpdatePartitionRequestPrivate(GlueRequest::BatchUpdatePartitionAction, this))
{

}

/*!
 * \reimp
 */
bool BatchUpdatePartitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchUpdatePartitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchUpdatePartitionRequest::response(QNetworkReply * const reply) const
{
    return new BatchUpdatePartitionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::BatchUpdatePartitionRequestPrivate
 * \brief The BatchUpdatePartitionRequestPrivate class provides private implementation for BatchUpdatePartitionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchUpdatePartitionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
BatchUpdatePartitionRequestPrivate::BatchUpdatePartitionRequestPrivate(
    const GlueRequest::Action action, BatchUpdatePartitionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchUpdatePartitionRequest
 * class' copy constructor.
 */
BatchUpdatePartitionRequestPrivate::BatchUpdatePartitionRequestPrivate(
    const BatchUpdatePartitionRequestPrivate &other, BatchUpdatePartitionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
