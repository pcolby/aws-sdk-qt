// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrepositoryrequest.h"
#include "createrepositoryrequest_p.h"
#include "createrepositoryresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::CreateRepositoryRequest
 * \brief The CreateRepositoryRequest class provides an interface for EcrPublic CreateRepository requests.
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
 * \sa EcrPublicClient::createRepository
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRepositoryRequest::CreateRepositoryRequest(const CreateRepositoryRequest &other)
    : EcrPublicRequest(new CreateRepositoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRepositoryRequest object.
 */
CreateRepositoryRequest::CreateRepositoryRequest()
    : EcrPublicRequest(new CreateRepositoryRequestPrivate(EcrPublicRequest::CreateRepositoryAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRepositoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRepositoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRepositoryRequest::response(QNetworkReply * const reply) const
{
    return new CreateRepositoryResponse(*this, reply);
}

/*!
 * \class QtAws::EcrPublic::CreateRepositoryRequestPrivate
 * \brief The CreateRepositoryRequestPrivate class provides private implementation for CreateRepositoryRequest.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a CreateRepositoryRequestPrivate object for EcrPublic \a action,
 * with public implementation \a q.
 */
CreateRepositoryRequestPrivate::CreateRepositoryRequestPrivate(
    const EcrPublicRequest::Action action, CreateRepositoryRequest * const q)
    : EcrPublicRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRepositoryRequest
 * class' copy constructor.
 */
CreateRepositoryRequestPrivate::CreateRepositoryRequestPrivate(
    const CreateRepositoryRequestPrivate &other, CreateRepositoryRequest * const q)
    : EcrPublicRequestPrivate(other, q)
{

}

} // namespace EcrPublic
} // namespace QtAws
