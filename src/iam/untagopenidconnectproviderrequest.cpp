// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagopenidconnectproviderrequest.h"
#include "untagopenidconnectproviderrequest_p.h"
#include "untagopenidconnectproviderresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UntagOpenIDConnectProviderRequest
 * \brief The UntagOpenIDConnectProviderRequest class provides an interface for Iam UntagOpenIDConnectProvider requests.
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
 * \sa IamClient::untagOpenIDConnectProvider
 */

/*!
 * Constructs a copy of \a other.
 */
UntagOpenIDConnectProviderRequest::UntagOpenIDConnectProviderRequest(const UntagOpenIDConnectProviderRequest &other)
    : IamRequest(new UntagOpenIDConnectProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagOpenIDConnectProviderRequest object.
 */
UntagOpenIDConnectProviderRequest::UntagOpenIDConnectProviderRequest()
    : IamRequest(new UntagOpenIDConnectProviderRequestPrivate(IamRequest::UntagOpenIDConnectProviderAction, this))
{

}

/*!
 * \reimp
 */
bool UntagOpenIDConnectProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagOpenIDConnectProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagOpenIDConnectProviderRequest::response(QNetworkReply * const reply) const
{
    return new UntagOpenIDConnectProviderResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UntagOpenIDConnectProviderRequestPrivate
 * \brief The UntagOpenIDConnectProviderRequestPrivate class provides private implementation for UntagOpenIDConnectProviderRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UntagOpenIDConnectProviderRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UntagOpenIDConnectProviderRequestPrivate::UntagOpenIDConnectProviderRequestPrivate(
    const IamRequest::Action action, UntagOpenIDConnectProviderRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagOpenIDConnectProviderRequest
 * class' copy constructor.
 */
UntagOpenIDConnectProviderRequestPrivate::UntagOpenIDConnectProviderRequestPrivate(
    const UntagOpenIDConnectProviderRequestPrivate &other, UntagOpenIDConnectProviderRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
