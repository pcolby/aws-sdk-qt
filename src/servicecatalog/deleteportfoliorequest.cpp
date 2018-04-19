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

#include "deleteportfoliorequest.h"
#include "deleteportfoliorequest_p.h"
#include "deleteportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DeletePortfolioRequest
 * \brief The DeletePortfolioRequest class provides an interface for ServiceCatalog DeletePortfolio requests.
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
 * \sa ServiceCatalogClient::deletePortfolio
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePortfolioRequest::DeletePortfolioRequest(const DeletePortfolioRequest &other)
    : ServiceCatalogRequest(new DeletePortfolioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePortfolioRequest object.
 */
DeletePortfolioRequest::DeletePortfolioRequest()
    : ServiceCatalogRequest(new DeletePortfolioRequestPrivate(ServiceCatalogRequest::DeletePortfolioAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePortfolioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePortfolioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePortfolioRequest::response(QNetworkReply * const reply) const
{
    return new DeletePortfolioResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DeletePortfolioRequestPrivate
 * \brief The DeletePortfolioRequestPrivate class provides private implementation for DeletePortfolioRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 *
 * Constructs a DeletePortfolioRequestPrivate object for ServiceCatalog \a action with,
 * public implementation \a q.
 */
DeletePortfolioRequestPrivate::DeletePortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, DeletePortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePortfolioRequest
 * class' copy constructor.
 */
DeletePortfolioRequestPrivate::DeletePortfolioRequestPrivate(
    const DeletePortfolioRequestPrivate &other, DeletePortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
