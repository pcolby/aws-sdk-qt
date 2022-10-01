// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setrepositorypolicyrequest.h"
#include "setrepositorypolicyrequest_p.h"
#include "setrepositorypolicyresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::SetRepositoryPolicyRequest
 * \brief The SetRepositoryPolicyRequest class provides an interface for EcrPublic SetRepositoryPolicy requests.
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
 * \sa EcrPublicClient::setRepositoryPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
SetRepositoryPolicyRequest::SetRepositoryPolicyRequest(const SetRepositoryPolicyRequest &other)
    : EcrPublicRequest(new SetRepositoryPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetRepositoryPolicyRequest object.
 */
SetRepositoryPolicyRequest::SetRepositoryPolicyRequest()
    : EcrPublicRequest(new SetRepositoryPolicyRequestPrivate(EcrPublicRequest::SetRepositoryPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool SetRepositoryPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetRepositoryPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetRepositoryPolicyRequest::response(QNetworkReply * const reply) const
{
    return new SetRepositoryPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::EcrPublic::SetRepositoryPolicyRequestPrivate
 * \brief The SetRepositoryPolicyRequestPrivate class provides private implementation for SetRepositoryPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a SetRepositoryPolicyRequestPrivate object for EcrPublic \a action,
 * with public implementation \a q.
 */
SetRepositoryPolicyRequestPrivate::SetRepositoryPolicyRequestPrivate(
    const EcrPublicRequest::Action action, SetRepositoryPolicyRequest * const q)
    : EcrPublicRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetRepositoryPolicyRequest
 * class' copy constructor.
 */
SetRepositoryPolicyRequestPrivate::SetRepositoryPolicyRequestPrivate(
    const SetRepositoryPolicyRequestPrivate &other, SetRepositoryPolicyRequest * const q)
    : EcrPublicRequestPrivate(other, q)
{

}

} // namespace EcrPublic
} // namespace QtAws
