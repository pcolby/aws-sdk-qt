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

#include "describesourceserversrequest.h"
#include "describesourceserversrequest_p.h"
#include "describesourceserversresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::DescribeSourceServersRequest
 * \brief The DescribeSourceServersRequest class provides an interface for mgn DescribeSourceServers requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::describeSourceServers
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSourceServersRequest::DescribeSourceServersRequest(const DescribeSourceServersRequest &other)
    : mgnRequest(new DescribeSourceServersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSourceServersRequest object.
 */
DescribeSourceServersRequest::DescribeSourceServersRequest()
    : mgnRequest(new DescribeSourceServersRequestPrivate(mgnRequest::DescribeSourceServersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSourceServersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSourceServersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSourceServersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSourceServersResponse(*this, reply);
}

/*!
 * \class QtAws::mgn::DescribeSourceServersRequestPrivate
 * \brief The DescribeSourceServersRequestPrivate class provides private implementation for DescribeSourceServersRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a DescribeSourceServersRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
DescribeSourceServersRequestPrivate::DescribeSourceServersRequestPrivate(
    const mgnRequest::Action action, DescribeSourceServersRequest * const q)
    : mgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSourceServersRequest
 * class' copy constructor.
 */
DescribeSourceServersRequestPrivate::DescribeSourceServersRequestPrivate(
    const DescribeSourceServersRequestPrivate &other, DescribeSourceServersRequest * const q)
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
