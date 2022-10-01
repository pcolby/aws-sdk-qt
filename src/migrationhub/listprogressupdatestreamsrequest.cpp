// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprogressupdatestreamsrequest.h"
#include "listprogressupdatestreamsrequest_p.h"
#include "listprogressupdatestreamsresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::ListProgressUpdateStreamsRequest
 * \brief The ListProgressUpdateStreamsRequest class provides an interface for MigrationHub ListProgressUpdateStreams requests.
 *
 * \inmodule QtAwsMigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration
 * 
 *  Hub>
 * 
 *  Remember that you must set your AWS Migration Hub home region before you call any of these APIs, or a
 *  <code>HomeRegionNotSetException</code> error will be returned. Also, you must make the API calls while in your home
 *
 * \sa MigrationHubClient::listProgressUpdateStreams
 */

/*!
 * Constructs a copy of \a other.
 */
ListProgressUpdateStreamsRequest::ListProgressUpdateStreamsRequest(const ListProgressUpdateStreamsRequest &other)
    : MigrationHubRequest(new ListProgressUpdateStreamsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProgressUpdateStreamsRequest object.
 */
ListProgressUpdateStreamsRequest::ListProgressUpdateStreamsRequest()
    : MigrationHubRequest(new ListProgressUpdateStreamsRequestPrivate(MigrationHubRequest::ListProgressUpdateStreamsAction, this))
{

}

/*!
 * \reimp
 */
bool ListProgressUpdateStreamsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProgressUpdateStreamsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProgressUpdateStreamsRequest::response(QNetworkReply * const reply) const
{
    return new ListProgressUpdateStreamsResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHub::ListProgressUpdateStreamsRequestPrivate
 * \brief The ListProgressUpdateStreamsRequestPrivate class provides private implementation for ListProgressUpdateStreamsRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a ListProgressUpdateStreamsRequestPrivate object for MigrationHub \a action,
 * with public implementation \a q.
 */
ListProgressUpdateStreamsRequestPrivate::ListProgressUpdateStreamsRequestPrivate(
    const MigrationHubRequest::Action action, ListProgressUpdateStreamsRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProgressUpdateStreamsRequest
 * class' copy constructor.
 */
ListProgressUpdateStreamsRequestPrivate::ListProgressUpdateStreamsRequestPrivate(
    const ListProgressUpdateStreamsRequestPrivate &other, ListProgressUpdateStreamsRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
