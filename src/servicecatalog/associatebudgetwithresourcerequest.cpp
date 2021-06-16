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

#include "associatebudgetwithresourcerequest.h"
#include "associatebudgetwithresourcerequest_p.h"
#include "associatebudgetwithresourceresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::AssociateBudgetWithResourceRequest
 * \brief The AssociateBudgetWithResourceRequest class provides an interface for ServiceCatalog AssociateBudgetWithResource requests.
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
 * \sa ServiceCatalogClient::associateBudgetWithResource
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateBudgetWithResourceRequest::AssociateBudgetWithResourceRequest(const AssociateBudgetWithResourceRequest &other)
    : ServiceCatalogRequest(new AssociateBudgetWithResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateBudgetWithResourceRequest object.
 */
AssociateBudgetWithResourceRequest::AssociateBudgetWithResourceRequest()
    : ServiceCatalogRequest(new AssociateBudgetWithResourceRequestPrivate(ServiceCatalogRequest::AssociateBudgetWithResourceAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateBudgetWithResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateBudgetWithResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateBudgetWithResourceRequest::response(QNetworkReply * const reply) const
{
    return new AssociateBudgetWithResourceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::AssociateBudgetWithResourceRequestPrivate
 * \brief The AssociateBudgetWithResourceRequestPrivate class provides private implementation for AssociateBudgetWithResourceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a AssociateBudgetWithResourceRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
AssociateBudgetWithResourceRequestPrivate::AssociateBudgetWithResourceRequestPrivate(
    const ServiceCatalogRequest::Action action, AssociateBudgetWithResourceRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateBudgetWithResourceRequest
 * class' copy constructor.
 */
AssociateBudgetWithResourceRequestPrivate::AssociateBudgetWithResourceRequestPrivate(
    const AssociateBudgetWithResourceRequestPrivate &other, AssociateBudgetWithResourceRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
