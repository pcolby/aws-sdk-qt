// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getregistrycatalogdatarequest.h"
#include "getregistrycatalogdatarequest_p.h"
#include "getregistrycatalogdataresponse.h"
#include "ecrpublicrequest_p.h"

namespace QtAws {
namespace EcrPublic {

/*!
 * \class QtAws::EcrPublic::GetRegistryCatalogDataRequest
 * \brief The GetRegistryCatalogDataRequest class provides an interface for EcrPublic GetRegistryCatalogData requests.
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
 * \sa EcrPublicClient::getRegistryCatalogData
 */

/*!
 * Constructs a copy of \a other.
 */
GetRegistryCatalogDataRequest::GetRegistryCatalogDataRequest(const GetRegistryCatalogDataRequest &other)
    : EcrPublicRequest(new GetRegistryCatalogDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRegistryCatalogDataRequest object.
 */
GetRegistryCatalogDataRequest::GetRegistryCatalogDataRequest()
    : EcrPublicRequest(new GetRegistryCatalogDataRequestPrivate(EcrPublicRequest::GetRegistryCatalogDataAction, this))
{

}

/*!
 * \reimp
 */
bool GetRegistryCatalogDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRegistryCatalogDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRegistryCatalogDataRequest::response(QNetworkReply * const reply) const
{
    return new GetRegistryCatalogDataResponse(*this, reply);
}

/*!
 * \class QtAws::EcrPublic::GetRegistryCatalogDataRequestPrivate
 * \brief The GetRegistryCatalogDataRequestPrivate class provides private implementation for GetRegistryCatalogDataRequest.
 * \internal
 *
 * \inmodule QtAwsEcrPublic
 */

/*!
 * Constructs a GetRegistryCatalogDataRequestPrivate object for EcrPublic \a action,
 * with public implementation \a q.
 */
GetRegistryCatalogDataRequestPrivate::GetRegistryCatalogDataRequestPrivate(
    const EcrPublicRequest::Action action, GetRegistryCatalogDataRequest * const q)
    : EcrPublicRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRegistryCatalogDataRequest
 * class' copy constructor.
 */
GetRegistryCatalogDataRequestPrivate::GetRegistryCatalogDataRequestPrivate(
    const GetRegistryCatalogDataRequestPrivate &other, GetRegistryCatalogDataRequest * const q)
    : EcrPublicRequestPrivate(other, q)
{

}

} // namespace EcrPublic
} // namespace QtAws
