// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listgroupsrequest.h"
#include "listgroupsrequest_p.h"
#include "listgroupsresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListGroupsRequest
 * \brief The ListGroupsRequest class provides an interface for Iam ListGroups requests.
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
 * \sa IamClient::listGroups
 */

/*!
 * Constructs a copy of \a other.
 */
ListGroupsRequest::ListGroupsRequest(const ListGroupsRequest &other)
    : IamRequest(new ListGroupsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGroupsRequest object.
 */
ListGroupsRequest::ListGroupsRequest()
    : IamRequest(new ListGroupsRequestPrivate(IamRequest::ListGroupsAction, this))
{

}

/*!
 * \reimp
 */
bool ListGroupsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGroupsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGroupsRequest::response(QNetworkReply * const reply) const
{
    return new ListGroupsResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListGroupsRequestPrivate
 * \brief The ListGroupsRequestPrivate class provides private implementation for ListGroupsRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListGroupsRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListGroupsRequestPrivate::ListGroupsRequestPrivate(
    const IamRequest::Action action, ListGroupsRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGroupsRequest
 * class' copy constructor.
 */
ListGroupsRequestPrivate::ListGroupsRequestPrivate(
    const ListGroupsRequestPrivate &other, ListGroupsRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
