// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "tagsamlproviderrequest.h"
#include "tagsamlproviderrequest_p.h"
#include "tagsamlproviderresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace Iam {

/*!
 * \class QtAws::Iam::TagSAMLProviderRequest
 * \brief The TagSAMLProviderRequest class provides an interface for Iam TagSAMLProvider requests.
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
 * \sa IamClient::tagSAMLProvider
 */

/*!
 * Constructs a copy of \a other.
 */
TagSAMLProviderRequest::TagSAMLProviderRequest(const TagSAMLProviderRequest &other)
    : IamRequest(new TagSAMLProviderRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TagSAMLProviderRequest object.
 */
TagSAMLProviderRequest::TagSAMLProviderRequest()
    : IamRequest(new TagSAMLProviderRequestPrivate(IamRequest::TagSAMLProviderAction, this))
{

}

/*!
 * \reimp
 */
bool TagSAMLProviderRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TagSAMLProviderResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TagSAMLProviderRequest::response(QNetworkReply * const reply) const
{
    return new TagSAMLProviderResponse(*this, reply);
}

/*!
 * \class QtAws::Iam::TagSAMLProviderRequestPrivate
 * \brief The TagSAMLProviderRequestPrivate class provides private implementation for TagSAMLProviderRequest.
 * \internal
 *
 * \inmodule QtAwsIam
 */

/*!
 * Constructs a TagSAMLProviderRequestPrivate object for Iam \a action,
 * with public implementation \a q.
 */
TagSAMLProviderRequestPrivate::TagSAMLProviderRequestPrivate(
    const IamRequest::Action action, TagSAMLProviderRequest * const q)
    : IamRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TagSAMLProviderRequest
 * class' copy constructor.
 */
TagSAMLProviderRequestPrivate::TagSAMLProviderRequestPrivate(
    const TagSAMLProviderRequestPrivate &other, TagSAMLProviderRequest * const q)
    : IamRequestPrivate(other, q)
{

}

} // namespace Iam
} // namespace QtAws
