// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmultiregionaccesspointpolicystatusrequest.h"
#include "getmultiregionaccesspointpolicystatusrequest_p.h"
#include "getmultiregionaccesspointpolicystatusresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetMultiRegionAccessPointPolicyStatusRequest
 * \brief The GetMultiRegionAccessPointPolicyStatusRequest class provides an interface for S3Control GetMultiRegionAccessPointPolicyStatus requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getMultiRegionAccessPointPolicyStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetMultiRegionAccessPointPolicyStatusRequest::GetMultiRegionAccessPointPolicyStatusRequest(const GetMultiRegionAccessPointPolicyStatusRequest &other)
    : S3ControlRequest(new GetMultiRegionAccessPointPolicyStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMultiRegionAccessPointPolicyStatusRequest object.
 */
GetMultiRegionAccessPointPolicyStatusRequest::GetMultiRegionAccessPointPolicyStatusRequest()
    : S3ControlRequest(new GetMultiRegionAccessPointPolicyStatusRequestPrivate(S3ControlRequest::GetMultiRegionAccessPointPolicyStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetMultiRegionAccessPointPolicyStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMultiRegionAccessPointPolicyStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMultiRegionAccessPointPolicyStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetMultiRegionAccessPointPolicyStatusResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetMultiRegionAccessPointPolicyStatusRequestPrivate
 * \brief The GetMultiRegionAccessPointPolicyStatusRequestPrivate class provides private implementation for GetMultiRegionAccessPointPolicyStatusRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetMultiRegionAccessPointPolicyStatusRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetMultiRegionAccessPointPolicyStatusRequestPrivate::GetMultiRegionAccessPointPolicyStatusRequestPrivate(
    const S3ControlRequest::Action action, GetMultiRegionAccessPointPolicyStatusRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMultiRegionAccessPointPolicyStatusRequest
 * class' copy constructor.
 */
GetMultiRegionAccessPointPolicyStatusRequestPrivate::GetMultiRegionAccessPointPolicyStatusRequestPrivate(
    const GetMultiRegionAccessPointPolicyStatusRequestPrivate &other, GetMultiRegionAccessPointPolicyStatusRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
