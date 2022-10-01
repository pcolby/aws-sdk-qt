// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsamlproviderrequest.h"
#include "createsamlproviderrequest_p.h"
#include "createsamlproviderresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreateSAMLProviderRequest
 * \brief The CreateSAMLProviderRequest class provides an interface for Iam CreateSAMLProvider requests.
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
 * \sa IamClient::createSAMLProvider
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSAMLProviderRequest::CreateSAMLProviderRequest(const CreateSAMLProviderRequest &other)
    : IamRequest(new CreateSAMLProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSAMLProviderRequest object.
 */
CreateSAMLProviderRequest::CreateSAMLProviderRequest()
    : IamRequest(new CreateSAMLProviderRequestPrivate(IamRequest::CreateSAMLProviderAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSAMLProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSAMLProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSAMLProviderRequest::response(QNetworkReply * const reply) const
{
    return new CreateSAMLProviderResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::CreateSAMLProviderRequestPrivate
 * \brief The CreateSAMLProviderRequestPrivate class provides private implementation for CreateSAMLProviderRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreateSAMLProviderRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
CreateSAMLProviderRequestPrivate::CreateSAMLProviderRequestPrivate(
    const IamRequest::Action action, CreateSAMLProviderRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSAMLProviderRequest
 * class' copy constructor.
 */
CreateSAMLProviderRequestPrivate::CreateSAMLProviderRequestPrivate(
    const CreateSAMLProviderRequestPrivate &other, CreateSAMLProviderRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
