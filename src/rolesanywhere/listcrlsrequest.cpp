// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcrlsrequest.h"
#include "listcrlsrequest_p.h"
#include "listcrlsresponse.h"
#include "rolesanywhererequest_p.h"

namespace QtAws {
namespace RolesAnywhere {

/*!
 * \class QtAws::RolesAnywhere::ListCrlsRequest
 * \brief The ListCrlsRequest class provides an interface for RolesAnywhere ListCrls requests.
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
 * \sa RolesAnywhereClient::listCrls
 */

/*!
 * Constructs a copy of \a other.
 */
ListCrlsRequest::ListCrlsRequest(const ListCrlsRequest &other)
    : RolesAnywhereRequest(new ListCrlsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCrlsRequest object.
 */
ListCrlsRequest::ListCrlsRequest()
    : RolesAnywhereRequest(new ListCrlsRequestPrivate(RolesAnywhereRequest::ListCrlsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCrlsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCrlsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCrlsRequest::response(QNetworkReply * const reply) const
{
    return new ListCrlsResponse(*this, reply);
}

/*!
 * \class QtAws::RolesAnywhere::ListCrlsRequestPrivate
 * \brief The ListCrlsRequestPrivate class provides private implementation for ListCrlsRequest.
 * \internal
 *
 * \inmodule QtAwsRolesAnywhere
 */

/*!
 * Constructs a ListCrlsRequestPrivate object for RolesAnywhere \a action,
 * with public implementation \a q.
 */
ListCrlsRequestPrivate::ListCrlsRequestPrivate(
    const RolesAnywhereRequest::Action action, ListCrlsRequest * const q)
    : RolesAnywhereRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCrlsRequest
 * class' copy constructor.
 */
ListCrlsRequestPrivate::ListCrlsRequestPrivate(
    const ListCrlsRequestPrivate &other, ListCrlsRequest * const q)
    : RolesAnywhereRequestPrivate(other, q)
{

}

} // namespace RolesAnywhere
} // namespace QtAws
