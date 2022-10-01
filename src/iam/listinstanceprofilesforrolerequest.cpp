// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinstanceprofilesforrolerequest.h"
#include "listinstanceprofilesforrolerequest_p.h"
#include "listinstanceprofilesforroleresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListInstanceProfilesForRoleRequest
 * \brief The ListInstanceProfilesForRoleRequest class provides an interface for Iam ListInstanceProfilesForRole requests.
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
 * \sa IamClient::listInstanceProfilesForRole
 */

/*!
 * Constructs a copy of \a other.
 */
ListInstanceProfilesForRoleRequest::ListInstanceProfilesForRoleRequest(const ListInstanceProfilesForRoleRequest &other)
    : IamRequest(new ListInstanceProfilesForRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInstanceProfilesForRoleRequest object.
 */
ListInstanceProfilesForRoleRequest::ListInstanceProfilesForRoleRequest()
    : IamRequest(new ListInstanceProfilesForRoleRequestPrivate(IamRequest::ListInstanceProfilesForRoleAction, this))
{

}

/*!
 * \reimp
 */
bool ListInstanceProfilesForRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInstanceProfilesForRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInstanceProfilesForRoleRequest::response(QNetworkReply * const reply) const
{
    return new ListInstanceProfilesForRoleResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListInstanceProfilesForRoleRequestPrivate
 * \brief The ListInstanceProfilesForRoleRequestPrivate class provides private implementation for ListInstanceProfilesForRoleRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListInstanceProfilesForRoleRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListInstanceProfilesForRoleRequestPrivate::ListInstanceProfilesForRoleRequestPrivate(
    const IamRequest::Action action, ListInstanceProfilesForRoleRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInstanceProfilesForRoleRequest
 * class' copy constructor.
 */
ListInstanceProfilesForRoleRequestPrivate::ListInstanceProfilesForRoleRequestPrivate(
    const ListInstanceProfilesForRoleRequestPrivate &other, ListInstanceProfilesForRoleRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
