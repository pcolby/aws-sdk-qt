// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpolicyversionsrequest.h"
#include "listpolicyversionsrequest_p.h"
#include "listpolicyversionsresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListPolicyVersionsRequest
 * \brief The ListPolicyVersionsRequest class provides an interface for Iam ListPolicyVersions requests.
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
 * \sa IamClient::listPolicyVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListPolicyVersionsRequest::ListPolicyVersionsRequest(const ListPolicyVersionsRequest &other)
    : IamRequest(new ListPolicyVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPolicyVersionsRequest object.
 */
ListPolicyVersionsRequest::ListPolicyVersionsRequest()
    : IamRequest(new ListPolicyVersionsRequestPrivate(IamRequest::ListPolicyVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPolicyVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPolicyVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPolicyVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListPolicyVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListPolicyVersionsRequestPrivate
 * \brief The ListPolicyVersionsRequestPrivate class provides private implementation for ListPolicyVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListPolicyVersionsRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListPolicyVersionsRequestPrivate::ListPolicyVersionsRequestPrivate(
    const IamRequest::Action action, ListPolicyVersionsRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPolicyVersionsRequest
 * class' copy constructor.
 */
ListPolicyVersionsRequestPrivate::ListPolicyVersionsRequestPrivate(
    const ListPolicyVersionsRequestPrivate &other, ListPolicyVersionsRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
