// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describemultiregionaccesspointoperationrequest.h"
#include "describemultiregionaccesspointoperationrequest_p.h"
#include "describemultiregionaccesspointoperationresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DescribeMultiRegionAccessPointOperationRequest
 * \brief The DescribeMultiRegionAccessPointOperationRequest class provides an interface for S3Control DescribeMultiRegionAccessPointOperation requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::describeMultiRegionAccessPointOperation
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeMultiRegionAccessPointOperationRequest::DescribeMultiRegionAccessPointOperationRequest(const DescribeMultiRegionAccessPointOperationRequest &other)
    : S3ControlRequest(new DescribeMultiRegionAccessPointOperationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeMultiRegionAccessPointOperationRequest object.
 */
DescribeMultiRegionAccessPointOperationRequest::DescribeMultiRegionAccessPointOperationRequest()
    : S3ControlRequest(new DescribeMultiRegionAccessPointOperationRequestPrivate(S3ControlRequest::DescribeMultiRegionAccessPointOperationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeMultiRegionAccessPointOperationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeMultiRegionAccessPointOperationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeMultiRegionAccessPointOperationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeMultiRegionAccessPointOperationResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::DescribeMultiRegionAccessPointOperationRequestPrivate
 * \brief The DescribeMultiRegionAccessPointOperationRequestPrivate class provides private implementation for DescribeMultiRegionAccessPointOperationRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DescribeMultiRegionAccessPointOperationRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
DescribeMultiRegionAccessPointOperationRequestPrivate::DescribeMultiRegionAccessPointOperationRequestPrivate(
    const S3ControlRequest::Action action, DescribeMultiRegionAccessPointOperationRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeMultiRegionAccessPointOperationRequest
 * class' copy constructor.
 */
DescribeMultiRegionAccessPointOperationRequestPrivate::DescribeMultiRegionAccessPointOperationRequestPrivate(
    const DescribeMultiRegionAccessPointOperationRequestPrivate &other, DescribeMultiRegionAccessPointOperationRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
