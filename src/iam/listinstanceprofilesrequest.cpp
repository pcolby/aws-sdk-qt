// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listinstanceprofilesrequest.h"
#include "listinstanceprofilesrequest_p.h"
#include "listinstanceprofilesresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::ListInstanceProfilesRequest
 * \brief The ListInstanceProfilesRequest class provides an interface for Iam ListInstanceProfiles requests.
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
 * \sa IamClient::listInstanceProfiles
 */

/*!
 * Constructs a copy of \a other.
 */
ListInstanceProfilesRequest::ListInstanceProfilesRequest(const ListInstanceProfilesRequest &other)
    : IamRequest(new ListInstanceProfilesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInstanceProfilesRequest object.
 */
ListInstanceProfilesRequest::ListInstanceProfilesRequest()
    : IamRequest(new ListInstanceProfilesRequestPrivate(IamRequest::ListInstanceProfilesAction, this))
{

}

/*!
 * \reimp
 */
bool ListInstanceProfilesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInstanceProfilesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInstanceProfilesRequest::response(QNetworkReply * const reply) const
{
    return new ListInstanceProfilesResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::ListInstanceProfilesRequestPrivate
 * \brief The ListInstanceProfilesRequestPrivate class provides private implementation for ListInstanceProfilesRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a ListInstanceProfilesRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListInstanceProfilesRequestPrivate::ListInstanceProfilesRequestPrivate(
    const IamRequest::Action action, ListInstanceProfilesRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInstanceProfilesRequest
 * class' copy constructor.
 */
ListInstanceProfilesRequestPrivate::ListInstanceProfilesRequestPrivate(
    const ListInstanceProfilesRequestPrivate &other, ListInstanceProfilesRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
