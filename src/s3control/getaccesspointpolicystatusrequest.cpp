// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccesspointpolicystatusrequest.h"
#include "getaccesspointpolicystatusrequest_p.h"
#include "getaccesspointpolicystatusresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetAccessPointPolicyStatusRequest
 * \brief The GetAccessPointPolicyStatusRequest class provides an interface for S3Control GetAccessPointPolicyStatus requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getAccessPointPolicyStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccessPointPolicyStatusRequest::GetAccessPointPolicyStatusRequest(const GetAccessPointPolicyStatusRequest &other)
    : S3ControlRequest(new GetAccessPointPolicyStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccessPointPolicyStatusRequest object.
 */
GetAccessPointPolicyStatusRequest::GetAccessPointPolicyStatusRequest()
    : S3ControlRequest(new GetAccessPointPolicyStatusRequestPrivate(S3ControlRequest::GetAccessPointPolicyStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccessPointPolicyStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccessPointPolicyStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccessPointPolicyStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetAccessPointPolicyStatusResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetAccessPointPolicyStatusRequestPrivate
 * \brief The GetAccessPointPolicyStatusRequestPrivate class provides private implementation for GetAccessPointPolicyStatusRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetAccessPointPolicyStatusRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetAccessPointPolicyStatusRequestPrivate::GetAccessPointPolicyStatusRequestPrivate(
    const S3ControlRequest::Action action, GetAccessPointPolicyStatusRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccessPointPolicyStatusRequest
 * class' copy constructor.
 */
GetAccessPointPolicyStatusRequestPrivate::GetAccessPointPolicyStatusRequestPrivate(
    const GetAccessPointPolicyStatusRequestPrivate &other, GetAccessPointPolicyStatusRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
