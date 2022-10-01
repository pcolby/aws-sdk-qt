// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourcesfortagoptionrequest.h"
#include "listresourcesfortagoptionrequest_p.h"
#include "listresourcesfortagoptionresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListResourcesForTagOptionRequest
 * \brief The ListResourcesForTagOptionRequest class provides an interface for ServiceCatalog ListResourcesForTagOption requests.
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
 * \sa ServiceCatalogClient::listResourcesForTagOption
 */

/*!
 * Constructs a copy of \a other.
 */
ListResourcesForTagOptionRequest::ListResourcesForTagOptionRequest(const ListResourcesForTagOptionRequest &other)
    : ServiceCatalogRequest(new ListResourcesForTagOptionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResourcesForTagOptionRequest object.
 */
ListResourcesForTagOptionRequest::ListResourcesForTagOptionRequest()
    : ServiceCatalogRequest(new ListResourcesForTagOptionRequestPrivate(ServiceCatalogRequest::ListResourcesForTagOptionAction, this))
{

}

/*!
 * \reimp
 */
bool ListResourcesForTagOptionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListResourcesForTagOptionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourcesForTagOptionRequest::response(QNetworkReply * const reply) const
{
    return new ListResourcesForTagOptionResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ListResourcesForTagOptionRequestPrivate
 * \brief The ListResourcesForTagOptionRequestPrivate class provides private implementation for ListResourcesForTagOptionRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListResourcesForTagOptionRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ListResourcesForTagOptionRequestPrivate::ListResourcesForTagOptionRequestPrivate(
    const ServiceCatalogRequest::Action action, ListResourcesForTagOptionRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListResourcesForTagOptionRequest
 * class' copy constructor.
 */
ListResourcesForTagOptionRequestPrivate::ListResourcesForTagOptionRequestPrivate(
    const ListResourcesForTagOptionRequestPrivate &other, ListResourcesForTagOptionRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
