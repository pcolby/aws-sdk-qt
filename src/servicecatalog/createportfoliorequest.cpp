/*
    Copyright 2013-2019 Paul Colby

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

#include "createportfoliorequest.h"
#include "createportfoliorequest_p.h"
#include "createportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::CreatePortfolioRequest
 * \brief The CreatePortfolioRequest class provides an interface for ServiceCatalog CreatePortfolio requests.
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
 * \sa ServiceCatalogClient::createPortfolio
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePortfolioRequest::CreatePortfolioRequest(const CreatePortfolioRequest &other)
    : ServiceCatalogRequest(new CreatePortfolioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePortfolioRequest object.
 */
CreatePortfolioRequest::CreatePortfolioRequest()
    : ServiceCatalogRequest(new CreatePortfolioRequestPrivate(ServiceCatalogRequest::CreatePortfolioAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePortfolioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePortfolioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePortfolioRequest::response(QNetworkReply * const reply) const
{
    return new CreatePortfolioResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::CreatePortfolioRequestPrivate
 * \brief The CreatePortfolioRequestPrivate class provides private implementation for CreatePortfolioRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a CreatePortfolioRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
CreatePortfolioRequestPrivate::CreatePortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, CreatePortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePortfolioRequest
 * class' copy constructor.
 */
CreatePortfolioRequestPrivate::CreatePortfolioRequestPrivate(
    const CreatePortfolioRequestPrivate &other, CreatePortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
