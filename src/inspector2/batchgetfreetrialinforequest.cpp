// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "batchgetfreetrialinforequest.h"
#include "batchgetfreetrialinforequest_p.h"
#include "batchgetfreetrialinforesponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::BatchGetFreeTrialInfoRequest
 * \brief The BatchGetFreeTrialInfoRequest class provides an interface for Inspector2 BatchGetFreeTrialInfo requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::batchGetFreeTrialInfo
 */

/*!
 * Constructs a copy of \a other.
 */
BatchGetFreeTrialInfoRequest::BatchGetFreeTrialInfoRequest(const BatchGetFreeTrialInfoRequest &other)
    : Inspector2Request(new BatchGetFreeTrialInfoRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchGetFreeTrialInfoRequest object.
 */
BatchGetFreeTrialInfoRequest::BatchGetFreeTrialInfoRequest()
    : Inspector2Request(new BatchGetFreeTrialInfoRequestPrivate(Inspector2Request::BatchGetFreeTrialInfoAction, this))
{

}

/*!
 * \reimp
 */
bool BatchGetFreeTrialInfoRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchGetFreeTrialInfoResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchGetFreeTrialInfoRequest::response(QNetworkReply * const reply) const
{
    return new BatchGetFreeTrialInfoResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::BatchGetFreeTrialInfoRequestPrivate
 * \brief The BatchGetFreeTrialInfoRequestPrivate class provides private implementation for BatchGetFreeTrialInfoRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a BatchGetFreeTrialInfoRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
BatchGetFreeTrialInfoRequestPrivate::BatchGetFreeTrialInfoRequestPrivate(
    const Inspector2Request::Action action, BatchGetFreeTrialInfoRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchGetFreeTrialInfoRequest
 * class' copy constructor.
 */
BatchGetFreeTrialInfoRequestPrivate::BatchGetFreeTrialInfoRequestPrivate(
    const BatchGetFreeTrialInfoRequestPrivate &other, BatchGetFreeTrialInfoRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
