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

#include "updateprovisionedproductpropertiesrequest.h"
#include "updateprovisionedproductpropertiesrequest_p.h"
#include "updateprovisionedproductpropertiesresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::UpdateProvisionedProductPropertiesRequest
 * \brief The UpdateProvisionedProductPropertiesRequest class provides an interface for ServiceCatalog UpdateProvisionedProductProperties requests.
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
 * \sa ServiceCatalogClient::updateProvisionedProductProperties
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateProvisionedProductPropertiesRequest::UpdateProvisionedProductPropertiesRequest(const UpdateProvisionedProductPropertiesRequest &other)
    : ServiceCatalogRequest(new UpdateProvisionedProductPropertiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateProvisionedProductPropertiesRequest object.
 */
UpdateProvisionedProductPropertiesRequest::UpdateProvisionedProductPropertiesRequest()
    : ServiceCatalogRequest(new UpdateProvisionedProductPropertiesRequestPrivate(ServiceCatalogRequest::UpdateProvisionedProductPropertiesAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateProvisionedProductPropertiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateProvisionedProductPropertiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateProvisionedProductPropertiesRequest::response(QNetworkReply * const reply) const
{
    return new UpdateProvisionedProductPropertiesResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::UpdateProvisionedProductPropertiesRequestPrivate
 * \brief The UpdateProvisionedProductPropertiesRequestPrivate class provides private implementation for UpdateProvisionedProductPropertiesRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a UpdateProvisionedProductPropertiesRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
UpdateProvisionedProductPropertiesRequestPrivate::UpdateProvisionedProductPropertiesRequestPrivate(
    const ServiceCatalogRequest::Action action, UpdateProvisionedProductPropertiesRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateProvisionedProductPropertiesRequest
 * class' copy constructor.
 */
UpdateProvisionedProductPropertiesRequestPrivate::UpdateProvisionedProductPropertiesRequestPrivate(
    const UpdateProvisionedProductPropertiesRequestPrivate &other, UpdateProvisionedProductPropertiesRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
