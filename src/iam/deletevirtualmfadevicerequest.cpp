// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevirtualmfadevicerequest.h"
#include "deletevirtualmfadevicerequest_p.h"
#include "deletevirtualmfadeviceresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteVirtualMFADeviceRequest
 * \brief The DeleteVirtualMFADeviceRequest class provides an interface for Iam DeleteVirtualMFADevice requests.
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
 * \sa IamClient::deleteVirtualMFADevice
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVirtualMFADeviceRequest::DeleteVirtualMFADeviceRequest(const DeleteVirtualMFADeviceRequest &other)
    : IamRequest(new DeleteVirtualMFADeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVirtualMFADeviceRequest object.
 */
DeleteVirtualMFADeviceRequest::DeleteVirtualMFADeviceRequest()
    : IamRequest(new DeleteVirtualMFADeviceRequestPrivate(IamRequest::DeleteVirtualMFADeviceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVirtualMFADeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVirtualMFADeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVirtualMFADeviceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVirtualMFADeviceResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::DeleteVirtualMFADeviceRequestPrivate
 * \brief The DeleteVirtualMFADeviceRequestPrivate class provides private implementation for DeleteVirtualMFADeviceRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteVirtualMFADeviceRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
DeleteVirtualMFADeviceRequestPrivate::DeleteVirtualMFADeviceRequestPrivate(
    const IamRequest::Action action, DeleteVirtualMFADeviceRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVirtualMFADeviceRequest
 * class' copy constructor.
 */
DeleteVirtualMFADeviceRequestPrivate::DeleteVirtualMFADeviceRequestPrivate(
    const DeleteVirtualMFADeviceRequestPrivate &other, DeleteVirtualMFADeviceRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
