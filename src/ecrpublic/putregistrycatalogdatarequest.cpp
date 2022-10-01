// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putregistrycatalogdatarequest.h"
#include "putregistrycatalogdatarequest_p.h"
#include "putregistrycatalogdataresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::PutRegistryCatalogDataRequest
 * \brief The PutRegistryCatalogDataRequest class provides an interface for EcrPublic PutRegistryCatalogData requests.
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
 * \sa EcrPublicClient::putRegistryCatalogData
 */

/*!
 * Constructs a copy of \a other.
 */
PutRegistryCatalogDataRequest::PutRegistryCatalogDataRequest(const PutRegistryCatalogDataRequest &other)
    : EcrPublicRequest(new PutRegistryCatalogDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutRegistryCatalogDataRequest object.
 */
PutRegistryCatalogDataRequest::PutRegistryCatalogDataRequest()
    : EcrPublicRequest(new PutRegistryCatalogDataRequestPrivate(EcrPublicRequest::PutRegistryCatalogDataAction, this))
{

}

/*!
 * \reimp
 */
bool PutRegistryCatalogDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutRegistryCatalogDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutRegistryCatalogDataRequest::response(QNetworkReply * const reply) const
{
    return new PutRegistryCatalogDataResponse(*this, reply);
}

/*!
 * \class QtAws::EcrPublic::PutRegistryCatalogDataRequestPrivate
 * \brief The PutRegistryCatalogDataRequestPrivate class provides private implementation for PutRegistryCatalogDataRequest.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a PutRegistryCatalogDataRequestPrivate object for EcrPublic \a action,
 * with public implementation \a q.
 */
PutRegistryCatalogDataRequestPrivate::PutRegistryCatalogDataRequestPrivate(
    const EcrPublicRequest::Action action, PutRegistryCatalogDataRequest * const q)
    : EcrPublicRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutRegistryCatalogDataRequest
 * class' copy constructor.
 */
PutRegistryCatalogDataRequestPrivate::PutRegistryCatalogDataRequestPrivate(
    const PutRegistryCatalogDataRequestPrivate &other, PutRegistryCatalogDataRequest * const q)
    : EcrPublicRequestPrivate(other, q)
{

}

} // namespace EcrPublic
} // namespace QtAws
