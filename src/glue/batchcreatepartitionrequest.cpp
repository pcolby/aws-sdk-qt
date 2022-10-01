// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchcreatepartitionrequest.h"
#include "batchcreatepartitionrequest_p.h"
#include "batchcreatepartitionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchCreatePartitionRequest
 * \brief The BatchCreatePartitionRequest class provides an interface for Glue BatchCreatePartition requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::batchCreatePartition
 */

/*!
 * Constructs a copy of \a other.
 */
BatchCreatePartitionRequest::BatchCreatePartitionRequest(const BatchCreatePartitionRequest &other)
    : GlueRequest(new BatchCreatePartitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchCreatePartitionRequest object.
 */
BatchCreatePartitionRequest::BatchCreatePartitionRequest()
    : GlueRequest(new BatchCreatePartitionRequestPrivate(GlueRequest::BatchCreatePartitionAction, this))
{

}

/*!
 * \reimp
 */
bool BatchCreatePartitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchCreatePartitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchCreatePartitionRequest::response(QNetworkReply * const reply) const
{
    return new BatchCreatePartitionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::BatchCreatePartitionRequestPrivate
 * \brief The BatchCreatePartitionRequestPrivate class provides private implementation for BatchCreatePartitionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchCreatePartitionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
BatchCreatePartitionRequestPrivate::BatchCreatePartitionRequestPrivate(
    const GlueRequest::Action action, BatchCreatePartitionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchCreatePartitionRequest
 * class' copy constructor.
 */
BatchCreatePartitionRequestPrivate::BatchCreatePartitionRequestPrivate(
    const BatchCreatePartitionRequestPrivate &other, BatchCreatePartitionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
