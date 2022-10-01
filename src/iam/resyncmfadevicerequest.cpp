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

#include "resyncmfadevicerequest.h"
#include "resyncmfadevicerequest_p.h"
#include "resyncmfadeviceresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ResyncMFADeviceRequest
 * \brief The ResyncMFADeviceRequest class provides an interface for Iam ResyncMFADevice requests.
 *
 * \inmodule QtAwsIam
 *
 *  <fullname>Identity and Access Management</fullname>
 * 
 *  Identity and Access Management (IAM) is a web service for securely controlling access to Amazon Web Services services.
 *  With IAM, you can centrally manage users, security credentials such as access keys, and permissions that control which
 *  Amazon Web Services resources users and applications can access. For more information about IAM, see <a
 *  href="http://aws.amazon.com/iam/">Identity and Access Management (IAM)</a> and the <a
 *  href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">Identity and Access Management User
 *
 * \sa IamClient::resyncMFADevice
 */

/*!
 * Constructs a copy of \a other.
 */
ResyncMFADeviceRequest::ResyncMFADeviceRequest(const ResyncMFADeviceRequest &other)
    : IamRequest(new ResyncMFADeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ResyncMFADeviceRequest object.
 */
ResyncMFADeviceRequest::ResyncMFADeviceRequest()
    : IamRequest(new ResyncMFADeviceRequestPrivate(IamRequest::ResyncMFADeviceAction, this))
{

}

/*!
 * \reimp
 */
bool ResyncMFADeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ResyncMFADeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ResyncMFADeviceRequest::response(QNetworkReply * const reply) const
{
    return new ResyncMFADeviceResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ResyncMFADeviceRequestPrivate
 * \brief The ResyncMFADeviceRequestPrivate class provides private implementation for ResyncMFADeviceRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ResyncMFADeviceRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ResyncMFADeviceRequestPrivate::ResyncMFADeviceRequestPrivate(
    const IamRequest::Action action, ResyncMFADeviceRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ResyncMFADeviceRequest
 * class' copy constructor.
 */
ResyncMFADeviceRequestPrivate::ResyncMFADeviceRequestPrivate(
    const ResyncMFADeviceRequestPrivate &other, ResyncMFADeviceRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
