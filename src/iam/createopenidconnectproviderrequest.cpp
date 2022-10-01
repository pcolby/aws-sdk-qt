// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createopenidconnectproviderrequest.h"
#include "createopenidconnectproviderrequest_p.h"
#include "createopenidconnectproviderresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::CreateOpenIDConnectProviderRequest
 * \brief The CreateOpenIDConnectProviderRequest class provides an interface for Iam CreateOpenIDConnectProvider requests.
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
 * \sa IamClient::createOpenIDConnectProvider
 */

/*!
 * Constructs a copy of \a other.
 */
CreateOpenIDConnectProviderRequest::CreateOpenIDConnectProviderRequest(const CreateOpenIDConnectProviderRequest &other)
    : IamRequest(new CreateOpenIDConnectProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateOpenIDConnectProviderRequest object.
 */
CreateOpenIDConnectProviderRequest::CreateOpenIDConnectProviderRequest()
    : IamRequest(new CreateOpenIDConnectProviderRequestPrivate(IamRequest::CreateOpenIDConnectProviderAction, this))
{

}

/*!
 * \reimp
 */
bool CreateOpenIDConnectProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateOpenIDConnectProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateOpenIDConnectProviderRequest::response(QNetworkReply * const reply) const
{
    return new CreateOpenIDConnectProviderResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::CreateOpenIDConnectProviderRequestPrivate
 * \brief The CreateOpenIDConnectProviderRequestPrivate class provides private implementation for CreateOpenIDConnectProviderRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a CreateOpenIDConnectProviderRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
CreateOpenIDConnectProviderRequestPrivate::CreateOpenIDConnectProviderRequestPrivate(
    const IamRequest::Action action, CreateOpenIDConnectProviderRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateOpenIDConnectProviderRequest
 * class' copy constructor.
 */
CreateOpenIDConnectProviderRequestPrivate::CreateOpenIDConnectProviderRequestPrivate(
    const CreateOpenIDConnectProviderRequestPrivate &other, CreateOpenIDConnectProviderRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
