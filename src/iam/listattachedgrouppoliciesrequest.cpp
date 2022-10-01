// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listattachedgrouppoliciesrequest.h"
#include "listattachedgrouppoliciesrequest_p.h"
#include "listattachedgrouppoliciesresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListAttachedGroupPoliciesRequest
 * \brief The ListAttachedGroupPoliciesRequest class provides an interface for Iam ListAttachedGroupPolicies requests.
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
 * \sa IamClient::listAttachedGroupPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
ListAttachedGroupPoliciesRequest::ListAttachedGroupPoliciesRequest(const ListAttachedGroupPoliciesRequest &other)
    : IamRequest(new ListAttachedGroupPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAttachedGroupPoliciesRequest object.
 */
ListAttachedGroupPoliciesRequest::ListAttachedGroupPoliciesRequest()
    : IamRequest(new ListAttachedGroupPoliciesRequestPrivate(IamRequest::ListAttachedGroupPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAttachedGroupPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAttachedGroupPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAttachedGroupPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListAttachedGroupPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListAttachedGroupPoliciesRequestPrivate
 * \brief The ListAttachedGroupPoliciesRequestPrivate class provides private implementation for ListAttachedGroupPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListAttachedGroupPoliciesRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListAttachedGroupPoliciesRequestPrivate::ListAttachedGroupPoliciesRequestPrivate(
    const IamRequest::Action action, ListAttachedGroupPoliciesRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAttachedGroupPoliciesRequest
 * class' copy constructor.
 */
ListAttachedGroupPoliciesRequestPrivate::ListAttachedGroupPoliciesRequestPrivate(
    const ListAttachedGroupPoliciesRequestPrivate &other, ListAttachedGroupPoliciesRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
