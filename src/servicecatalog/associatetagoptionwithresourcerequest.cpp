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

#include "associatetagoptionwithresourcerequest.h"
#include "associatetagoptionwithresourcerequest_p.h"
#include "associatetagoptionwithresourceresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::AssociateTagOptionWithResourceRequest
 * \brief The AssociateTagOptionWithResourceRequest class provides an interface for ServiceCatalog AssociateTagOptionWithResource requests.
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
 * \sa ServiceCatalogClient::associateTagOptionWithResource
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateTagOptionWithResourceRequest::AssociateTagOptionWithResourceRequest(const AssociateTagOptionWithResourceRequest &other)
    : ServiceCatalogRequest(new AssociateTagOptionWithResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateTagOptionWithResourceRequest object.
 */
AssociateTagOptionWithResourceRequest::AssociateTagOptionWithResourceRequest()
    : ServiceCatalogRequest(new AssociateTagOptionWithResourceRequestPrivate(ServiceCatalogRequest::AssociateTagOptionWithResourceAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateTagOptionWithResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateTagOptionWithResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateTagOptionWithResourceRequest::response(QNetworkReply * const reply) const
{
    return new AssociateTagOptionWithResourceResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::AssociateTagOptionWithResourceRequestPrivate
 * \brief The AssociateTagOptionWithResourceRequestPrivate class provides private implementation for AssociateTagOptionWithResourceRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a AssociateTagOptionWithResourceRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
AssociateTagOptionWithResourceRequestPrivate::AssociateTagOptionWithResourceRequestPrivate(
    const ServiceCatalogRequest::Action action, AssociateTagOptionWithResourceRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateTagOptionWithResourceRequest
 * class' copy constructor.
 */
AssociateTagOptionWithResourceRequestPrivate::AssociateTagOptionWithResourceRequestPrivate(
    const AssociateTagOptionWithResourceRequestPrivate &other, AssociateTagOptionWithResourceRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
