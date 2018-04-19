/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
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
 *
 * Constructs a DescribeApplicationStateRequestPrivate object for MigrationHub \a action with,
 * public implementation \a q.
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
