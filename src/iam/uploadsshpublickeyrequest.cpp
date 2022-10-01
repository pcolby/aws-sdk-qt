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

#include "uploadsshpublickeyrequest.h"
#include "uploadsshpublickeyrequest_p.h"
#include "uploadsshpublickeyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UploadSSHPublicKeyRequest
 * \brief The UploadSSHPublicKeyRequest class provides an interface for Iam UploadSSHPublicKey requests.
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
 * \sa IamClient::uploadSSHPublicKey
 */

/*!
 * Constructs a copy of \a other.
 */
UploadSSHPublicKeyRequest::UploadSSHPublicKeyRequest(const UploadSSHPublicKeyRequest &other)
    : IamRequest(new UploadSSHPublicKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UploadSSHPublicKeyRequest object.
 */
UploadSSHPublicKeyRequest::UploadSSHPublicKeyRequest()
    : IamRequest(new UploadSSHPublicKeyRequestPrivate(IamRequest::UploadSSHPublicKeyAction, this))
{

}

/*!
 * \reimp
 */
bool UploadSSHPublicKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UploadSSHPublicKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UploadSSHPublicKeyRequest::response(QNetworkReply * const reply) const
{
    return new UploadSSHPublicKeyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UploadSSHPublicKeyRequestPrivate
 * \brief The UploadSSHPublicKeyRequestPrivate class provides private implementation for UploadSSHPublicKeyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UploadSSHPublicKeyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UploadSSHPublicKeyRequestPrivate::UploadSSHPublicKeyRequestPrivate(
    const IamRequest::Action action, UploadSSHPublicKeyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UploadSSHPublicKeyRequest
 * class' copy constructor.
 */
UploadSSHPublicKeyRequestPrivate::UploadSSHPublicKeyRequestPrivate(
    const UploadSSHPublicKeyRequestPrivate &other, UploadSSHPublicKeyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
