// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgroupsforuserrequest.h"
#include "listgroupsforuserrequest_p.h"
#include "listgroupsforuserresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListGroupsForUserRequest
 * \brief The ListGroupsForUserRequest class provides an interface for Iam ListGroupsForUser requests.
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
 * \sa IamClient::listGroupsForUser
 */

/*!
 * Constructs a copy of \a other.
 */
ListGroupsForUserRequest::ListGroupsForUserRequest(const ListGroupsForUserRequest &other)
    : IamRequest(new ListGroupsForUserRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGroupsForUserRequest object.
 */
ListGroupsForUserRequest::ListGroupsForUserRequest()
    : IamRequest(new ListGroupsForUserRequestPrivate(IamRequest::ListGroupsForUserAction, this))
{

}

/*!
 * \reimp
 */
bool ListGroupsForUserRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGroupsForUserResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroupsForUserRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupsForUserResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListGroupsForUserRequestPrivate
 * \brief The ListGroupsForUserRequestPrivate class provides private implementation for ListGroupsForUserRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListGroupsForUserRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListGroupsForUserRequestPrivate::ListGroupsForUserRequestPrivate(
    const IamRequest::Action action, ListGroupsForUserRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGroupsForUserRequest
 * class' copy constructor.
 */
ListGroupsForUserRequestPrivate::ListGroupsForUserRequestPrivate(
    const ListGroupsForUserRequestPrivate &other, ListGroupsForUserRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
