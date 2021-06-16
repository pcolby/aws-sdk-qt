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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
