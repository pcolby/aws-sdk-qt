// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagopenidconnectproviderrequest.h"
#include "tagopenidconnectproviderrequest_p.h"
#include "tagopenidconnectproviderresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::TagOpenIDConnectProviderRequest
 * \brief The TagOpenIDConnectProviderRequest class provides an interface for Iam TagOpenIDConnectProvider requests.
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
 * \sa IamClient::tagOpenIDConnectProvider
 */

/*!
 * Constructs a copy of \a other.
 */
TagOpenIDConnectProviderRequest::TagOpenIDConnectProviderRequest(const TagOpenIDConnectProviderRequest &other)
    : IamRequest(new TagOpenIDConnectProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagOpenIDConnectProviderRequest object.
 */
TagOpenIDConnectProviderRequest::TagOpenIDConnectProviderRequest()
    : IamRequest(new TagOpenIDConnectProviderRequestPrivate(IamRequest::TagOpenIDConnectProviderAction, this))
{

}

/*!
 * \reimp
 */
bool TagOpenIDConnectProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagOpenIDConnectProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagOpenIDConnectProviderRequest::response(QNetworkReply * const reply) const
{
    return new TagOpenIDConnectProviderResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::TagOpenIDConnectProviderRequestPrivate
 * \brief The TagOpenIDConnectProviderRequestPrivate class provides private implementation for TagOpenIDConnectProviderRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a TagOpenIDConnectProviderRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
TagOpenIDConnectProviderRequestPrivate::TagOpenIDConnectProviderRequestPrivate(
    const IamRequest::Action action, TagOpenIDConnectProviderRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagOpenIDConnectProviderRequest
 * class' copy constructor.
 */
TagOpenIDConnectProviderRequestPrivate::TagOpenIDConnectProviderRequestPrivate(
    const TagOpenIDConnectProviderRequestPrivate &other, TagOpenIDConnectProviderRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
