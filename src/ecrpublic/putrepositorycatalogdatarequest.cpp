// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putrepositorycatalogdatarequest.h"
#include "putrepositorycatalogdatarequest_p.h"
#include "putrepositorycatalogdataresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::PutRepositoryCatalogDataRequest
 * \brief The PutRepositoryCatalogDataRequest class provides an interface for EcrPublic PutRepositoryCatalogData requests.
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
 * \sa EcrPublicClient::putRepositoryCatalogData
 */

/*!
 * Constructs a copy of \a other.
 */
PutRepositoryCatalogDataRequest::PutRepositoryCatalogDataRequest(const PutRepositoryCatalogDataRequest &other)
    : EcrPublicRequest(new PutRepositoryCatalogDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRepositoryCatalogDataRequest object.
 */
PutRepositoryCatalogDataRequest::PutRepositoryCatalogDataRequest()
    : EcrPublicRequest(new PutRepositoryCatalogDataRequestPrivate(EcrPublicRequest::PutRepositoryCatalogDataAction, this))
{

}

/*!
 * \reimp
 */
bool PutRepositoryCatalogDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRepositoryCatalogDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRepositoryCatalogDataRequest::response(QNetworkReply * const reply) const
{
    return new PutRepositoryCatalogDataResponse(*this, reply);
}

/*!
 * \class QtAws::EcrPublic::PutRepositoryCatalogDataRequestPrivate
 * \brief The PutRepositoryCatalogDataRequestPrivate class provides private implementation for PutRepositoryCatalogDataRequest.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a PutRepositoryCatalogDataRequestPrivate object for EcrPublic \a action,
 * with public implementation \a q.
 */
PutRepositoryCatalogDataRequestPrivate::PutRepositoryCatalogDataRequestPrivate(
    const EcrPublicRequest::Action action, PutRepositoryCatalogDataRequest * const q)
    : EcrPublicRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRepositoryCatalogDataRequest
 * class' copy constructor.
 */
PutRepositoryCatalogDataRequestPrivate::PutRepositoryCatalogDataRequestPrivate(
    const PutRepositoryCatalogDataRequestPrivate &other, PutRepositoryCatalogDataRequest * const q)
    : EcrPublicRequestPrivate(other, q)
{

}

} // namespace EcrPublic
} // namespace QtAws
