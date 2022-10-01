// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listattachedrolepoliciesrequest.h"
#include "listattachedrolepoliciesrequest_p.h"
#include "listattachedrolepoliciesresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListAttachedRolePoliciesRequest
 * \brief The ListAttachedRolePoliciesRequest class provides an interface for Iam ListAttachedRolePolicies requests.
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
 * \sa IamClient::listAttachedRolePolicies
 */

/*!
 * Constructs a copy of \a other.
 */
ListAttachedRolePoliciesRequest::ListAttachedRolePoliciesRequest(const ListAttachedRolePoliciesRequest &other)
    : IamRequest(new ListAttachedRolePoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAttachedRolePoliciesRequest object.
 */
ListAttachedRolePoliciesRequest::ListAttachedRolePoliciesRequest()
    : IamRequest(new ListAttachedRolePoliciesRequestPrivate(IamRequest::ListAttachedRolePoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAttachedRolePoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAttachedRolePoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAttachedRolePoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListAttachedRolePoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListAttachedRolePoliciesRequestPrivate
 * \brief The ListAttachedRolePoliciesRequestPrivate class provides private implementation for ListAttachedRolePoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListAttachedRolePoliciesRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListAttachedRolePoliciesRequestPrivate::ListAttachedRolePoliciesRequestPrivate(
    const IamRequest::Action action, ListAttachedRolePoliciesRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAttachedRolePoliciesRequest
 * class' copy constructor.
 */
ListAttachedRolePoliciesRequestPrivate::ListAttachedRolePoliciesRequestPrivate(
    const ListAttachedRolePoliciesRequestPrivate &other, ListAttachedRolePoliciesRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
