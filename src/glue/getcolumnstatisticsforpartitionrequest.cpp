// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcolumnstatisticsforpartitionrequest.h"
#include "getcolumnstatisticsforpartitionrequest_p.h"
#include "getcolumnstatisticsforpartitionresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetColumnStatisticsForPartitionRequest
 * \brief The GetColumnStatisticsForPartitionRequest class provides an interface for Glue GetColumnStatisticsForPartition requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getColumnStatisticsForPartition
 */

/*!
 * Constructs a copy of \a other.
 */
GetColumnStatisticsForPartitionRequest::GetColumnStatisticsForPartitionRequest(const GetColumnStatisticsForPartitionRequest &other)
    : GlueRequest(new GetColumnStatisticsForPartitionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetColumnStatisticsForPartitionRequest object.
 */
GetColumnStatisticsForPartitionRequest::GetColumnStatisticsForPartitionRequest()
    : GlueRequest(new GetColumnStatisticsForPartitionRequestPrivate(GlueRequest::GetColumnStatisticsForPartitionAction, this))
{

}

/*!
 * \reimp
 */
bool GetColumnStatisticsForPartitionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetColumnStatisticsForPartitionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetColumnStatisticsForPartitionRequest::response(QNetworkReply * const reply) const
{
    return new GetColumnStatisticsForPartitionResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetColumnStatisticsForPartitionRequestPrivate
 * \brief The GetColumnStatisticsForPartitionRequestPrivate class provides private implementation for GetColumnStatisticsForPartitionRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetColumnStatisticsForPartitionRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetColumnStatisticsForPartitionRequestPrivate::GetColumnStatisticsForPartitionRequestPrivate(
    const GlueRequest::Action action, GetColumnStatisticsForPartitionRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetColumnStatisticsForPartitionRequest
 * class' copy constructor.
 */
GetColumnStatisticsForPartitionRequestPrivate::GetColumnStatisticsForPartitionRequestPrivate(
    const GetColumnStatisticsForPartitionRequestPrivate &other, GetColumnStatisticsForPartitionRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
