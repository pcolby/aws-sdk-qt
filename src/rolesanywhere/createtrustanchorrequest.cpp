// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtrustanchorrequest.h"
#include "createtrustanchorrequest_p.h"
#include "createtrustanchorresponse.h"
#include "rolesanywhererequest_p.h"

namespace QtAws {
namespace RolesAnywhere {

/*!
 * \class QtAws::RolesAnywhere::CreateTrustAnchorRequest
 * \brief The CreateTrustAnchorRequest class provides an interface for RolesAnywhere CreateTrustAnchor requests.
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
 * \sa RolesAnywhereClient::createTrustAnchor
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTrustAnchorRequest::CreateTrustAnchorRequest(const CreateTrustAnchorRequest &other)
    : RolesAnywhereRequest(new CreateTrustAnchorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTrustAnchorRequest object.
 */
CreateTrustAnchorRequest::CreateTrustAnchorRequest()
    : RolesAnywhereRequest(new CreateTrustAnchorRequestPrivate(RolesAnywhereRequest::CreateTrustAnchorAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTrustAnchorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTrustAnchorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTrustAnchorRequest::response(QNetworkReply * const reply) const
{
    return new CreateTrustAnchorResponse(*this, reply);
}

/*!
 * \class QtAws::RolesAnywhere::CreateTrustAnchorRequestPrivate
 * \brief The CreateTrustAnchorRequestPrivate class provides private implementation for CreateTrustAnchorRequest.
 * \internal
 *
 * \inmodule QtAwsRolesAnywhere
 */

/*!
 * Constructs a CreateTrustAnchorRequestPrivate object for RolesAnywhere \a action,
 * with public implementation \a q.
 */
CreateTrustAnchorRequestPrivate::CreateTrustAnchorRequestPrivate(
    const RolesAnywhereRequest::Action action, CreateTrustAnchorRequest * const q)
    : RolesAnywhereRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTrustAnchorRequest
 * class' copy constructor.
 */
CreateTrustAnchorRequestPrivate::CreateTrustAnchorRequestPrivate(
    const CreateTrustAnchorRequestPrivate &other, CreateTrustAnchorRequest * const q)
    : RolesAnywhereRequestPrivate(other, q)
{

}

} // namespace RolesAnywhere
} // namespace QtAws
