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

#include "associateprincipalwithportfoliorequest.h"
#include "associateprincipalwithportfoliorequest_p.h"
#include "associateprincipalwithportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::AssociatePrincipalWithPortfolioRequest
 * \brief The AssociatePrincipalWithPortfolioRequest class provides an interface for ServiceCatalog AssociatePrincipalWithPortfolio requests.
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
 * \sa ServiceCatalogClient::associatePrincipalWithPortfolio
 */

/*!
 * Constructs a copy of \a other.
 */
AssociatePrincipalWithPortfolioRequest::AssociatePrincipalWithPortfolioRequest(const AssociatePrincipalWithPortfolioRequest &other)
    : ServiceCatalogRequest(new AssociatePrincipalWithPortfolioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociatePrincipalWithPortfolioRequest object.
 */
AssociatePrincipalWithPortfolioRequest::AssociatePrincipalWithPortfolioRequest()
    : ServiceCatalogRequest(new AssociatePrincipalWithPortfolioRequestPrivate(ServiceCatalogRequest::AssociatePrincipalWithPortfolioAction, this))
{

}

/*!
 * \reimp
 */
bool AssociatePrincipalWithPortfolioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociatePrincipalWithPortfolioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociatePrincipalWithPortfolioRequest::response(QNetworkReply * const reply) const
{
    return new AssociatePrincipalWithPortfolioResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::AssociatePrincipalWithPortfolioRequestPrivate
 * \brief The AssociatePrincipalWithPortfolioRequestPrivate class provides private implementation for AssociatePrincipalWithPortfolioRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 *
 * Constructs a AssociatePrincipalWithPortfolioRequestPrivate object for ServiceCatalog \a action with,
 * public implementation \a q.
 */
AssociatePrincipalWithPortfolioRequestPrivate::AssociatePrincipalWithPortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, AssociatePrincipalWithPortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociatePrincipalWithPortfolioRequest
 * class' copy constructor.
 */
AssociatePrincipalWithPortfolioRequestPrivate::AssociatePrincipalWithPortfolioRequestPrivate(
    const AssociatePrincipalWithPortfolioRequestPrivate &other, AssociatePrincipalWithPortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
