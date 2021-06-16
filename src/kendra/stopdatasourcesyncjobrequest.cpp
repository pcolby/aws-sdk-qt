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

#include "stopdatasourcesyncjobrequest.h"
#include "stopdatasourcesyncjobrequest_p.h"
#include "stopdatasourcesyncjobresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::StopDataSourceSyncJobRequest
 * \brief The StopDataSourceSyncJobRequest class provides an interface for kendra StopDataSourceSyncJob requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::stopDataSourceSyncJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopDataSourceSyncJobRequest::StopDataSourceSyncJobRequest(const StopDataSourceSyncJobRequest &other)
    : kendraRequest(new StopDataSourceSyncJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopDataSourceSyncJobRequest object.
 */
StopDataSourceSyncJobRequest::StopDataSourceSyncJobRequest()
    : kendraRequest(new StopDataSourceSyncJobRequestPrivate(kendraRequest::StopDataSourceSyncJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopDataSourceSyncJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopDataSourceSyncJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopDataSourceSyncJobRequest::response(QNetworkReply * const reply) const
{
    return new StopDataSourceSyncJobResponse(*this, reply);
}

/*!
 * \class QtAws::kendra::StopDataSourceSyncJobRequestPrivate
 * \brief The StopDataSourceSyncJobRequestPrivate class provides private implementation for StopDataSourceSyncJobRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a StopDataSourceSyncJobRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
StopDataSourceSyncJobRequestPrivate::StopDataSourceSyncJobRequestPrivate(
    const kendraRequest::Action action, StopDataSourceSyncJobRequest * const q)
    : kendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopDataSourceSyncJobRequest
 * class' copy constructor.
 */
StopDataSourceSyncJobRequestPrivate::StopDataSourceSyncJobRequestPrivate(
    const StopDataSourceSyncJobRequestPrivate &other, StopDataSourceSyncJobRequest * const q)
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
