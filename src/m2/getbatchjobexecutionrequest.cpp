// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbatchjobexecutionrequest.h"
#include "getbatchjobexecutionrequest_p.h"
#include "getbatchjobexecutionresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::GetBatchJobExecutionRequest
 * \brief The GetBatchJobExecutionRequest class provides an interface for M2 GetBatchJobExecution requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::getBatchJobExecution
 */

/*!
 * Constructs a copy of \a other.
 */
GetBatchJobExecutionRequest::GetBatchJobExecutionRequest(const GetBatchJobExecutionRequest &other)
    : M2Request(new GetBatchJobExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBatchJobExecutionRequest object.
 */
GetBatchJobExecutionRequest::GetBatchJobExecutionRequest()
    : M2Request(new GetBatchJobExecutionRequestPrivate(M2Request::GetBatchJobExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool GetBatchJobExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBatchJobExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBatchJobExecutionRequest::response(QNetworkReply * const reply) const
{
    return new GetBatchJobExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::M2::GetBatchJobExecutionRequestPrivate
 * \brief The GetBatchJobExecutionRequestPrivate class provides private implementation for GetBatchJobExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a GetBatchJobExecutionRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
GetBatchJobExecutionRequestPrivate::GetBatchJobExecutionRequestPrivate(
    const M2Request::Action action, GetBatchJobExecutionRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBatchJobExecutionRequest
 * class' copy constructor.
 */
GetBatchJobExecutionRequestPrivate::GetBatchJobExecutionRequestPrivate(
    const GetBatchJobExecutionRequestPrivate &other, GetBatchJobExecutionRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
