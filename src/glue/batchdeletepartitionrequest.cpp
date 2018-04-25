/*
    Copyright 2013-2018 Paul Colby

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

#include "batchdeletepartitionrequest.h"
#include "batchdeletepartitionrequest_p.h"
#include "batchdeletepartitionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::BatchDeletePartitionRequest
 * \brief The BatchDeletePartitionRequest class provides an interface for Glue BatchDeletePartition requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::batchDeletePartition
 */

/*!
 * Constructs a copy of \a other.
 */
BatchDeletePartitionRequest::BatchDeletePartitionRequest(const BatchDeletePartitionRequest &other)
    : GlueRequest(new BatchDeletePartitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchDeletePartitionRequest object.
 */
BatchDeletePartitionRequest::BatchDeletePartitionRequest()
    : GlueRequest(new BatchDeletePartitionRequestPrivate(GlueRequest::BatchDeletePartitionAction, this))
{

}

/*!
 * \reimp
 */
bool BatchDeletePartitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchDeletePartitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchDeletePartitionRequest::response(QNetworkReply * const reply) const
{
    return new BatchDeletePartitionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::BatchDeletePartitionRequestPrivate
 * \brief The BatchDeletePartitionRequestPrivate class provides private implementation for BatchDeletePartitionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a BatchDeletePartitionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
BatchDeletePartitionRequestPrivate::BatchDeletePartitionRequestPrivate(
    const GlueRequest::Action action, BatchDeletePartitionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchDeletePartitionRequest
 * class' copy constructor.
 */
BatchDeletePartitionRequestPrivate::BatchDeletePartitionRequestPrivate(
    const BatchDeletePartitionRequestPrivate &other, BatchDeletePartitionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
