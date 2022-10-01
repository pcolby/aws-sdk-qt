// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "canceltaskexecutionrequest.h"
#include "canceltaskexecutionrequest_p.h"
#include "canceltaskexecutionresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::CancelTaskExecutionRequest
 * \brief The CancelTaskExecutionRequest class provides an interface for DataSync CancelTaskExecution requests.
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
 * \sa DataSyncClient::cancelTaskExecution
 */

/*!
 * Constructs a copy of \a other.
 */
CancelTaskExecutionRequest::CancelTaskExecutionRequest(const CancelTaskExecutionRequest &other)
    : DataSyncRequest(new CancelTaskExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelTaskExecutionRequest object.
 */
CancelTaskExecutionRequest::CancelTaskExecutionRequest()
    : DataSyncRequest(new CancelTaskExecutionRequestPrivate(DataSyncRequest::CancelTaskExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool CancelTaskExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelTaskExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelTaskExecutionRequest::response(QNetworkReply * const reply) const
{
    return new CancelTaskExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::CancelTaskExecutionRequestPrivate
 * \brief The CancelTaskExecutionRequestPrivate class provides private implementation for CancelTaskExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a CancelTaskExecutionRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
CancelTaskExecutionRequestPrivate::CancelTaskExecutionRequestPrivate(
    const DataSyncRequest::Action action, CancelTaskExecutionRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelTaskExecutionRequest
 * class' copy constructor.
 */
CancelTaskExecutionRequestPrivate::CancelTaskExecutionRequestPrivate(
    const CancelTaskExecutionRequestPrivate &other, CancelTaskExecutionRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
