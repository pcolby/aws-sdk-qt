/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
