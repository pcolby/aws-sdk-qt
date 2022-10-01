// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemultiregionaccesspointrequest.h"
#include "deletemultiregionaccesspointrequest_p.h"
#include "deletemultiregionaccesspointresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteMultiRegionAccessPointRequest
 * \brief The DeleteMultiRegionAccessPointRequest class provides an interface for S3Control DeleteMultiRegionAccessPoint requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteMultiRegionAccessPoint
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteMultiRegionAccessPointRequest::DeleteMultiRegionAccessPointRequest(const DeleteMultiRegionAccessPointRequest &other)
    : S3ControlRequest(new DeleteMultiRegionAccessPointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteMultiRegionAccessPointRequest object.
 */
DeleteMultiRegionAccessPointRequest::DeleteMultiRegionAccessPointRequest()
    : S3ControlRequest(new DeleteMultiRegionAccessPointRequestPrivate(S3ControlRequest::DeleteMultiRegionAccessPointAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteMultiRegionAccessPointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteMultiRegionAccessPointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteMultiRegionAccessPointRequest::response(QNetworkReply * const reply) const
{
    return new DeleteMultiRegionAccessPointResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::DeleteMultiRegionAccessPointRequestPrivate
 * \brief The DeleteMultiRegionAccessPointRequestPrivate class provides private implementation for DeleteMultiRegionAccessPointRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteMultiRegionAccessPointRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
DeleteMultiRegionAccessPointRequestPrivate::DeleteMultiRegionAccessPointRequestPrivate(
    const S3ControlRequest::Action action, DeleteMultiRegionAccessPointRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteMultiRegionAccessPointRequest
 * class' copy constructor.
 */
DeleteMultiRegionAccessPointRequestPrivate::DeleteMultiRegionAccessPointRequestPrivate(
    const DeleteMultiRegionAccessPointRequestPrivate &other, DeleteMultiRegionAccessPointRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
