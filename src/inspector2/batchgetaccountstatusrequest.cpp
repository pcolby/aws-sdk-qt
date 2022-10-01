/*
    Copyright 2013-2021 Paul Colby

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
