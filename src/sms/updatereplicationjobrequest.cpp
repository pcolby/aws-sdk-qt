/*
    Copyright 2013-2018 Paul Colby

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

#include "updatereplicationjobrequest.h"
#include "updatereplicationjobrequest_p.h"
#include "updatereplicationjobresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/*!
 * \class QtAws::SMS::UpdateReplicationJobRequest
 * \brief The UpdateReplicationJobRequest class provides an interface for SMS UpdateReplicationJob requests.
 *
 * \inmodule QtAwsSMS
 *
 *  <fullname>AAWS Sever Migration Service</fullname>
 * 
 *  This is the <i>AWS Sever Migration Service API Reference</i>. It provides descriptions, syntax, and usage examples for
 *  each of the actions and data types for the AWS Sever Migration Service (AWS SMS). The topic for each action shows the
 *  Query API request parameters and the XML response. You can also view the XML request elements in the
 * 
 *  WSDL>
 * 
 *  Alternatively, you can use one of the AWS SDKs to access an API that's tailored to the programming language or platform
 *  that you're using. For more information, see <a href="http://aws.amazon.com/tools/#SDKs">AWS
 * 
 *  SDKs</a>>
 * 
 *  To learn more about the Server Migration Service, see the following
 * 
 *  resources> <ul> <li>
 * 
 *  <a href="https://aws.amazon.com/server-migration-service/">AWS Sever Migration Service product page</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/server-migration-service/latest/userguide/server-migration.html">AWS Sever
 *  Migration Service User Guide</a>
 *
 * \sa SmsClient::updateReplicationJob
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateReplicationJobRequest::UpdateReplicationJobRequest(const UpdateReplicationJobRequest &other)
    : SmsRequest(new UpdateReplicationJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateReplicationJobRequest object.
 */
UpdateReplicationJobRequest::UpdateReplicationJobRequest()
    : SmsRequest(new UpdateReplicationJobRequestPrivate(SmsRequest::UpdateReplicationJobAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateReplicationJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateReplicationJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateReplicationJobRequest::response(QNetworkReply * const reply) const
{
    return new UpdateReplicationJobResponse(*this, reply);
}

/*!
 * \class QtAws::SMS::UpdateReplicationJobRequestPrivate
 * \brief The UpdateReplicationJobRequestPrivate class provides private implementation for UpdateReplicationJobRequest.
 * \internal
 *
 * \inmodule QtAwsSMS
 */

/*!
 * Constructs a UpdateReplicationJobRequestPrivate object for Sms \a action,
 * with public implementation \a q.
 */
UpdateReplicationJobRequestPrivate::UpdateReplicationJobRequestPrivate(
    const SmsRequest::Action action, UpdateReplicationJobRequest * const q)
    : SmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateReplicationJobRequest
 * class' copy constructor.
 */
UpdateReplicationJobRequestPrivate::UpdateReplicationJobRequestPrivate(
    const UpdateReplicationJobRequestPrivate &other, UpdateReplicationJobRequest * const q)
    : SmsRequestPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
