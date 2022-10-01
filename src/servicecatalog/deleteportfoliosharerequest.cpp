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

#include "deleteportfoliosharerequest.h"
#include "deleteportfoliosharerequest_p.h"
#include "deleteportfolioshareresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DeletePortfolioShareRequest
 * \brief The DeletePortfolioShareRequest class provides an interface for ServiceCatalog DeletePortfolioShare requests.
 *
 * \inmodule QtAwsServiceCatalog
 *
 *  <fullname>AWS Service Catalog</fullname>
 * 
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
 *
 * \sa ServiceCatalogClient::deletePortfolioShare
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePortfolioShareRequest::DeletePortfolioShareRequest(const DeletePortfolioShareRequest &other)
    : ServiceCatalogRequest(new DeletePortfolioShareRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePortfolioShareRequest object.
 */
DeletePortfolioShareRequest::DeletePortfolioShareRequest()
    : ServiceCatalogRequest(new DeletePortfolioShareRequestPrivate(ServiceCatalogRequest::DeletePortfolioShareAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePortfolioShareRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePortfolioShareResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePortfolioShareRequest::response(QNetworkReply * const reply) const
{
    return new DeletePortfolioShareResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DeletePortfolioShareRequestPrivate
 * \brief The DeletePortfolioShareRequestPrivate class provides private implementation for DeletePortfolioShareRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DeletePortfolioShareRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DeletePortfolioShareRequestPrivate::DeletePortfolioShareRequestPrivate(
    const ServiceCatalogRequest::Action action, DeletePortfolioShareRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePortfolioShareRequest
 * class' copy constructor.
 */
DeletePortfolioShareRequestPrivate::DeletePortfolioShareRequestPrivate(
    const DeletePortfolioShareRequestPrivate &other, DeletePortfolioShareRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
