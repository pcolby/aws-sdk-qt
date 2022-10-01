// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enableprofilerequest.h"
#include "enableprofilerequest_p.h"
#include "enableprofileresponse.h"
#include "rolesanywhererequest_p.h"

namespace QtAws {
namespace RolesAnywhere {

/*!
 * \class QtAws::RolesAnywhere::EnableProfileRequest
 * \brief The EnableProfileRequest class provides an interface for RolesAnywhere EnableProfile requests.
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
 * \sa RolesAnywhereClient::enableProfile
 */

/*!
 * Constructs a copy of \a other.
 */
EnableProfileRequest::EnableProfileRequest(const EnableProfileRequest &other)
    : RolesAnywhereRequest(new EnableProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableProfileRequest object.
 */
EnableProfileRequest::EnableProfileRequest()
    : RolesAnywhereRequest(new EnableProfileRequestPrivate(RolesAnywhereRequest::EnableProfileAction, this))
{

}

/*!
 * \reimp
 */
bool EnableProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableProfileRequest::response(QNetworkReply * const reply) const
{
    return new EnableProfileResponse(*this, reply);
}

/*!
 * \class QtAws::RolesAnywhere::EnableProfileRequestPrivate
 * \brief The EnableProfileRequestPrivate class provides private implementation for EnableProfileRequest.
 * \internal
 *
 * \inmodule QtAwsRolesAnywhere
 */

/*!
 * Constructs a EnableProfileRequestPrivate object for RolesAnywhere \a action,
 * with public implementation \a q.
 */
EnableProfileRequestPrivate::EnableProfileRequestPrivate(
    const RolesAnywhereRequest::Action action, EnableProfileRequest * const q)
    : RolesAnywhereRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableProfileRequest
 * class' copy constructor.
 */
EnableProfileRequestPrivate::EnableProfileRequestPrivate(
    const EnableProfileRequestPrivate &other, EnableProfileRequest * const q)
    : RolesAnywhereRequestPrivate(other, q)
{

}

} // namespace RolesAnywhere
} // namespace QtAws
