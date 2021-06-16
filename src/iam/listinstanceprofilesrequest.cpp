/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "listinstanceprofilesrequest.h"
#include "listinstanceprofilesrequest_p.h"
#include "listinstanceprofilesresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::ListInstanceProfilesRequest
 * \brief The ListInstanceProfilesRequest class provides an interface for IAM ListInstanceProfiles requests.
 *
 * \inmodule QtAwsIAM
 *
 *  <fullname>AWS Identity and Access Management</fullname>
 * 
 *  AWS Identity and Access Management (IAM) is a web service for securely controlling access to AWS services. With IAM, you
 *  can centrally manage users, security credentials such as access keys, and permissions that control which AWS resources
 *  users and applications can access. For more information about IAM, see <a href="http://aws.amazon.com/iam/">AWS Identity
 *  and Access Management (IAM)</a> and the <a href="https://docs.aws.amazon.com/IAM/latest/UserGuide/">AWS Identity and
 *  Access Management User
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
 * \class QtAws::IAM::ListInstanceProfilesRequestPrivate
 * \brief The ListInstanceProfilesRequestPrivate class provides private implementation for ListInstanceProfilesRequest.
 * \internal
 *
 * \inmodule QtAwsIAM
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

} // namespace IAM
} // namespace QtAws
