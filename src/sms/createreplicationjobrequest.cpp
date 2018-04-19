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

#include "createreplicationjobrequest.h"
#include "createreplicationjobrequest_p.h"
#include "createreplicationjobresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::CreateReplicationJobRequest
 * \brief The CreateReplicationJobRequest class provides an interface for SMS CreateReplicationJob requests.
 *
 * \inmodule QtAwsSMS
 *
 *
 * \sa SMSClient::createReplicationJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateReplicationJobRequest::CreateReplicationJobRequest(const CreateReplicationJobRequest &other)
    : SMSRequest(new CreateReplicationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateReplicationJobRequest object.
 */
CreateReplicationJobRequest::CreateReplicationJobRequest()
    : SMSRequest(new CreateReplicationJobRequestPrivate(SMSRequest::CreateReplicationJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateReplicationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateReplicationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateReplicationJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateReplicationJobResponse(*this, reply);
}

/*!
 * \class QtAws::SMS::CreateReplicationJobRequestPrivate
 * \brief The CreateReplicationJobRequestPrivate class provides private implementation for CreateReplicationJobRequest.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 *
 * Constructs a CreateReplicationJobRequestPrivate object for SMS \a action with,
 * public implementation \a q.
 */
CreateReplicationJobRequestPrivate::CreateReplicationJobRequestPrivate(
    const SMSRequest::Action action, CreateReplicationJobRequest * const q)
    : SMSRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateReplicationJobRequest
 * class' copy constructor.
 */
CreateReplicationJobRequestPrivate::CreateReplicationJobRequestPrivate(
    const CreateReplicationJobRequestPrivate &other, CreateReplicationJobRequest * const q)
    : SMSRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
