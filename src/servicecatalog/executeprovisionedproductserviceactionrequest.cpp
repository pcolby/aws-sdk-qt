/*
    Copyright 2013-2018 Paul Colby

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

#include "executeprovisionedproductserviceactionrequest.h"
#include "executeprovisionedproductserviceactionrequest_p.h"
#include "executeprovisionedproductserviceactionresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ExecuteProvisionedProductServiceActionRequest
 * \brief The ExecuteProvisionedProductServiceActionRequest class provides an interface for ServiceCatalog ExecuteProvisionedProductServiceAction requests.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">AWS Service Catalog</a> enables organizations to create and manage
 *  catalogs of IT services that are approved for use on AWS. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">AWS Service Catalog
 *
 * \sa ServiceCatalogClient::executeProvisionedProductServiceAction
 */

/*!
 * Constructs a copy of \a other.
 */
ExecuteProvisionedProductServiceActionRequest::ExecuteProvisionedProductServiceActionRequest(const ExecuteProvisionedProductServiceActionRequest &other)
    : ServiceCatalogRequest(new ExecuteProvisionedProductServiceActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ExecuteProvisionedProductServiceActionRequest object.
 */
ExecuteProvisionedProductServiceActionRequest::ExecuteProvisionedProductServiceActionRequest()
    : ServiceCatalogRequest(new ExecuteProvisionedProductServiceActionRequestPrivate(ServiceCatalogRequest::ExecuteProvisionedProductServiceActionAction, this))
{

}

/*!
 * \reimp
 */
bool ExecuteProvisionedProductServiceActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ExecuteProvisionedProductServiceActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ExecuteProvisionedProductServiceActionRequest::response(QNetworkReply * const reply) const
{
    return new ExecuteProvisionedProductServiceActionResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ExecuteProvisionedProductServiceActionRequestPrivate
 * \brief The ExecuteProvisionedProductServiceActionRequestPrivate class provides private implementation for ExecuteProvisionedProductServiceActionRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ExecuteProvisionedProductServiceActionRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ExecuteProvisionedProductServiceActionRequestPrivate::ExecuteProvisionedProductServiceActionRequestPrivate(
    const ServiceCatalogRequest::Action action, ExecuteProvisionedProductServiceActionRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ExecuteProvisionedProductServiceActionRequest
 * class' copy constructor.
 */
ExecuteProvisionedProductServiceActionRequestPrivate::ExecuteProvisionedProductServiceActionRequestPrivate(
    const ExecuteProvisionedProductServiceActionRequestPrivate &other, ExecuteProvisionedProductServiceActionRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
