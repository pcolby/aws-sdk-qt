// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatesshpublickeyrequest.h"
#include "updatesshpublickeyrequest_p.h"
#include "updatesshpublickeyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UpdateSSHPublicKeyRequest
 * \brief The UpdateSSHPublicKeyRequest class provides an interface for Iam UpdateSSHPublicKey requests.
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
 * \sa IamClient::updateSSHPublicKey
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateSSHPublicKeyRequest::UpdateSSHPublicKeyRequest(const UpdateSSHPublicKeyRequest &other)
    : IamRequest(new UpdateSSHPublicKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateSSHPublicKeyRequest object.
 */
UpdateSSHPublicKeyRequest::UpdateSSHPublicKeyRequest()
    : IamRequest(new UpdateSSHPublicKeyRequestPrivate(IamRequest::UpdateSSHPublicKeyAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateSSHPublicKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateSSHPublicKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateSSHPublicKeyRequest::response(QNetworkReply * const reply) const
{
    return new UpdateSSHPublicKeyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UpdateSSHPublicKeyRequestPrivate
 * \brief The UpdateSSHPublicKeyRequestPrivate class provides private implementation for UpdateSSHPublicKeyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UpdateSSHPublicKeyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UpdateSSHPublicKeyRequestPrivate::UpdateSSHPublicKeyRequestPrivate(
    const IamRequest::Action action, UpdateSSHPublicKeyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateSSHPublicKeyRequest
 * class' copy constructor.
 */
UpdateSSHPublicKeyRequestPrivate::UpdateSSHPublicKeyRequestPrivate(
    const UpdateSSHPublicKeyRequestPrivate &other, UpdateSSHPublicKeyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
