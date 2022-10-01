// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteaccesspointrequest.h"
#include "deleteaccesspointrequest_p.h"
#include "deleteaccesspointresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteAccessPointRequest
 * \brief The DeleteAccessPointRequest class provides an interface for S3Control DeleteAccessPoint requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteAccessPoint
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAccessPointRequest::DeleteAccessPointRequest(const DeleteAccessPointRequest &other)
    : S3ControlRequest(new DeleteAccessPointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAccessPointRequest object.
 */
DeleteAccessPointRequest::DeleteAccessPointRequest()
    : S3ControlRequest(new DeleteAccessPointRequestPrivate(S3ControlRequest::DeleteAccessPointAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAccessPointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAccessPointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAccessPointRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAccessPointResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::DeleteAccessPointRequestPrivate
 * \brief The DeleteAccessPointRequestPrivate class provides private implementation for DeleteAccessPointRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteAccessPointRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
DeleteAccessPointRequestPrivate::DeleteAccessPointRequestPrivate(
    const S3ControlRequest::Action action, DeleteAccessPointRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAccessPointRequest
 * class' copy constructor.
 */
DeleteAccessPointRequestPrivate::DeleteAccessPointRequestPrivate(
    const DeleteAccessPointRequestPrivate &other, DeleteAccessPointRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
