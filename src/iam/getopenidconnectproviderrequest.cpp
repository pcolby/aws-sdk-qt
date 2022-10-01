// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getopenidconnectproviderrequest.h"
#include "getopenidconnectproviderrequest_p.h"
#include "getopenidconnectproviderresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::GetOpenIDConnectProviderRequest
 * \brief The GetOpenIDConnectProviderRequest class provides an interface for Iam GetOpenIDConnectProvider requests.
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
 * \sa IamClient::getOpenIDConnectProvider
 */

/*!
 * Constructs a copy of \a other.
 */
GetOpenIDConnectProviderRequest::GetOpenIDConnectProviderRequest(const GetOpenIDConnectProviderRequest &other)
    : IamRequest(new GetOpenIDConnectProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetOpenIDConnectProviderRequest object.
 */
GetOpenIDConnectProviderRequest::GetOpenIDConnectProviderRequest()
    : IamRequest(new GetOpenIDConnectProviderRequestPrivate(IamRequest::GetOpenIDConnectProviderAction, this))
{

}

/*!
 * \reimp
 */
bool GetOpenIDConnectProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetOpenIDConnectProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOpenIDConnectProviderRequest::response(QNetworkReply * const reply) const
{
    return new GetOpenIDConnectProviderResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::GetOpenIDConnectProviderRequestPrivate
 * \brief The GetOpenIDConnectProviderRequestPrivate class provides private implementation for GetOpenIDConnectProviderRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a GetOpenIDConnectProviderRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
GetOpenIDConnectProviderRequestPrivate::GetOpenIDConnectProviderRequestPrivate(
    const IamRequest::Action action, GetOpenIDConnectProviderRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetOpenIDConnectProviderRequest
 * class' copy constructor.
 */
GetOpenIDConnectProviderRequestPrivate::GetOpenIDConnectProviderRequestPrivate(
    const GetOpenIDConnectProviderRequestPrivate &other, GetOpenIDConnectProviderRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
