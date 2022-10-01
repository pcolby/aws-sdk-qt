// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeclientidfromopenidconnectproviderrequest.h"
#include "removeclientidfromopenidconnectproviderrequest_p.h"
#include "removeclientidfromopenidconnectproviderresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::RemoveClientIDFromOpenIDConnectProviderRequest
 * \brief The RemoveClientIDFromOpenIDConnectProviderRequest class provides an interface for Iam RemoveClientIDFromOpenIDConnectProvider requests.
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
 * \sa IamClient::removeClientIDFromOpenIDConnectProvider
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveClientIDFromOpenIDConnectProviderRequest::RemoveClientIDFromOpenIDConnectProviderRequest(const RemoveClientIDFromOpenIDConnectProviderRequest &other)
    : IamRequest(new RemoveClientIDFromOpenIDConnectProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveClientIDFromOpenIDConnectProviderRequest object.
 */
RemoveClientIDFromOpenIDConnectProviderRequest::RemoveClientIDFromOpenIDConnectProviderRequest()
    : IamRequest(new RemoveClientIDFromOpenIDConnectProviderRequestPrivate(IamRequest::RemoveClientIDFromOpenIDConnectProviderAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveClientIDFromOpenIDConnectProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveClientIDFromOpenIDConnectProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveClientIDFromOpenIDConnectProviderRequest::response(QNetworkReply * const reply) const
{
    return new RemoveClientIDFromOpenIDConnectProviderResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::RemoveClientIDFromOpenIDConnectProviderRequestPrivate
 * \brief The RemoveClientIDFromOpenIDConnectProviderRequestPrivate class provides private implementation for RemoveClientIDFromOpenIDConnectProviderRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a RemoveClientIDFromOpenIDConnectProviderRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
RemoveClientIDFromOpenIDConnectProviderRequestPrivate::RemoveClientIDFromOpenIDConnectProviderRequestPrivate(
    const IamRequest::Action action, RemoveClientIDFromOpenIDConnectProviderRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveClientIDFromOpenIDConnectProviderRequest
 * class' copy constructor.
 */
RemoveClientIDFromOpenIDConnectProviderRequestPrivate::RemoveClientIDFromOpenIDConnectProviderRequestPrivate(
    const RemoveClientIDFromOpenIDConnectProviderRequestPrivate &other, RemoveClientIDFromOpenIDConnectProviderRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
