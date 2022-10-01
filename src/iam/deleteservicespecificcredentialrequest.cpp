// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteservicespecificcredentialrequest.h"
#include "deleteservicespecificcredentialrequest_p.h"
#include "deleteservicespecificcredentialresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::DeleteServiceSpecificCredentialRequest
 * \brief The DeleteServiceSpecificCredentialRequest class provides an interface for Iam DeleteServiceSpecificCredential requests.
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
 * \sa IamClient::deleteServiceSpecificCredential
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteServiceSpecificCredentialRequest::DeleteServiceSpecificCredentialRequest(const DeleteServiceSpecificCredentialRequest &other)
    : IamRequest(new DeleteServiceSpecificCredentialRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteServiceSpecificCredentialRequest object.
 */
DeleteServiceSpecificCredentialRequest::DeleteServiceSpecificCredentialRequest()
    : IamRequest(new DeleteServiceSpecificCredentialRequestPrivate(IamRequest::DeleteServiceSpecificCredentialAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteServiceSpecificCredentialRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteServiceSpecificCredentialResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteServiceSpecificCredentialRequest::response(QNetworkReply * const reply) const
{
    return new DeleteServiceSpecificCredentialResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::DeleteServiceSpecificCredentialRequestPrivate
 * \brief The DeleteServiceSpecificCredentialRequestPrivate class provides private implementation for DeleteServiceSpecificCredentialRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a DeleteServiceSpecificCredentialRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
DeleteServiceSpecificCredentialRequestPrivate::DeleteServiceSpecificCredentialRequestPrivate(
    const IamRequest::Action action, DeleteServiceSpecificCredentialRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteServiceSpecificCredentialRequest
 * class' copy constructor.
 */
DeleteServiceSpecificCredentialRequestPrivate::DeleteServiceSpecificCredentialRequestPrivate(
    const DeleteServiceSpecificCredentialRequestPrivate &other, DeleteServiceSpecificCredentialRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
