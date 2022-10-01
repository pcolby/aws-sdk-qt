// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createagentrequest.h"
#include "createagentrequest_p.h"
#include "createagentresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CreateAgentRequest
 * \brief The CreateAgentRequest class provides an interface for DataSync CreateAgent requests.
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
 * \sa DataSyncClient::createAgent
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAgentRequest::CreateAgentRequest(const CreateAgentRequest &other)
    : DataSyncRequest(new CreateAgentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAgentRequest object.
 */
CreateAgentRequest::CreateAgentRequest()
    : DataSyncRequest(new CreateAgentRequestPrivate(DataSyncRequest::CreateAgentAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAgentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAgentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAgentRequest::response(QNetworkReply * const reply) const
{
    return new CreateAgentResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::CreateAgentRequestPrivate
 * \brief The CreateAgentRequestPrivate class provides private implementation for CreateAgentRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CreateAgentRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
CreateAgentRequestPrivate::CreateAgentRequestPrivate(
    const DataSyncRequest::Action action, CreateAgentRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAgentRequest
 * class' copy constructor.
 */
CreateAgentRequestPrivate::CreateAgentRequestPrivate(
    const CreateAgentRequestPrivate &other, CreateAgentRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
