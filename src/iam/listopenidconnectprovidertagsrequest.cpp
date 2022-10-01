// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listopenidconnectprovidertagsrequest.h"
#include "listopenidconnectprovidertagsrequest_p.h"
#include "listopenidconnectprovidertagsresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListOpenIDConnectProviderTagsRequest
 * \brief The ListOpenIDConnectProviderTagsRequest class provides an interface for Iam ListOpenIDConnectProviderTags requests.
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
 * \sa IamClient::listOpenIDConnectProviderTags
 */

/*!
 * Constructs a copy of \a other.
 */
ListOpenIDConnectProviderTagsRequest::ListOpenIDConnectProviderTagsRequest(const ListOpenIDConnectProviderTagsRequest &other)
    : IamRequest(new ListOpenIDConnectProviderTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOpenIDConnectProviderTagsRequest object.
 */
ListOpenIDConnectProviderTagsRequest::ListOpenIDConnectProviderTagsRequest()
    : IamRequest(new ListOpenIDConnectProviderTagsRequestPrivate(IamRequest::ListOpenIDConnectProviderTagsAction, this))
{

}

/*!
 * \reimp
 */
bool ListOpenIDConnectProviderTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOpenIDConnectProviderTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOpenIDConnectProviderTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListOpenIDConnectProviderTagsResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListOpenIDConnectProviderTagsRequestPrivate
 * \brief The ListOpenIDConnectProviderTagsRequestPrivate class provides private implementation for ListOpenIDConnectProviderTagsRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListOpenIDConnectProviderTagsRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListOpenIDConnectProviderTagsRequestPrivate::ListOpenIDConnectProviderTagsRequestPrivate(
    const IamRequest::Action action, ListOpenIDConnectProviderTagsRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOpenIDConnectProviderTagsRequest
 * class' copy constructor.
 */
ListOpenIDConnectProviderTagsRequestPrivate::ListOpenIDConnectProviderTagsRequestPrivate(
    const ListOpenIDConnectProviderTagsRequestPrivate &other, ListOpenIDConnectProviderTagsRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
