// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagmfadevicerequest.h"
#include "untagmfadevicerequest_p.h"
#include "untagmfadeviceresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UntagMFADeviceRequest
 * \brief The UntagMFADeviceRequest class provides an interface for Iam UntagMFADevice requests.
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
 * \sa IamClient::untagMFADevice
 */

/*!
 * Constructs a copy of \a other.
 */
UntagMFADeviceRequest::UntagMFADeviceRequest(const UntagMFADeviceRequest &other)
    : IamRequest(new UntagMFADeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagMFADeviceRequest object.
 */
UntagMFADeviceRequest::UntagMFADeviceRequest()
    : IamRequest(new UntagMFADeviceRequestPrivate(IamRequest::UntagMFADeviceAction, this))
{

}

/*!
 * \reimp
 */
bool UntagMFADeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagMFADeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagMFADeviceRequest::response(QNetworkReply * const reply) const
{
    return new UntagMFADeviceResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UntagMFADeviceRequestPrivate
 * \brief The UntagMFADeviceRequestPrivate class provides private implementation for UntagMFADeviceRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UntagMFADeviceRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UntagMFADeviceRequestPrivate::UntagMFADeviceRequestPrivate(
    const IamRequest::Action action, UntagMFADeviceRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagMFADeviceRequest
 * class' copy constructor.
 */
UntagMFADeviceRequestPrivate::UntagMFADeviceRequestPrivate(
    const UntagMFADeviceRequestPrivate &other, UntagMFADeviceRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
