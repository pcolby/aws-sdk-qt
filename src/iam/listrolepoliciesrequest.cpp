// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listrolepoliciesrequest.h"
#include "listrolepoliciesrequest_p.h"
#include "listrolepoliciesresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListRolePoliciesRequest
 * \brief The ListRolePoliciesRequest class provides an interface for Iam ListRolePolicies requests.
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
 * \sa IamClient::listRolePolicies
 */

/*!
 * Constructs a copy of \a other.
 */
ListRolePoliciesRequest::ListRolePoliciesRequest(const ListRolePoliciesRequest &other)
    : IamRequest(new ListRolePoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRolePoliciesRequest object.
 */
ListRolePoliciesRequest::ListRolePoliciesRequest()
    : IamRequest(new ListRolePoliciesRequestPrivate(IamRequest::ListRolePoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListRolePoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRolePoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRolePoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListRolePoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListRolePoliciesRequestPrivate
 * \brief The ListRolePoliciesRequestPrivate class provides private implementation for ListRolePoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListRolePoliciesRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListRolePoliciesRequestPrivate::ListRolePoliciesRequestPrivate(
    const IamRequest::Action action, ListRolePoliciesRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRolePoliciesRequest
 * class' copy constructor.
 */
ListRolePoliciesRequestPrivate::ListRolePoliciesRequestPrivate(
    const ListRolePoliciesRequestPrivate &other, ListRolePoliciesRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
