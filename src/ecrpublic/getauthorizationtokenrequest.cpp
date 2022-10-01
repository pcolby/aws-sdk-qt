// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getauthorizationtokenrequest.h"
#include "getauthorizationtokenrequest_p.h"
#include "getauthorizationtokenresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::GetAuthorizationTokenRequest
 * \brief The GetAuthorizationTokenRequest class provides an interface for EcrPublic GetAuthorizationToken requests.
 *
 * \inmodule QtAwsEcrPublic
 *
 *  <fullname>Amazon Elastic Container Registry Public</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Amazon ECR provides both
 *  public and private registries to host your container images. You can use the familiar Docker CLI, or their preferred
 *  client, to push, pull, and manage images. Amazon ECR provides a secure, scalable, and reliable registry for your Docker
 *  or Open Container Initiative (OCI) images. Amazon ECR supports public repositories with this API. For information about
 *  the Amazon ECR API for private repositories, see <a
 *  href="https://docs.aws.amazon.com/AmazonECR/latest/APIReference/Welcome.html">Amazon Elastic Container Registry API
 *
 * \sa EcrPublicClient::getAuthorizationToken
 */

/*!
 * Constructs a copy of \a other.
 */
GetAuthorizationTokenRequest::GetAuthorizationTokenRequest(const GetAuthorizationTokenRequest &other)
    : EcrPublicRequest(new GetAuthorizationTokenRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAuthorizationTokenRequest object.
 */
GetAuthorizationTokenRequest::GetAuthorizationTokenRequest()
    : EcrPublicRequest(new GetAuthorizationTokenRequestPrivate(EcrPublicRequest::GetAuthorizationTokenAction, this))
{

}

/*!
 * \reimp
 */
bool GetAuthorizationTokenRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAuthorizationTokenResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAuthorizationTokenRequest::response(QNetworkReply * const reply) const
{
    return new GetAuthorizationTokenResponse(*this, reply);
}

/*!
 * \class QtAws::EcrPublic::GetAuthorizationTokenRequestPrivate
 * \brief The GetAuthorizationTokenRequestPrivate class provides private implementation for GetAuthorizationTokenRequest.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a GetAuthorizationTokenRequestPrivate object for EcrPublic \a action,
 * with public implementation \a q.
 */
GetAuthorizationTokenRequestPrivate::GetAuthorizationTokenRequestPrivate(
    const EcrPublicRequest::Action action, GetAuthorizationTokenRequest * const q)
    : EcrPublicRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAuthorizationTokenRequest
 * class' copy constructor.
 */
GetAuthorizationTokenRequestPrivate::GetAuthorizationTokenRequestPrivate(
    const GetAuthorizationTokenRequestPrivate &other, GetAuthorizationTokenRequest * const q)
    : EcrPublicRequestPrivate(other, q)
{

}

} // namespace EcrPublic
} // namespace QtAws
