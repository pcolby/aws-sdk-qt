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

#include "deletepartitionrequest.h"
#include "deletepartitionrequest_p.h"
#include "deletepartitionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeletePartitionRequest
 * \brief The DeletePartitionRequest class provides an interface for Glue DeletePartition requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::deletePartition
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePartitionRequest::DeletePartitionRequest(const DeletePartitionRequest &other)
    : GlueRequest(new DeletePartitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePartitionRequest object.
 */
DeletePartitionRequest::DeletePartitionRequest()
    : GlueRequest(new DeletePartitionRequestPrivate(GlueRequest::DeletePartitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePartitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePartitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePartitionRequest::response(QNetworkReply * const reply) const
{
    return new DeletePartitionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeletePartitionRequestPrivate
 * \brief The DeletePartitionRequestPrivate class provides private implementation for DeletePartitionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeletePartitionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeletePartitionRequestPrivate::DeletePartitionRequestPrivate(
    const GlueRequest::Action action, DeletePartitionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePartitionRequest
 * class' copy constructor.
 */
DeletePartitionRequestPrivate::DeletePartitionRequestPrivate(
    const DeletePartitionRequestPrivate &other, DeletePartitionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
