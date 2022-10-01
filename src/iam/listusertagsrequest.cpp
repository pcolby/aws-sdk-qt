// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listusertagsrequest.h"
#include "listusertagsrequest_p.h"
#include "listusertagsresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListUserTagsRequest
 * \brief The ListUserTagsRequest class provides an interface for Iam ListUserTags requests.
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
 * \sa IamClient::listUserTags
 */

/*!
 * Constructs a copy of \a other.
 */
ListUserTagsRequest::ListUserTagsRequest(const ListUserTagsRequest &other)
    : IamRequest(new ListUserTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUserTagsRequest object.
 */
ListUserTagsRequest::ListUserTagsRequest()
    : IamRequest(new ListUserTagsRequestPrivate(IamRequest::ListUserTagsAction, this))
{

}

/*!
 * \reimp
 */
bool ListUserTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUserTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUserTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListUserTagsResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListUserTagsRequestPrivate
 * \brief The ListUserTagsRequestPrivate class provides private implementation for ListUserTagsRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListUserTagsRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListUserTagsRequestPrivate::ListUserTagsRequestPrivate(
    const IamRequest::Action action, ListUserTagsRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUserTagsRequest
 * class' copy constructor.
 */
ListUserTagsRequestPrivate::ListUserTagsRequestPrivate(
    const ListUserTagsRequestPrivate &other, ListUserTagsRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
