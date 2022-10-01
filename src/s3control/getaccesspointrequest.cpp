// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getaccesspointrequest.h"
#include "getaccesspointrequest_p.h"
#include "getaccesspointresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetAccessPointRequest
 * \brief The GetAccessPointRequest class provides an interface for S3Control GetAccessPoint requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getAccessPoint
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccessPointRequest::GetAccessPointRequest(const GetAccessPointRequest &other)
    : S3ControlRequest(new GetAccessPointRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccessPointRequest object.
 */
GetAccessPointRequest::GetAccessPointRequest()
    : S3ControlRequest(new GetAccessPointRequestPrivate(S3ControlRequest::GetAccessPointAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccessPointRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccessPointResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccessPointRequest::response(QNetworkReply * const reply) const
{
    return new GetAccessPointResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetAccessPointRequestPrivate
 * \brief The GetAccessPointRequestPrivate class provides private implementation for GetAccessPointRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetAccessPointRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetAccessPointRequestPrivate::GetAccessPointRequestPrivate(
    const S3ControlRequest::Action action, GetAccessPointRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccessPointRequest
 * class' copy constructor.
 */
GetAccessPointRequestPrivate::GetAccessPointRequestPrivate(
    const GetAccessPointRequestPrivate &other, GetAccessPointRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
