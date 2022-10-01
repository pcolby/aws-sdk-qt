// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "untagsamlproviderrequest.h"
#include "untagsamlproviderrequest_p.h"
#include "untagsamlproviderresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::UntagSAMLProviderRequest
 * \brief The UntagSAMLProviderRequest class provides an interface for Iam UntagSAMLProvider requests.
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
 * \sa IamClient::untagSAMLProvider
 */

/*!
 * Constructs a copy of \a other.
 */
UntagSAMLProviderRequest::UntagSAMLProviderRequest(const UntagSAMLProviderRequest &other)
    : IamRequest(new UntagSAMLProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UntagSAMLProviderRequest object.
 */
UntagSAMLProviderRequest::UntagSAMLProviderRequest()
    : IamRequest(new UntagSAMLProviderRequestPrivate(IamRequest::UntagSAMLProviderAction, this))
{

}

/*!
 * \reimp
 */
bool UntagSAMLProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UntagSAMLProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UntagSAMLProviderRequest::response(QNetworkReply * const reply) const
{
    return new UntagSAMLProviderResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::UntagSAMLProviderRequestPrivate
 * \brief The UntagSAMLProviderRequestPrivate class provides private implementation for UntagSAMLProviderRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a UntagSAMLProviderRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
UntagSAMLProviderRequestPrivate::UntagSAMLProviderRequestPrivate(
    const IamRequest::Action action, UntagSAMLProviderRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UntagSAMLProviderRequest
 * class' copy constructor.
 */
UntagSAMLProviderRequestPrivate::UntagSAMLProviderRequestPrivate(
    const UntagSAMLProviderRequestPrivate &other, UntagSAMLProviderRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
