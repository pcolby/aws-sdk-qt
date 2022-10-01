// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprofilerequest.h"
#include "createprofilerequest_p.h"
#include "createprofileresponse.h"
#include "rolesanywhererequest_p.h"

namespace QtAws {
namespace RolesAnywhere {

/*!
 * \class QtAws::RolesAnywhere::CreateProfileRequest
 * \brief The CreateProfileRequest class provides an interface for RolesAnywhere CreateProfile requests.
 *
 * \inmodule QtAwsRolesAnywhere
 *
 *  AWS Identity and Access Management Roles Anywhere provides a secure way for your workloads such as servers, containers,
 *  and applications running outside of AWS to obtain Temporary AWS credentials. Your workloads can use the same IAM
 *  policies and roles that you have configured with native AWS applications to access AWS resources. Using IAM Roles
 *  Anywhere will eliminate the need to manage long term credentials for workloads running outside of
 * 
 *  AWS>
 * 
 *  To use IAM Roles Anywhere customer workloads will need to use X.509 certificates issued by their Certificate Authority
 *  (CA) . The Certificate Authority (CA) needs to be registered with IAM Roles Anywhere as a trust anchor to establish
 *  trust between customer PKI and IAM Roles Anywhere. Customers who do not manage their own PKI system can use AWS
 *  Certificate Manager Private Certificate Authority (ACM PCA) to create a Certificate Authority and use that to establish
 *  trust with IAM Roles
 * 
 *  Anywher>
 * 
 *  This guide describes the IAM rolesanywhere operations that you can call programmatically. For general information about
 *  IAM Roles Anywhere see <a href="https://docs.aws.amazon.com/">https://docs.aws.amazon.com/</a>
 *
 * \sa RolesAnywhereClient::createProfile
 */

/*!
 * Constructs a copy of \a other.
 */
CreateProfileRequest::CreateProfileRequest(const CreateProfileRequest &other)
    : RolesAnywhereRequest(new CreateProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateProfileRequest object.
 */
CreateProfileRequest::CreateProfileRequest()
    : RolesAnywhereRequest(new CreateProfileRequestPrivate(RolesAnywhereRequest::CreateProfileAction, this))
{

}

/*!
 * \reimp
 */
bool CreateProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateProfileResponse(*this, reply);
}

/*!
 * \class QtAws::RolesAnywhere::CreateProfileRequestPrivate
 * \brief The CreateProfileRequestPrivate class provides private implementation for CreateProfileRequest.
 * \internal
 *
 * \inmodule QtAwsRolesAnywhere
 */

/*!
 * Constructs a CreateProfileRequestPrivate object for RolesAnywhere \a action,
 * with public implementation \a q.
 */
CreateProfileRequestPrivate::CreateProfileRequestPrivate(
    const RolesAnywhereRequest::Action action, CreateProfileRequest * const q)
    : RolesAnywhereRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateProfileRequest
 * class' copy constructor.
 */
CreateProfileRequestPrivate::CreateProfileRequestPrivate(
    const CreateProfileRequestPrivate &other, CreateProfileRequest * const q)
    : RolesAnywhereRequestPrivate(other, q)
{

}

} // namespace RolesAnywhere
} // namespace QtAws
