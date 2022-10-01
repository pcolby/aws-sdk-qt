// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
