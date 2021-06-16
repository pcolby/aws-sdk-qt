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

#include "describebackupsrequest.h"
#include "describebackupsrequest_p.h"
#include "describebackupsresponse.h"
#include "fsxrequest_p.h"

namespace QtAws {
namespace FSx {

/*!
 * \class QtAws::FSx::DescribeBackupsRequest
 * \brief The DescribeBackupsRequest class provides an interface for FSx DescribeBackups requests.
 *
 * \inmodule QtAwsFSx
 *
 *  Amazon FSx is a fully managed service that makes it easy for storage and application administrators to launch and use
 *  shared file
 *
 * \sa FSxClient::describeBackups
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBackupsRequest::DescribeBackupsRequest(const DescribeBackupsRequest &other)
    : FSxRequest(new DescribeBackupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBackupsRequest object.
 */
DescribeBackupsRequest::DescribeBackupsRequest()
    : FSxRequest(new DescribeBackupsRequestPrivate(FSxRequest::DescribeBackupsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBackupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBackupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBackupsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBackupsResponse(*this, reply);
}

/*!
 * \class QtAws::FSx::DescribeBackupsRequestPrivate
 * \brief The DescribeBackupsRequestPrivate class provides private implementation for DescribeBackupsRequest.
 * \internal
 *
 * \inmodule QtAwsFSx
 */

/*!
 * Constructs a DescribeBackupsRequestPrivate object for FSx \a action,
 * with public implementation \a q.
 */
DescribeBackupsRequestPrivate::DescribeBackupsRequestPrivate(
    const FSxRequest::Action action, DescribeBackupsRequest * const q)
    : FSxRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBackupsRequest
 * class' copy constructor.
 */
DescribeBackupsRequestPrivate::DescribeBackupsRequestPrivate(
    const DescribeBackupsRequestPrivate &other, DescribeBackupsRequest * const q)
    : FSxRequestPrivate(other, q)
{

}

} // namespace FSx
} // namespace QtAws
