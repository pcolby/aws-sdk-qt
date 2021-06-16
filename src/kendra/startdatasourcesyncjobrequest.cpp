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

#include "startdatasourcesyncjobrequest.h"
#include "startdatasourcesyncjobrequest_p.h"
#include "startdatasourcesyncjobresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace kendra {

/*!
 * \class QtAws::kendra::StartDataSourceSyncJobRequest
 * \brief The StartDataSourceSyncJobRequest class provides an interface for kendra StartDataSourceSyncJob requests.
 *
 * \inmodule QtAwskendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa kendraClient::startDataSourceSyncJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartDataSourceSyncJobRequest::StartDataSourceSyncJobRequest(const StartDataSourceSyncJobRequest &other)
    : kendraRequest(new StartDataSourceSyncJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartDataSourceSyncJobRequest object.
 */
StartDataSourceSyncJobRequest::StartDataSourceSyncJobRequest()
    : kendraRequest(new StartDataSourceSyncJobRequestPrivate(kendraRequest::StartDataSourceSyncJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartDataSourceSyncJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartDataSourceSyncJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartDataSourceSyncJobRequest::response(QNetworkReply * const reply) const
{
    return new StartDataSourceSyncJobResponse(*this, reply);
}

/*!
 * \class QtAws::kendra::StartDataSourceSyncJobRequestPrivate
 * \brief The StartDataSourceSyncJobRequestPrivate class provides private implementation for StartDataSourceSyncJobRequest.
 * \internal
 *
 * \inmodule QtAwskendra
 */

/*!
 * Constructs a StartDataSourceSyncJobRequestPrivate object for kendra \a action,
 * with public implementation \a q.
 */
StartDataSourceSyncJobRequestPrivate::StartDataSourceSyncJobRequestPrivate(
    const kendraRequest::Action action, StartDataSourceSyncJobRequest * const q)
    : kendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartDataSourceSyncJobRequest
 * class' copy constructor.
 */
StartDataSourceSyncJobRequestPrivate::StartDataSourceSyncJobRequestPrivate(
    const StartDataSourceSyncJobRequestPrivate &other, StartDataSourceSyncJobRequest * const q)
    : kendraRequestPrivate(other, q)
{

}

} // namespace kendra
} // namespace QtAws
