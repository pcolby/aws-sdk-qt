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

#include "deleteaccesskeyrequest.h"
#include "deleteaccesskeyrequest_p.h"
#include "deleteaccesskeyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/*!
 * \class QtAws::IAM::DeleteAccessKeyRequest
 * \brief The DeleteAccessKeyRequest class provides an interface for IAM DeleteAccessKey requests.
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
 * \sa IamClient::deleteAccessKey
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAccessKeyRequest::DeleteAccessKeyRequest(const DeleteAccessKeyRequest &other)
    : IamRequest(new DeleteAccessKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAccessKeyRequest object.
 */
DeleteAccessKeyRequest::DeleteAccessKeyRequest()
    : IamRequest(new DeleteAccessKeyRequestPrivate(IamRequest::DeleteAccessKeyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAccessKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAccessKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAccessKeyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAccessKeyResponse(*this, reply);
}

/*!
 * \class QtAws::IAM::DeleteAccessKeyRequestPrivate
 * \brief The DeleteAccessKeyRequestPrivate class provides private implementation for DeleteAccessKeyRequest.
 * \internal
 *
 * \inmodule QtAwsIAM
 */

/*!
 * Constructs a DeleteAccessKeyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
DeleteAccessKeyRequestPrivate::DeleteAccessKeyRequestPrivate(
    const IamRequest::Action action, DeleteAccessKeyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAccessKeyRequest
 * class' copy constructor.
 */
DeleteAccessKeyRequestPrivate::DeleteAccessKeyRequestPrivate(
    const DeleteAccessKeyRequestPrivate &other, DeleteAccessKeyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
