// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listattacheduserpoliciesrequest.h"
#include "listattacheduserpoliciesrequest_p.h"
#include "listattacheduserpoliciesresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListAttachedUserPoliciesRequest
 * \brief The ListAttachedUserPoliciesRequest class provides an interface for Iam ListAttachedUserPolicies requests.
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
 * \sa IamClient::listAttachedUserPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
ListAttachedUserPoliciesRequest::ListAttachedUserPoliciesRequest(const ListAttachedUserPoliciesRequest &other)
    : IamRequest(new ListAttachedUserPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListAttachedUserPoliciesRequest object.
 */
ListAttachedUserPoliciesRequest::ListAttachedUserPoliciesRequest()
    : IamRequest(new ListAttachedUserPoliciesRequestPrivate(IamRequest::ListAttachedUserPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListAttachedUserPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListAttachedUserPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListAttachedUserPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListAttachedUserPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListAttachedUserPoliciesRequestPrivate
 * \brief The ListAttachedUserPoliciesRequestPrivate class provides private implementation for ListAttachedUserPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListAttachedUserPoliciesRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListAttachedUserPoliciesRequestPrivate::ListAttachedUserPoliciesRequestPrivate(
    const IamRequest::Action action, ListAttachedUserPoliciesRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListAttachedUserPoliciesRequest
 * class' copy constructor.
 */
ListAttachedUserPoliciesRequestPrivate::ListAttachedUserPoliciesRequestPrivate(
    const ListAttachedUserPoliciesRequestPrivate &other, ListAttachedUserPoliciesRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
