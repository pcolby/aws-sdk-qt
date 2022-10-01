// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvirtualmfadevicerequest.h"
#include "createvirtualmfadevicerequest_p.h"
#include "createvirtualmfadeviceresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreateVirtualMFADeviceRequest
 * \brief The CreateVirtualMFADeviceRequest class provides an interface for Iam CreateVirtualMFADevice requests.
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
 * \sa IamClient::createVirtualMFADevice
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVirtualMFADeviceRequest::CreateVirtualMFADeviceRequest(const CreateVirtualMFADeviceRequest &other)
    : IamRequest(new CreateVirtualMFADeviceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVirtualMFADeviceRequest object.
 */
CreateVirtualMFADeviceRequest::CreateVirtualMFADeviceRequest()
    : IamRequest(new CreateVirtualMFADeviceRequestPrivate(IamRequest::CreateVirtualMFADeviceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVirtualMFADeviceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVirtualMFADeviceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVirtualMFADeviceRequest::response(QNetworkReply * const reply) const
{
    return new CreateVirtualMFADeviceResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::CreateVirtualMFADeviceRequestPrivate
 * \brief The CreateVirtualMFADeviceRequestPrivate class provides private implementation for CreateVirtualMFADeviceRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreateVirtualMFADeviceRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
CreateVirtualMFADeviceRequestPrivate::CreateVirtualMFADeviceRequestPrivate(
    const IamRequest::Action action, CreateVirtualMFADeviceRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVirtualMFADeviceRequest
 * class' copy constructor.
 */
CreateVirtualMFADeviceRequestPrivate::CreateVirtualMFADeviceRequestPrivate(
    const CreateVirtualMFADeviceRequestPrivate &other, CreateVirtualMFADeviceRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
