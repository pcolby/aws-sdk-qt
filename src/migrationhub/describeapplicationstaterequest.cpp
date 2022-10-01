// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeapplicationstaterequest.h"
#include "describeapplicationstaterequest_p.h"
#include "describeapplicationstateresponse.h"
#include "migrationhubrequest_p.h"

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::DescribeApplicationStateRequest
 * \brief The DescribeApplicationStateRequest class provides an interface for MigrationHub DescribeApplicationState requests.
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
 * \sa MigrationHubClient::describeApplicationState
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeApplicationStateRequest::DescribeApplicationStateRequest(const DescribeApplicationStateRequest &other)
    : MigrationHubRequest(new DescribeApplicationStateRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeApplicationStateRequest object.
 */
DescribeApplicationStateRequest::DescribeApplicationStateRequest()
    : MigrationHubRequest(new DescribeApplicationStateRequestPrivate(MigrationHubRequest::DescribeApplicationStateAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeApplicationStateRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeApplicationStateResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeApplicationStateRequest::response(QNetworkReply * const reply) const
{
    return new DescribeApplicationStateResponse(*this, reply);
}

/*!
 * \class QtAws::MigrationHub::DescribeApplicationStateRequestPrivate
 * \brief The DescribeApplicationStateRequestPrivate class provides private implementation for DescribeApplicationStateRequest.
 * \internal
 *
 * \inmodule QtAwsMigrationHub
 */

/*!
 * Constructs a DescribeApplicationStateRequestPrivate object for MigrationHub \a action,
 * with public implementation \a q.
 */
DescribeApplicationStateRequestPrivate::DescribeApplicationStateRequestPrivate(
    const MigrationHubRequest::Action action, DescribeApplicationStateRequest * const q)
    : MigrationHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeApplicationStateRequest
 * class' copy constructor.
 */
DescribeApplicationStateRequestPrivate::DescribeApplicationStateRequestPrivate(
    const DescribeApplicationStateRequestPrivate &other, DescribeApplicationStateRequest * const q)
    : MigrationHubRequestPrivate(other, q)
{

}

} // namespace MigrationHub
} // namespace QtAws
