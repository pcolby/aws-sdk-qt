// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getcrlrequest.h"
#include "getcrlrequest_p.h"
#include "getcrlresponse.h"
#include "rolesanywhererequest_p.h"

namespace QtAws {
namespace RolesAnywhere {

/*!
 * \class QtAws::RolesAnywhere::GetCrlRequest
 * \brief The GetCrlRequest class provides an interface for RolesAnywhere GetCrl requests.
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
 * \sa RolesAnywhereClient::getCrl
 */

/*!
 * Constructs a copy of \a other.
 */
GetCrlRequest::GetCrlRequest(const GetCrlRequest &other)
    : RolesAnywhereRequest(new GetCrlRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetCrlRequest object.
 */
GetCrlRequest::GetCrlRequest()
    : RolesAnywhereRequest(new GetCrlRequestPrivate(RolesAnywhereRequest::GetCrlAction, this))
{

}

/*!
 * \reimp
 */
bool GetCrlRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetCrlResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetCrlRequest::response(QNetworkReply * const reply) const
{
    return new GetCrlResponse(*this, reply);
}

/*!
 * \class QtAws::RolesAnywhere::GetCrlRequestPrivate
 * \brief The GetCrlRequestPrivate class provides private implementation for GetCrlRequest.
 * \internal
 *
 * \inmodule QtAwsRolesAnywhere
 */

/*!
 * Constructs a GetCrlRequestPrivate object for RolesAnywhere \a action,
 * with public implementation \a q.
 */
GetCrlRequestPrivate::GetCrlRequestPrivate(
    const RolesAnywhereRequest::Action action, GetCrlRequest * const q)
    : RolesAnywhereRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetCrlRequest
 * class' copy constructor.
 */
GetCrlRequestPrivate::GetCrlRequestPrivate(
    const GetCrlRequestPrivate &other, GetCrlRequest * const q)
    : RolesAnywhereRequestPrivate(other, q)
{

}

} // namespace RolesAnywhere
} // namespace QtAws
