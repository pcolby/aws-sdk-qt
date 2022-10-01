// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrepositorycatalogdatarequest.h"
#include "getrepositorycatalogdatarequest_p.h"
#include "getrepositorycatalogdataresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::GetRepositoryCatalogDataRequest
 * \brief The GetRepositoryCatalogDataRequest class provides an interface for EcrPublic GetRepositoryCatalogData requests.
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
 * \sa EcrPublicClient::getRepositoryCatalogData
 */

/*!
 * Constructs a copy of \a other.
 */
GetRepositoryCatalogDataRequest::GetRepositoryCatalogDataRequest(const GetRepositoryCatalogDataRequest &other)
    : EcrPublicRequest(new GetRepositoryCatalogDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRepositoryCatalogDataRequest object.
 */
GetRepositoryCatalogDataRequest::GetRepositoryCatalogDataRequest()
    : EcrPublicRequest(new GetRepositoryCatalogDataRequestPrivate(EcrPublicRequest::GetRepositoryCatalogDataAction, this))
{

}

/*!
 * \reimp
 */
bool GetRepositoryCatalogDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRepositoryCatalogDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRepositoryCatalogDataRequest::response(QNetworkReply * const reply) const
{
    return new GetRepositoryCatalogDataResponse(*this, reply);
}

/*!
 * \class QtAws::EcrPublic::GetRepositoryCatalogDataRequestPrivate
 * \brief The GetRepositoryCatalogDataRequestPrivate class provides private implementation for GetRepositoryCatalogDataRequest.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a GetRepositoryCatalogDataRequestPrivate object for EcrPublic \a action,
 * with public implementation \a q.
 */
GetRepositoryCatalogDataRequestPrivate::GetRepositoryCatalogDataRequestPrivate(
    const EcrPublicRequest::Action action, GetRepositoryCatalogDataRequest * const q)
    : EcrPublicRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRepositoryCatalogDataRequest
 * class' copy constructor.
 */
GetRepositoryCatalogDataRequestPrivate::GetRepositoryCatalogDataRequestPrivate(
    const GetRepositoryCatalogDataRequestPrivate &other, GetRepositoryCatalogDataRequest * const q)
    : EcrPublicRequestPrivate(other, q)
{

}

} // namespace EcrPublic
} // namespace QtAws
