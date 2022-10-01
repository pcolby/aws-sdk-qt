// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listpolicytagsrequest.h"
#include "listpolicytagsrequest_p.h"
#include "listpolicytagsresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListPolicyTagsRequest
 * \brief The ListPolicyTagsRequest class provides an interface for Iam ListPolicyTags requests.
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
 * \sa IamClient::listPolicyTags
 */

/*!
 * Constructs a copy of \a other.
 */
ListPolicyTagsRequest::ListPolicyTagsRequest(const ListPolicyTagsRequest &other)
    : IamRequest(new ListPolicyTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPolicyTagsRequest object.
 */
ListPolicyTagsRequest::ListPolicyTagsRequest()
    : IamRequest(new ListPolicyTagsRequestPrivate(IamRequest::ListPolicyTagsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPolicyTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPolicyTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPolicyTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListPolicyTagsResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListPolicyTagsRequestPrivate
 * \brief The ListPolicyTagsRequestPrivate class provides private implementation for ListPolicyTagsRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListPolicyTagsRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListPolicyTagsRequestPrivate::ListPolicyTagsRequestPrivate(
    const IamRequest::Action action, ListPolicyTagsRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPolicyTagsRequest
 * class' copy constructor.
 */
ListPolicyTagsRequestPrivate::ListPolicyTagsRequestPrivate(
    const ListPolicyTagsRequestPrivate &other, ListPolicyTagsRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
