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

#include "getaccesspointpolicyrequest.h"
#include "getaccesspointpolicyrequest_p.h"
#include "getaccesspointpolicyresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::GetAccessPointPolicyRequest
 * \brief The GetAccessPointPolicyRequest class provides an interface for S3Control GetAccessPointPolicy requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  Amazon Web Services S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::getAccessPointPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccessPointPolicyRequest::GetAccessPointPolicyRequest(const GetAccessPointPolicyRequest &other)
    : S3ControlRequest(new GetAccessPointPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccessPointPolicyRequest object.
 */
GetAccessPointPolicyRequest::GetAccessPointPolicyRequest()
    : S3ControlRequest(new GetAccessPointPolicyRequestPrivate(S3ControlRequest::GetAccessPointPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccessPointPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccessPointPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccessPointPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetAccessPointPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::GetAccessPointPolicyRequestPrivate
 * \brief The GetAccessPointPolicyRequestPrivate class provides private implementation for GetAccessPointPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a GetAccessPointPolicyRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
GetAccessPointPolicyRequestPrivate::GetAccessPointPolicyRequestPrivate(
    const S3ControlRequest::Action action, GetAccessPointPolicyRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccessPointPolicyRequest
 * class' copy constructor.
 */
GetAccessPointPolicyRequestPrivate::GetAccessPointPolicyRequestPrivate(
    const GetAccessPointPolicyRequestPrivate &other, GetAccessPointPolicyRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
