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

#include "describereplicationconfigurationtemplatesrequest.h"
#include "describereplicationconfigurationtemplatesrequest_p.h"
#include "describereplicationconfigurationtemplatesresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::DescribeReplicationConfigurationTemplatesRequest
 * \brief The DescribeReplicationConfigurationTemplatesRequest class provides an interface for mgn DescribeReplicationConfigurationTemplates requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::describeReplicationConfigurationTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeReplicationConfigurationTemplatesRequest::DescribeReplicationConfigurationTemplatesRequest(const DescribeReplicationConfigurationTemplatesRequest &other)
    : mgnRequest(new DescribeReplicationConfigurationTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeReplicationConfigurationTemplatesRequest object.
 */
DescribeReplicationConfigurationTemplatesRequest::DescribeReplicationConfigurationTemplatesRequest()
    : mgnRequest(new DescribeReplicationConfigurationTemplatesRequestPrivate(mgnRequest::DescribeReplicationConfigurationTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeReplicationConfigurationTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeReplicationConfigurationTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeReplicationConfigurationTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new DescribeReplicationConfigurationTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::mgn::DescribeReplicationConfigurationTemplatesRequestPrivate
 * \brief The DescribeReplicationConfigurationTemplatesRequestPrivate class provides private implementation for DescribeReplicationConfigurationTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a DescribeReplicationConfigurationTemplatesRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
DescribeReplicationConfigurationTemplatesRequestPrivate::DescribeReplicationConfigurationTemplatesRequestPrivate(
    const mgnRequest::Action action, DescribeReplicationConfigurationTemplatesRequest * const q)
    : mgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeReplicationConfigurationTemplatesRequest
 * class' copy constructor.
 */
DescribeReplicationConfigurationTemplatesRequestPrivate::DescribeReplicationConfigurationTemplatesRequestPrivate(
    const DescribeReplicationConfigurationTemplatesRequestPrivate &other, DescribeReplicationConfigurationTemplatesRequest * const q)
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
