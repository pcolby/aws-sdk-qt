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

#include "getprovisionedproductoutputsrequest.h"
#include "getprovisionedproductoutputsrequest_p.h"
#include "getprovisionedproductoutputsresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::GetProvisionedProductOutputsRequest
 * \brief The GetProvisionedProductOutputsRequest class provides an interface for ServiceCatalog GetProvisionedProductOutputs requests.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for AWS. To get the most out of this documentation, you should be familiar
 *  with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::getProvisionedProductOutputs
 */

/*!
 * Constructs a copy of \a other.
 */
GetProvisionedProductOutputsRequest::GetProvisionedProductOutputsRequest(const GetProvisionedProductOutputsRequest &other)
    : ServiceCatalogRequest(new GetProvisionedProductOutputsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetProvisionedProductOutputsRequest object.
 */
GetProvisionedProductOutputsRequest::GetProvisionedProductOutputsRequest()
    : ServiceCatalogRequest(new GetProvisionedProductOutputsRequestPrivate(ServiceCatalogRequest::GetProvisionedProductOutputsAction, this))
{

}

/*!
 * \reimp
 */
bool GetProvisionedProductOutputsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetProvisionedProductOutputsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetProvisionedProductOutputsRequest::response(QNetworkReply * const reply) const
{
    return new GetProvisionedProductOutputsResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::GetProvisionedProductOutputsRequestPrivate
 * \brief The GetProvisionedProductOutputsRequestPrivate class provides private implementation for GetProvisionedProductOutputsRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a GetProvisionedProductOutputsRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
GetProvisionedProductOutputsRequestPrivate::GetProvisionedProductOutputsRequestPrivate(
    const ServiceCatalogRequest::Action action, GetProvisionedProductOutputsRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetProvisionedProductOutputsRequest
 * class' copy constructor.
 */
GetProvisionedProductOutputsRequestPrivate::GetProvisionedProductOutputsRequestPrivate(
    const GetProvisionedProductOutputsRequestPrivate &other, GetProvisionedProductOutputsRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
