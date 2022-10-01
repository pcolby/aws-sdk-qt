// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listusersrequest.h"
#include "listusersrequest_p.h"
#include "listusersresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListUsersRequest
 * \brief The ListUsersRequest class provides an interface for Iam ListUsers requests.
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
 * \sa IamClient::listUsers
 */

/*!
 * Constructs a copy of \a other.
 */
ListUsersRequest::ListUsersRequest(const ListUsersRequest &other)
    : IamRequest(new ListUsersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUsersRequest object.
 */
ListUsersRequest::ListUsersRequest()
    : IamRequest(new ListUsersRequestPrivate(IamRequest::ListUsersAction, this))
{

}

/*!
 * \reimp
 */
bool ListUsersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUsersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUsersRequest::response(QNetworkReply * const reply) const
{
    return new ListUsersResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListUsersRequestPrivate
 * \brief The ListUsersRequestPrivate class provides private implementation for ListUsersRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListUsersRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListUsersRequestPrivate::ListUsersRequestPrivate(
    const IamRequest::Action action, ListUsersRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUsersRequest
 * class' copy constructor.
 */
ListUsersRequestPrivate::ListUsersRequestPrivate(
    const ListUsersRequestPrivate &other, ListUsersRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
