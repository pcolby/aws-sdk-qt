/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
 *
 * Constructs a BatchCreatePartitionRequestPrivate object for Glue \a action with,
 * public implementation \a q.
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
