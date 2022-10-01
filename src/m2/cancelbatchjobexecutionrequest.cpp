// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "cancelbatchjobexecutionrequest.h"
#include "cancelbatchjobexecutionrequest_p.h"
#include "cancelbatchjobexecutionresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::CancelBatchJobExecutionRequest
 * \brief The CancelBatchJobExecutionRequest class provides an interface for M2 CancelBatchJobExecution requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::cancelBatchJobExecution
 */

/*!
 * Constructs a copy of \a other.
 */
CancelBatchJobExecutionRequest::CancelBatchJobExecutionRequest(const CancelBatchJobExecutionRequest &other)
    : M2Request(new CancelBatchJobExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CancelBatchJobExecutionRequest object.
 */
CancelBatchJobExecutionRequest::CancelBatchJobExecutionRequest()
    : M2Request(new CancelBatchJobExecutionRequestPrivate(M2Request::CancelBatchJobExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool CancelBatchJobExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CancelBatchJobExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CancelBatchJobExecutionRequest::response(QNetworkReply * const reply) const
{
    return new CancelBatchJobExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::M2::CancelBatchJobExecutionRequestPrivate
 * \brief The CancelBatchJobExecutionRequestPrivate class provides private implementation for CancelBatchJobExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a CancelBatchJobExecutionRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
CancelBatchJobExecutionRequestPrivate::CancelBatchJobExecutionRequestPrivate(
    const M2Request::Action action, CancelBatchJobExecutionRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CancelBatchJobExecutionRequest
 * class' copy constructor.
 */
CancelBatchJobExecutionRequestPrivate::CancelBatchJobExecutionRequestPrivate(
    const CancelBatchJobExecutionRequestPrivate &other, CancelBatchJobExecutionRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
