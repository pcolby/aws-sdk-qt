// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startdatasourcesyncjobrequest.h"
#include "startdatasourcesyncjobrequest_p.h"
#include "startdatasourcesyncjobresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::StartDataSourceSyncJobRequest
 * \brief The StartDataSourceSyncJobRequest class provides an interface for Kendra StartDataSourceSyncJob requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::startDataSourceSyncJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartDataSourceSyncJobRequest::StartDataSourceSyncJobRequest(const StartDataSourceSyncJobRequest &other)
    : KendraRequest(new StartDataSourceSyncJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartDataSourceSyncJobRequest object.
 */
StartDataSourceSyncJobRequest::StartDataSourceSyncJobRequest()
    : KendraRequest(new StartDataSourceSyncJobRequestPrivate(KendraRequest::StartDataSourceSyncJobAction, this))
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
 * \class QtAws::Kendra::StartDataSourceSyncJobRequestPrivate
 * \brief The StartDataSourceSyncJobRequestPrivate class provides private implementation for StartDataSourceSyncJobRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a StartDataSourceSyncJobRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
StartDataSourceSyncJobRequestPrivate::StartDataSourceSyncJobRequestPrivate(
    const KendraRequest::Action action, StartDataSourceSyncJobRequest * const q)
    : KendraRequestPrivate(action, q)
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
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
