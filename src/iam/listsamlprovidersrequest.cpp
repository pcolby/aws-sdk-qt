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

#include "listsamlprovidersrequest.h"
#include "listsamlprovidersrequest_p.h"
#include "listsamlprovidersresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::ListSAMLProvidersRequest
 * \brief The ListSAMLProvidersRequest class provides an interface for IAM ListSAMLProviders requests.
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
 * \sa IamClient::listSAMLProviders
 */

/*!
 * Constructs a copy of \a other.
 */
ListSAMLProvidersRequest::ListSAMLProvidersRequest(const ListSAMLProvidersRequest &other)
    : IamRequest(new ListSAMLProvidersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSAMLProvidersRequest object.
 */
ListSAMLProvidersRequest::ListSAMLProvidersRequest()
    : IamRequest(new ListSAMLProvidersRequestPrivate(IamRequest::ListSAMLProvidersAction, this))
{

}

/*!
 * \reimp
 */
bool ListSAMLProvidersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSAMLProvidersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSAMLProvidersRequest::response(QNetworkReply * const reply) const
{
    return new ListSAMLProvidersResponse(*this, reply);
}

/*!
 * \class QtAws::IAM::ListSAMLProvidersRequestPrivate
 * \brief The ListSAMLProvidersRequestPrivate class provides private implementation for ListSAMLProvidersRequest.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a ListSAMLProvidersRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
ListSAMLProvidersRequestPrivate::ListSAMLProvidersRequestPrivate(
    const IamRequest::Action action, ListSAMLProvidersRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSAMLProvidersRequest
 * class' copy constructor.
 */
ListSAMLProvidersRequestPrivate::ListSAMLProvidersRequestPrivate(
    const ListSAMLProvidersRequestPrivate &other, ListSAMLProvidersRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
