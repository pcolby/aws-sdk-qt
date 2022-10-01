// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createrepositoryrequest.h"
#include "createrepositoryrequest_p.h"
#include "createrepositoryresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace Ecr {

/*!
 * \class QtAws::Ecr::CreateRepositoryRequest
 * \brief The CreateRepositoryRequest class provides an interface for Ecr CreateRepository requests.
 *
 * \inmodule QtAwsEcr
 *
 *  <fullname>Amazon Elastic Container Registry</fullname>
 * 
 *  Amazon Elastic Container Registry (Amazon ECR) is a managed container image registry service. Customers can use the
 *  familiar Docker CLI, or their preferred client, to push, pull, and manage images. Amazon ECR provides a secure,
 *  scalable, and reliable registry for your Docker or Open Container Initiative (OCI) images. Amazon ECR supports private
 *  repositories with resource-based permissions using IAM so that specific users or Amazon EC2 instances can access
 *  repositories and
 * 
 *  images>
 * 
 *  Amazon ECR has service endpoints in each supported Region. For more information, see <a
 *  href="https://docs.aws.amazon.com/general/latest/gr/ecr.html">Amazon ECR endpoints</a> in the <i>Amazon Web Services
 *  General
 *
 * \sa EcrClient::createRepository
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRepositoryRequest::CreateRepositoryRequest(const CreateRepositoryRequest &other)
    : EcrRequest(new CreateRepositoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRepositoryRequest object.
 */
CreateRepositoryRequest::CreateRepositoryRequest()
    : EcrRequest(new CreateRepositoryRequestPrivate(EcrRequest::CreateRepositoryAction, this))
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
 * \class QtAws::Ecr::CreateRepositoryRequestPrivate
 * \brief The CreateRepositoryRequestPrivate class provides private implementation for CreateRepositoryRequest.
 * \internal
 *
 * \inmodule QtAwsEcr
 */

/*!
 * Constructs a CreateRepositoryRequestPrivate object for Ecr \a action,
 * with public implementation \a q.
 */
CreateRepositoryRequestPrivate::CreateRepositoryRequestPrivate(
    const EcrRequest::Action action, CreateRepositoryRequest * const q)
    : EcrRequestPrivate(action, q)
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
    : EcrRequestPrivate(other, q)
{

}

} // namespace Ecr
} // namespace QtAws
