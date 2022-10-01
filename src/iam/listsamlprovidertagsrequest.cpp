// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsamlprovidertagsrequest.h"
#include "listsamlprovidertagsrequest_p.h"
#include "listsamlprovidertagsresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListSAMLProviderTagsRequest
 * \brief The ListSAMLProviderTagsRequest class provides an interface for Iam ListSAMLProviderTags requests.
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
 * \sa IamClient::listSAMLProviderTags
 */

/*!
 * Constructs a copy of \a other.
 */
ListSAMLProviderTagsRequest::ListSAMLProviderTagsRequest(const ListSAMLProviderTagsRequest &other)
    : IamRequest(new ListSAMLProviderTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSAMLProviderTagsRequest object.
 */
ListSAMLProviderTagsRequest::ListSAMLProviderTagsRequest()
    : IamRequest(new ListSAMLProviderTagsRequestPrivate(IamRequest::ListSAMLProviderTagsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSAMLProviderTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSAMLProviderTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSAMLProviderTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListSAMLProviderTagsResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListSAMLProviderTagsRequestPrivate
 * \brief The ListSAMLProviderTagsRequestPrivate class provides private implementation for ListSAMLProviderTagsRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListSAMLProviderTagsRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListSAMLProviderTagsRequestPrivate::ListSAMLProviderTagsRequestPrivate(
    const IamRequest::Action action, ListSAMLProviderTagsRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSAMLProviderTagsRequest
 * class' copy constructor.
 */
ListSAMLProviderTagsRequestPrivate::ListSAMLProviderTagsRequestPrivate(
    const ListSAMLProviderTagsRequestPrivate &other, ListSAMLProviderTagsRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
