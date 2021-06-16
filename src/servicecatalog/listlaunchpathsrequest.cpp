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

#include "listlaunchpathsrequest.h"
#include "listlaunchpathsrequest_p.h"
#include "listlaunchpathsresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListLaunchPathsRequest
 * \brief The ListLaunchPathsRequest class provides an interface for ServiceCatalog ListLaunchPaths requests.
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
 * \sa ServiceCatalogClient::listLaunchPaths
 */

/*!
 * Constructs a copy of \a other.
 */
ListLaunchPathsRequest::ListLaunchPathsRequest(const ListLaunchPathsRequest &other)
    : ServiceCatalogRequest(new ListLaunchPathsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLaunchPathsRequest object.
 */
ListLaunchPathsRequest::ListLaunchPathsRequest()
    : ServiceCatalogRequest(new ListLaunchPathsRequestPrivate(ServiceCatalogRequest::ListLaunchPathsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLaunchPathsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLaunchPathsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLaunchPathsRequest::response(QNetworkReply * const reply) const
{
    return new ListLaunchPathsResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ListLaunchPathsRequestPrivate
 * \brief The ListLaunchPathsRequestPrivate class provides private implementation for ListLaunchPathsRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListLaunchPathsRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ListLaunchPathsRequestPrivate::ListLaunchPathsRequestPrivate(
    const ServiceCatalogRequest::Action action, ListLaunchPathsRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLaunchPathsRequest
 * class' copy constructor.
 */
ListLaunchPathsRequestPrivate::ListLaunchPathsRequestPrivate(
    const ListLaunchPathsRequestPrivate &other, ListLaunchPathsRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
