/*
    Copyright 2013-2021 Paul Colby

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
