/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteprovisionedproductplanrequest.h"
#include "deleteprovisionedproductplanrequest_p.h"
#include "deleteprovisionedproductplanresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DeleteProvisionedProductPlanRequest
 * \brief The DeleteProvisionedProductPlanRequest class provides an interface for ServiceCatalog DeleteProvisionedProductPlan requests.
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
 * \sa ServiceCatalogClient::deleteProvisionedProductPlan
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteProvisionedProductPlanRequest::DeleteProvisionedProductPlanRequest(const DeleteProvisionedProductPlanRequest &other)
    : ServiceCatalogRequest(new DeleteProvisionedProductPlanRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteProvisionedProductPlanRequest object.
 */
DeleteProvisionedProductPlanRequest::DeleteProvisionedProductPlanRequest()
    : ServiceCatalogRequest(new DeleteProvisionedProductPlanRequestPrivate(ServiceCatalogRequest::DeleteProvisionedProductPlanAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProvisionedProductPlanRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteProvisionedProductPlanResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProvisionedProductPlanRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProvisionedProductPlanResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DeleteProvisionedProductPlanRequestPrivate
 * \brief The DeleteProvisionedProductPlanRequestPrivate class provides private implementation for DeleteProvisionedProductPlanRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 *
 * Constructs a DeleteProvisionedProductPlanRequestPrivate object for ServiceCatalog \a action with,
 * public implementation \a q.
 */
DeleteProvisionedProductPlanRequestPrivate::DeleteProvisionedProductPlanRequestPrivate(
    const ServiceCatalogRequest::Action action, DeleteProvisionedProductPlanRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteProvisionedProductPlanRequest
 * class' copy constructor.
 */
DeleteProvisionedProductPlanRequestPrivate::DeleteProvisionedProductPlanRequestPrivate(
    const DeleteProvisionedProductPlanRequestPrivate &other, DeleteProvisionedProductPlanRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
