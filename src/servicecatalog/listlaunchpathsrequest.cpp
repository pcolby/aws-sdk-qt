// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
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
