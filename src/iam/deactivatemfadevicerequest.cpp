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

#include "deactivatemfadevicerequest.h"
#include "deactivatemfadevicerequest_p.h"
#include "deactivatemfadeviceresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::DeactivateMFADeviceRequest
 * \brief The DeactivateMFADeviceRequest class provides an interface for IAM DeactivateMFADevice requests.
 *
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service for securely controlling access to AWS services. With IAM, you
 *  can centrally manage users, security credentials such as access keys, and permissions that control which AWS resources
 *  users and applications can access. For more information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity
 *  and Access Management (IAM)</a> and the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">AWS Identity and
 *  Access Management User
 *
 * \sa IamClient::deactivateMFADevice
 */

/*!
 * Constructs a copy of \a other.
 */
DeactivateMFADeviceRequest::DeactivateMFADeviceRequest(const DeactivateMFADeviceRequest &other)
    : IamRequest(new DeactivateMFADeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeactivateMFADeviceRequest object.
 */
DeactivateMFADeviceRequest::DeactivateMFADeviceRequest()
    : IamRequest(new DeactivateMFADeviceRequestPrivate(IamRequest::DeactivateMFADeviceAction, this))
{

}

/*!
 * \reimp
 */
bool DeactivateMFADeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeactivateMFADeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeactivateMFADeviceRequest::response(QNetworkReply * const reply) const
{
    return new DeactivateMFADeviceResponse(*this, reply);
}

/*!
 * \class QtAws::IAM::DeactivateMFADeviceRequestPrivate
 * \brief The DeactivateMFADeviceRequestPrivate class provides private implementation for DeactivateMFADeviceRequest.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a DeactivateMFADeviceRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
DeactivateMFADeviceRequestPrivate::DeactivateMFADeviceRequestPrivate(
    const IamRequest::Action action, DeactivateMFADeviceRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeactivateMFADeviceRequest
 * class' copy constructor.
 */
DeactivateMFADeviceRequestPrivate::DeactivateMFADeviceRequestPrivate(
    const DeactivateMFADeviceRequestPrivate &other, DeactivateMFADeviceRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
