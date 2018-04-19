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

#include "deletereplicationjobrequest.h"
#include "deletereplicationjobrequest_p.h"
#include "deletereplicationjobresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::DeleteReplicationJobRequest
 * \brief The DeleteReplicationJobRequest class provides an interface for SMS DeleteReplicationJob requests.
 *
 * \inmodule QtAwsSMS
 *
 *
 * \sa SMSClient::deleteReplicationJob
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteReplicationJobRequest::DeleteReplicationJobRequest(const DeleteReplicationJobRequest &other)
    : SMSRequest(new DeleteReplicationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteReplicationJobRequest object.
 */
DeleteReplicationJobRequest::DeleteReplicationJobRequest()
    : SMSRequest(new DeleteReplicationJobRequestPrivate(SMSRequest::DeleteReplicationJobAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteReplicationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteReplicationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteReplicationJobRequest::response(QNetworkReply * const reply) const
{
    return new DeleteReplicationJobResponse(*this, reply);
}

/*!
 * \class QtAws::SMS::DeleteReplicationJobRequestPrivate
 * \brief The DeleteReplicationJobRequestPrivate class provides private implementation for DeleteReplicationJobRequest.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 *
 * Constructs a DeleteReplicationJobRequestPrivate object for SMS \a action with,
 * public implementation \a q.
 */
DeleteReplicationJobRequestPrivate::DeleteReplicationJobRequestPrivate(
    const SMSRequest::Action action, DeleteReplicationJobRequest * const q)
    : SMSRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteReplicationJobRequest
 * class' copy constructor.
 */
DeleteReplicationJobRequestPrivate::DeleteReplicationJobRequestPrivate(
    const DeleteReplicationJobRequestPrivate &other, DeleteReplicationJobRequest * const q)
    : SMSRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
