// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsshpublickeyrequest.h"
#include "getsshpublickeyrequest_p.h"
#include "getsshpublickeyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetSSHPublicKeyRequest
 * \brief The GetSSHPublicKeyRequest class provides an interface for Iam GetSSHPublicKey requests.
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
 * \sa IamClient::getSSHPublicKey
 */

/*!
 * Constructs a copy of \a other.
 */
GetSSHPublicKeyRequest::GetSSHPublicKeyRequest(const GetSSHPublicKeyRequest &other)
    : IamRequest(new GetSSHPublicKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSSHPublicKeyRequest object.
 */
GetSSHPublicKeyRequest::GetSSHPublicKeyRequest()
    : IamRequest(new GetSSHPublicKeyRequestPrivate(IamRequest::GetSSHPublicKeyAction, this))
{

}

/*!
 * \reimp
 */
bool GetSSHPublicKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSSHPublicKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSSHPublicKeyRequest::response(QNetworkReply * const reply) const
{
    return new GetSSHPublicKeyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetSSHPublicKeyRequestPrivate
 * \brief The GetSSHPublicKeyRequestPrivate class provides private implementation for GetSSHPublicKeyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetSSHPublicKeyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetSSHPublicKeyRequestPrivate::GetSSHPublicKeyRequestPrivate(
    const IamRequest::Action action, GetSSHPublicKeyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSSHPublicKeyRequest
 * class' copy constructor.
 */
GetSSHPublicKeyRequestPrivate::GetSSHPublicKeyRequestPrivate(
    const GetSSHPublicKeyRequestPrivate &other, GetSSHPublicKeyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
