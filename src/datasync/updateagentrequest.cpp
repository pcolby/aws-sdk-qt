// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateagentrequest.h"
#include "updateagentrequest_p.h"
#include "updateagentresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::UpdateAgentRequest
 * \brief The UpdateAgentRequest class provides an interface for DataSync UpdateAgent requests.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>DataSync</fullname>
 * 
 *  DataSync is a managed data transfer service that makes it simpler for you to automate moving data between on-premises
 *  storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for DataSync contains documentation for a programming interface that you can use to manage
 *
 * \sa DataSyncClient::updateAgent
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAgentRequest::UpdateAgentRequest(const UpdateAgentRequest &other)
    : DataSyncRequest(new UpdateAgentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAgentRequest object.
 */
UpdateAgentRequest::UpdateAgentRequest()
    : DataSyncRequest(new UpdateAgentRequestPrivate(DataSyncRequest::UpdateAgentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAgentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAgentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAgentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAgentResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::UpdateAgentRequestPrivate
 * \brief The UpdateAgentRequestPrivate class provides private implementation for UpdateAgentRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a UpdateAgentRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
UpdateAgentRequestPrivate::UpdateAgentRequestPrivate(
    const DataSyncRequest::Action action, UpdateAgentRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAgentRequest
 * class' copy constructor.
 */
UpdateAgentRequestPrivate::UpdateAgentRequestPrivate(
    const UpdateAgentRequestPrivate &other, UpdateAgentRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
