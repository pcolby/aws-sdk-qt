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

#include "deletecolumnstatisticsforpartitionrequest.h"
#include "deletecolumnstatisticsforpartitionrequest_p.h"
#include "deletecolumnstatisticsforpartitionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteColumnStatisticsForPartitionRequest
 * \brief The DeleteColumnStatisticsForPartitionRequest class provides an interface for Glue DeleteColumnStatisticsForPartition requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteColumnStatisticsForPartition
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteColumnStatisticsForPartitionRequest::DeleteColumnStatisticsForPartitionRequest(const DeleteColumnStatisticsForPartitionRequest &other)
    : GlueRequest(new DeleteColumnStatisticsForPartitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteColumnStatisticsForPartitionRequest object.
 */
DeleteColumnStatisticsForPartitionRequest::DeleteColumnStatisticsForPartitionRequest()
    : GlueRequest(new DeleteColumnStatisticsForPartitionRequestPrivate(GlueRequest::DeleteColumnStatisticsForPartitionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteColumnStatisticsForPartitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteColumnStatisticsForPartitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteColumnStatisticsForPartitionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteColumnStatisticsForPartitionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteColumnStatisticsForPartitionRequestPrivate
 * \brief The DeleteColumnStatisticsForPartitionRequestPrivate class provides private implementation for DeleteColumnStatisticsForPartitionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteColumnStatisticsForPartitionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteColumnStatisticsForPartitionRequestPrivate::DeleteColumnStatisticsForPartitionRequestPrivate(
    const GlueRequest::Action action, DeleteColumnStatisticsForPartitionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteColumnStatisticsForPartitionRequest
 * class' copy constructor.
 */
DeleteColumnStatisticsForPartitionRequestPrivate::DeleteColumnStatisticsForPartitionRequestPrivate(
    const DeleteColumnStatisticsForPartitionRequestPrivate &other, DeleteColumnStatisticsForPartitionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
