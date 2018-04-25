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

#include "updateportfoliorequest.h"
#include "updateportfoliorequest_p.h"
#include "updateportfolioresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::UpdatePortfolioRequest
 * \brief The UpdatePortfolioRequest class provides an interface for ServiceCatalog UpdatePortfolio requests.
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
 * \sa ServiceCatalogClient::updatePortfolio
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePortfolioRequest::UpdatePortfolioRequest(const UpdatePortfolioRequest &other)
    : ServiceCatalogRequest(new UpdatePortfolioRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePortfolioRequest object.
 */
UpdatePortfolioRequest::UpdatePortfolioRequest()
    : ServiceCatalogRequest(new UpdatePortfolioRequestPrivate(ServiceCatalogRequest::UpdatePortfolioAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePortfolioRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePortfolioResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePortfolioRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePortfolioResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::UpdatePortfolioRequestPrivate
 * \brief The UpdatePortfolioRequestPrivate class provides private implementation for UpdatePortfolioRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a UpdatePortfolioRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
UpdatePortfolioRequestPrivate::UpdatePortfolioRequestPrivate(
    const ServiceCatalogRequest::Action action, UpdatePortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePortfolioRequest
 * class' copy constructor.
 */
UpdatePortfolioRequestPrivate::UpdatePortfolioRequestPrivate(
    const UpdatePortfolioRequestPrivate &other, UpdatePortfolioRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
