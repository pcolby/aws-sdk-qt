// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createaccesskeyrequest.h"
#include "createaccesskeyrequest_p.h"
#include "createaccesskeyresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreateAccessKeyRequest
 * \brief The CreateAccessKeyRequest class provides an interface for Iam CreateAccessKey requests.
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
 * \sa IamClient::createAccessKey
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAccessKeyRequest::CreateAccessKeyRequest(const CreateAccessKeyRequest &other)
    : IamRequest(new CreateAccessKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAccessKeyRequest object.
 */
CreateAccessKeyRequest::CreateAccessKeyRequest()
    : IamRequest(new CreateAccessKeyRequestPrivate(IamRequest::CreateAccessKeyAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAccessKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAccessKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAccessKeyRequest::response(QNetworkReply * const reply) const
{
    return new CreateAccessKeyResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::CreateAccessKeyRequestPrivate
 * \brief The CreateAccessKeyRequestPrivate class provides private implementation for CreateAccessKeyRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreateAccessKeyRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
CreateAccessKeyRequestPrivate::CreateAccessKeyRequestPrivate(
    const IamRequest::Action action, CreateAccessKeyRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAccessKeyRequest
 * class' copy constructor.
 */
CreateAccessKeyRequestPrivate::CreateAccessKeyRequestPrivate(
    const CreateAccessKeyRequestPrivate &other, CreateAccessKeyRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
