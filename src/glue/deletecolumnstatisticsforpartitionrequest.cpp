// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
