// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetaccountstatusrequest.h"
#include "batchgetaccountstatusrequest_p.h"
#include "batchgetaccountstatusresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::BatchGetAccountStatusRequest
 * \brief The BatchGetAccountStatusRequest class provides an interface for Inspector2 BatchGetAccountStatus requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::batchGetAccountStatus
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetAccountStatusRequest::BatchGetAccountStatusRequest(const BatchGetAccountStatusRequest &other)
    : Inspector2Request(new BatchGetAccountStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetAccountStatusRequest object.
 */
BatchGetAccountStatusRequest::BatchGetAccountStatusRequest()
    : Inspector2Request(new BatchGetAccountStatusRequestPrivate(Inspector2Request::BatchGetAccountStatusAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetAccountStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetAccountStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetAccountStatusRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetAccountStatusResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::BatchGetAccountStatusRequestPrivate
 * \brief The BatchGetAccountStatusRequestPrivate class provides private implementation for BatchGetAccountStatusRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a BatchGetAccountStatusRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
BatchGetAccountStatusRequestPrivate::BatchGetAccountStatusRequestPrivate(
    const Inspector2Request::Action action, BatchGetAccountStatusRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetAccountStatusRequest
 * class' copy constructor.
 */
BatchGetAccountStatusRequestPrivate::BatchGetAccountStatusRequestPrivate(
    const BatchGetAccountStatusRequestPrivate &other, BatchGetAccountStatusRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
