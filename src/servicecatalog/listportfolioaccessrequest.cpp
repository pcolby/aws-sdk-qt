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

#include "listportfolioaccessrequest.h"
#include "listportfolioaccessrequest_p.h"
#include "listportfolioaccessresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListPortfolioAccessRequest
 * \brief The ListPortfolioAccessRequest class provides an interface for ServiceCatalog ListPortfolioAccess requests.
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
 * \sa ServiceCatalogClient::listPortfolioAccess
 */

/*!
 * Constructs a copy of \a other.
 */
ListPortfolioAccessRequest::ListPortfolioAccessRequest(const ListPortfolioAccessRequest &other)
    : ServiceCatalogRequest(new ListPortfolioAccessRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPortfolioAccessRequest object.
 */
ListPortfolioAccessRequest::ListPortfolioAccessRequest()
    : ServiceCatalogRequest(new ListPortfolioAccessRequestPrivate(ServiceCatalogRequest::ListPortfolioAccessAction, this))
{

}

/*!
 * \reimp
 */
bool ListPortfolioAccessRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPortfolioAccessResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPortfolioAccessRequest::response(QNetworkReply * const reply) const
{
    return new ListPortfolioAccessResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ListPortfolioAccessRequestPrivate
 * \brief The ListPortfolioAccessRequestPrivate class provides private implementation for ListPortfolioAccessRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 *
 * Constructs a ListPortfolioAccessRequestPrivate object for ServiceCatalog \a action with,
 * public implementation \a q.
 */
ListPortfolioAccessRequestPrivate::ListPortfolioAccessRequestPrivate(
    const ServiceCatalogRequest::Action action, ListPortfolioAccessRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPortfolioAccessRequest
 * class' copy constructor.
 */
ListPortfolioAccessRequestPrivate::ListPortfolioAccessRequestPrivate(
    const ListPortfolioAccessRequestPrivate &other, ListPortfolioAccessRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
