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

#include "listorganizationportfolioaccessrequest.h"
#include "listorganizationportfolioaccessrequest_p.h"
#include "listorganizationportfolioaccessresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListOrganizationPortfolioAccessRequest
 * \brief The ListOrganizationPortfolioAccessRequest class provides an interface for ServiceCatalog ListOrganizationPortfolioAccess requests.
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
 * \sa ServiceCatalogClient::listOrganizationPortfolioAccess
 */

/*!
 * Constructs a copy of \a other.
 */
ListOrganizationPortfolioAccessRequest::ListOrganizationPortfolioAccessRequest(const ListOrganizationPortfolioAccessRequest &other)
    : ServiceCatalogRequest(new ListOrganizationPortfolioAccessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListOrganizationPortfolioAccessRequest object.
 */
ListOrganizationPortfolioAccessRequest::ListOrganizationPortfolioAccessRequest()
    : ServiceCatalogRequest(new ListOrganizationPortfolioAccessRequestPrivate(ServiceCatalogRequest::ListOrganizationPortfolioAccessAction, this))
{

}

/*!
 * \reimp
 */
bool ListOrganizationPortfolioAccessRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListOrganizationPortfolioAccessResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListOrganizationPortfolioAccessRequest::response(QNetworkReply * const reply) const
{
    return new ListOrganizationPortfolioAccessResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ListOrganizationPortfolioAccessRequestPrivate
 * \brief The ListOrganizationPortfolioAccessRequestPrivate class provides private implementation for ListOrganizationPortfolioAccessRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListOrganizationPortfolioAccessRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ListOrganizationPortfolioAccessRequestPrivate::ListOrganizationPortfolioAccessRequestPrivate(
    const ServiceCatalogRequest::Action action, ListOrganizationPortfolioAccessRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListOrganizationPortfolioAccessRequest
 * class' copy constructor.
 */
ListOrganizationPortfolioAccessRequestPrivate::ListOrganizationPortfolioAccessRequestPrivate(
    const ListOrganizationPortfolioAccessRequestPrivate &other, ListOrganizationPortfolioAccessRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
