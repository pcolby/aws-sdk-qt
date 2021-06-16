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

#include "updatecolumnstatisticsforpartitionrequest.h"
#include "updatecolumnstatisticsforpartitionrequest_p.h"
#include "updatecolumnstatisticsforpartitionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::UpdateColumnStatisticsForPartitionRequest
 * \brief The UpdateColumnStatisticsForPartitionRequest class provides an interface for Glue UpdateColumnStatisticsForPartition requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::updateColumnStatisticsForPartition
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateColumnStatisticsForPartitionRequest::UpdateColumnStatisticsForPartitionRequest(const UpdateColumnStatisticsForPartitionRequest &other)
    : GlueRequest(new UpdateColumnStatisticsForPartitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateColumnStatisticsForPartitionRequest object.
 */
UpdateColumnStatisticsForPartitionRequest::UpdateColumnStatisticsForPartitionRequest()
    : GlueRequest(new UpdateColumnStatisticsForPartitionRequestPrivate(GlueRequest::UpdateColumnStatisticsForPartitionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateColumnStatisticsForPartitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateColumnStatisticsForPartitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateColumnStatisticsForPartitionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateColumnStatisticsForPartitionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::UpdateColumnStatisticsForPartitionRequestPrivate
 * \brief The UpdateColumnStatisticsForPartitionRequestPrivate class provides private implementation for UpdateColumnStatisticsForPartitionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a UpdateColumnStatisticsForPartitionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
UpdateColumnStatisticsForPartitionRequestPrivate::UpdateColumnStatisticsForPartitionRequestPrivate(
    const GlueRequest::Action action, UpdateColumnStatisticsForPartitionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateColumnStatisticsForPartitionRequest
 * class' copy constructor.
 */
UpdateColumnStatisticsForPartitionRequestPrivate::UpdateColumnStatisticsForPartitionRequestPrivate(
    const UpdateColumnStatisticsForPartitionRequestPrivate &other, UpdateColumnStatisticsForPartitionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
