// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepartitionindexrequest.h"
#include "deletepartitionindexrequest_p.h"
#include "deletepartitionindexresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeletePartitionIndexRequest
 * \brief The DeletePartitionIndexRequest class provides an interface for Glue DeletePartitionIndex requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deletePartitionIndex
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePartitionIndexRequest::DeletePartitionIndexRequest(const DeletePartitionIndexRequest &other)
    : GlueRequest(new DeletePartitionIndexRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePartitionIndexRequest object.
 */
DeletePartitionIndexRequest::DeletePartitionIndexRequest()
    : GlueRequest(new DeletePartitionIndexRequestPrivate(GlueRequest::DeletePartitionIndexAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePartitionIndexRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePartitionIndexResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePartitionIndexRequest::response(QNetworkReply * const reply) const
{
    return new DeletePartitionIndexResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeletePartitionIndexRequestPrivate
 * \brief The DeletePartitionIndexRequestPrivate class provides private implementation for DeletePartitionIndexRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeletePartitionIndexRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeletePartitionIndexRequestPrivate::DeletePartitionIndexRequestPrivate(
    const GlueRequest::Action action, DeletePartitionIndexRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePartitionIndexRequest
 * class' copy constructor.
 */
DeletePartitionIndexRequestPrivate::DeletePartitionIndexRequestPrivate(
    const DeletePartitionIndexRequestPrivate &other, DeletePartitionIndexRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
