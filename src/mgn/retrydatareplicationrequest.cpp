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

#include "retrydatareplicationrequest.h"
#include "retrydatareplicationrequest_p.h"
#include "retrydatareplicationresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::RetryDataReplicationRequest
 * \brief The RetryDataReplicationRequest class provides an interface for mgn RetryDataReplication requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::retryDataReplication
 */

/*!
 * Constructs a copy of \a other.
 */
RetryDataReplicationRequest::RetryDataReplicationRequest(const RetryDataReplicationRequest &other)
    : mgnRequest(new RetryDataReplicationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RetryDataReplicationRequest object.
 */
RetryDataReplicationRequest::RetryDataReplicationRequest()
    : mgnRequest(new RetryDataReplicationRequestPrivate(mgnRequest::RetryDataReplicationAction, this))
{

}

/*!
 * \reimp
 */
bool RetryDataReplicationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RetryDataReplicationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RetryDataReplicationRequest::response(QNetworkReply * const reply) const
{
    return new RetryDataReplicationResponse(*this, reply);
}

/*!
 * \class QtAws::mgn::RetryDataReplicationRequestPrivate
 * \brief The RetryDataReplicationRequestPrivate class provides private implementation for RetryDataReplicationRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a RetryDataReplicationRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
RetryDataReplicationRequestPrivate::RetryDataReplicationRequestPrivate(
    const mgnRequest::Action action, RetryDataReplicationRequest * const q)
    : mgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RetryDataReplicationRequest
 * class' copy constructor.
 */
RetryDataReplicationRequestPrivate::RetryDataReplicationRequestPrivate(
    const RetryDataReplicationRequestPrivate &other, RetryDataReplicationRequest * const q)
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
