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

#include "listtagoptionsrequest.h"
#include "listtagoptionsrequest_p.h"
#include "listtagoptionsresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListTagOptionsRequest
 * \brief The ListTagOptionsRequest class provides an interface for ServiceCatalog ListTagOptions requests.
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
 * \sa ServiceCatalogClient::listTagOptions
 */

/*!
 * Constructs a copy of \a other.
 */
ListTagOptionsRequest::ListTagOptionsRequest(const ListTagOptionsRequest &other)
    : ServiceCatalogRequest(new ListTagOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTagOptionsRequest object.
 */
ListTagOptionsRequest::ListTagOptionsRequest()
    : ServiceCatalogRequest(new ListTagOptionsRequestPrivate(ServiceCatalogRequest::ListTagOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTagOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTagOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTagOptionsRequest::response(QNetworkReply * const reply) const
{
    return new ListTagOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ListTagOptionsRequestPrivate
 * \brief The ListTagOptionsRequestPrivate class provides private implementation for ListTagOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListTagOptionsRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ListTagOptionsRequestPrivate::ListTagOptionsRequestPrivate(
    const ServiceCatalogRequest::Action action, ListTagOptionsRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTagOptionsRequest
 * class' copy constructor.
 */
ListTagOptionsRequestPrivate::ListTagOptionsRequestPrivate(
    const ListTagOptionsRequestPrivate &other, ListTagOptionsRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
