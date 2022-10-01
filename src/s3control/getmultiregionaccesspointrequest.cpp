// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmultiregionaccesspointrequest.h"
#include "getmultiregionaccesspointrequest_p.h"
#include "getmultiregionaccesspointresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetMultiRegionAccessPointRequest
 * \brief The GetMultiRegionAccessPointRequest class provides an interface for S3Control GetMultiRegionAccessPoint requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getMultiRegionAccessPoint
 */

/*!
 * Constructs a copy of \a other.
 */
GetMultiRegionAccessPointRequest::GetMultiRegionAccessPointRequest(const GetMultiRegionAccessPointRequest &other)
    : S3ControlRequest(new GetMultiRegionAccessPointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetMultiRegionAccessPointRequest object.
 */
GetMultiRegionAccessPointRequest::GetMultiRegionAccessPointRequest()
    : S3ControlRequest(new GetMultiRegionAccessPointRequestPrivate(S3ControlRequest::GetMultiRegionAccessPointAction, this))
{

}

/*!
 * \reimp
 */
bool GetMultiRegionAccessPointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetMultiRegionAccessPointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetMultiRegionAccessPointRequest::response(QNetworkReply * const reply) const
{
    return new GetMultiRegionAccessPointResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetMultiRegionAccessPointRequestPrivate
 * \brief The GetMultiRegionAccessPointRequestPrivate class provides private implementation for GetMultiRegionAccessPointRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetMultiRegionAccessPointRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetMultiRegionAccessPointRequestPrivate::GetMultiRegionAccessPointRequestPrivate(
    const S3ControlRequest::Action action, GetMultiRegionAccessPointRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetMultiRegionAccessPointRequest
 * class' copy constructor.
 */
GetMultiRegionAccessPointRequestPrivate::GetMultiRegionAccessPointRequestPrivate(
    const GetMultiRegionAccessPointRequestPrivate &other, GetMultiRegionAccessPointRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
