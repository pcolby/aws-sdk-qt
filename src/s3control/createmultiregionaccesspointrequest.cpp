// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmultiregionaccesspointrequest.h"
#include "createmultiregionaccesspointrequest_p.h"
#include "createmultiregionaccesspointresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::CreateMultiRegionAccessPointRequest
 * \brief The CreateMultiRegionAccessPointRequest class provides an interface for S3Control CreateMultiRegionAccessPoint requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::createMultiRegionAccessPoint
 */

/*!
 * Constructs a copy of \a other.
 */
CreateMultiRegionAccessPointRequest::CreateMultiRegionAccessPointRequest(const CreateMultiRegionAccessPointRequest &other)
    : S3ControlRequest(new CreateMultiRegionAccessPointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateMultiRegionAccessPointRequest object.
 */
CreateMultiRegionAccessPointRequest::CreateMultiRegionAccessPointRequest()
    : S3ControlRequest(new CreateMultiRegionAccessPointRequestPrivate(S3ControlRequest::CreateMultiRegionAccessPointAction, this))
{

}

/*!
 * \reimp
 */
bool CreateMultiRegionAccessPointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateMultiRegionAccessPointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateMultiRegionAccessPointRequest::response(QNetworkReply * const reply) const
{
    return new CreateMultiRegionAccessPointResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::CreateMultiRegionAccessPointRequestPrivate
 * \brief The CreateMultiRegionAccessPointRequestPrivate class provides private implementation for CreateMultiRegionAccessPointRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a CreateMultiRegionAccessPointRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
CreateMultiRegionAccessPointRequestPrivate::CreateMultiRegionAccessPointRequestPrivate(
    const S3ControlRequest::Action action, CreateMultiRegionAccessPointRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateMultiRegionAccessPointRequest
 * class' copy constructor.
 */
CreateMultiRegionAccessPointRequestPrivate::CreateMultiRegionAccessPointRequestPrivate(
    const CreateMultiRegionAccessPointRequestPrivate &other, CreateMultiRegionAccessPointRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
