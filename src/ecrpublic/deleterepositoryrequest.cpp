// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleterepositoryrequest.h"
#include "deleterepositoryrequest_p.h"
#include "deleterepositoryresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::DeleteRepositoryRequest
 * \brief The DeleteRepositoryRequest class provides an interface for EcrPublic DeleteRepository requests.
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
 * \sa EcrPublicClient::deleteRepository
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRepositoryRequest::DeleteRepositoryRequest(const DeleteRepositoryRequest &other)
    : EcrPublicRequest(new DeleteRepositoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRepositoryRequest object.
 */
DeleteRepositoryRequest::DeleteRepositoryRequest()
    : EcrPublicRequest(new DeleteRepositoryRequestPrivate(EcrPublicRequest::DeleteRepositoryAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRepositoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRepositoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRepositoryRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRepositoryResponse(*this, reply);
}

/*!
 * \class QtAws::EcrPublic::DeleteRepositoryRequestPrivate
 * \brief The DeleteRepositoryRequestPrivate class provides private implementation for DeleteRepositoryRequest.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a DeleteRepositoryRequestPrivate object for EcrPublic \a action,
 * with public implementation \a q.
 */
DeleteRepositoryRequestPrivate::DeleteRepositoryRequestPrivate(
    const EcrPublicRequest::Action action, DeleteRepositoryRequest * const q)
    : EcrPublicRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRepositoryRequest
 * class' copy constructor.
 */
DeleteRepositoryRequestPrivate::DeleteRepositoryRequestPrivate(
    const DeleteRepositoryRequestPrivate &other, DeleteRepositoryRequest * const q)
    : EcrPublicRequestPrivate(other, q)
{

}

} // namespace EcrPublic
} // namespace QtAws
