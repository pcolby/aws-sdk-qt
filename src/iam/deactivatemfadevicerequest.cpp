// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deactivatemfadevicerequest.h"
#include "deactivatemfadevicerequest_p.h"
#include "deactivatemfadeviceresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeactivateMFADeviceRequest
 * \brief The DeactivateMFADeviceRequest class provides an interface for Iam DeactivateMFADevice requests.
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
 * \class QtAws::Iam::DeactivateMFADeviceRequestPrivate
 * \brief The DeactivateMFADeviceRequestPrivate class provides private implementation for DeactivateMFADeviceRequest.
 * \internal
 *
 * \inmodule QtAwsIam
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

} // namespace Iam
} // namespace QtAws
