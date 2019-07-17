/*
    Copyright 2013-2019 Paul Colby

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

#include "deleteagentrequest.h"
#include "deleteagentrequest_p.h"
#include "deleteagentresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DeleteAgentRequest
 * \brief The DeleteAgentRequest class provides an interface for DataSync DeleteAgent requests.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>AWS DataSync</fullname>
 * 
 *  AWS DataSync is a managed data transfer service that makes it simpler for you to automate moving data between
 *  on-premises storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for AWS DataSync contains documentation for a programming interface that you can use to
 *  manage AWS
 *
 * \sa DataSyncClient::deleteAgent
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAgentRequest::DeleteAgentRequest(const DeleteAgentRequest &other)
    : DataSyncRequest(new DeleteAgentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAgentRequest object.
 */
DeleteAgentRequest::DeleteAgentRequest()
    : DataSyncRequest(new DeleteAgentRequestPrivate(DataSyncRequest::DeleteAgentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAgentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAgentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAgentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAgentResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::DeleteAgentRequestPrivate
 * \brief The DeleteAgentRequestPrivate class provides private implementation for DeleteAgentRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DeleteAgentRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
DeleteAgentRequestPrivate::DeleteAgentRequestPrivate(
    const DataSyncRequest::Action action, DeleteAgentRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAgentRequest
 * class' copy constructor.
 */
DeleteAgentRequestPrivate::DeleteAgentRequestPrivate(
    const DeleteAgentRequestPrivate &other, DeleteAgentRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
