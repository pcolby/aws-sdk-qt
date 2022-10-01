// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinstanceprofiletagsrequest.h"
#include "listinstanceprofiletagsrequest_p.h"
#include "listinstanceprofiletagsresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListInstanceProfileTagsRequest
 * \brief The ListInstanceProfileTagsRequest class provides an interface for Iam ListInstanceProfileTags requests.
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
 * \sa IamClient::listInstanceProfileTags
 */

/*!
 * Constructs a copy of \a other.
 */
ListInstanceProfileTagsRequest::ListInstanceProfileTagsRequest(const ListInstanceProfileTagsRequest &other)
    : IamRequest(new ListInstanceProfileTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInstanceProfileTagsRequest object.
 */
ListInstanceProfileTagsRequest::ListInstanceProfileTagsRequest()
    : IamRequest(new ListInstanceProfileTagsRequestPrivate(IamRequest::ListInstanceProfileTagsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInstanceProfileTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInstanceProfileTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInstanceProfileTagsRequest::response(QNetworkReply * const reply) const
{
    return new ListInstanceProfileTagsResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListInstanceProfileTagsRequestPrivate
 * \brief The ListInstanceProfileTagsRequestPrivate class provides private implementation for ListInstanceProfileTagsRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListInstanceProfileTagsRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListInstanceProfileTagsRequestPrivate::ListInstanceProfileTagsRequestPrivate(
    const IamRequest::Action action, ListInstanceProfileTagsRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInstanceProfileTagsRequest
 * class' copy constructor.
 */
ListInstanceProfileTagsRequestPrivate::ListInstanceProfileTagsRequestPrivate(
    const ListInstanceProfileTagsRequestPrivate &other, ListInstanceProfileTagsRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
