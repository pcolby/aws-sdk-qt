// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopdatasourcesyncjobrequest.h"
#include "stopdatasourcesyncjobrequest_p.h"
#include "stopdatasourcesyncjobresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::StopDataSourceSyncJobRequest
 * \brief The StopDataSourceSyncJobRequest class provides an interface for Kendra StopDataSourceSyncJob requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::stopDataSourceSyncJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopDataSourceSyncJobRequest::StopDataSourceSyncJobRequest(const StopDataSourceSyncJobRequest &other)
    : KendraRequest(new StopDataSourceSyncJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopDataSourceSyncJobRequest object.
 */
StopDataSourceSyncJobRequest::StopDataSourceSyncJobRequest()
    : KendraRequest(new StopDataSourceSyncJobRequestPrivate(KendraRequest::StopDataSourceSyncJobAction, this))
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
 * \class QtAws::Kendra::StopDataSourceSyncJobRequestPrivate
 * \brief The StopDataSourceSyncJobRequestPrivate class provides private implementation for StopDataSourceSyncJobRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a StopDataSourceSyncJobRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
StopDataSourceSyncJobRequestPrivate::StopDataSourceSyncJobRequestPrivate(
    const KendraRequest::Action action, StopDataSourceSyncJobRequest * const q)
    : KendraRequestPrivate(action, q)
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
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
