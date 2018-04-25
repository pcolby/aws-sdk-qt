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

#include "listrecordhistoryrequest.h"
#include "listrecordhistoryrequest_p.h"
#include "listrecordhistoryresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::ListRecordHistoryRequest
 * \brief The ListRecordHistoryRequest class provides an interface for ServiceCatalog ListRecordHistory requests.
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
 * \sa ServiceCatalogClient::listRecordHistory
 */

/*!
 * Constructs a copy of \a other.
 */
ListRecordHistoryRequest::ListRecordHistoryRequest(const ListRecordHistoryRequest &other)
    : ServiceCatalogRequest(new ListRecordHistoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRecordHistoryRequest object.
 */
ListRecordHistoryRequest::ListRecordHistoryRequest()
    : ServiceCatalogRequest(new ListRecordHistoryRequestPrivate(ServiceCatalogRequest::ListRecordHistoryAction, this))
{

}

/*!
 * \reimp
 */
bool ListRecordHistoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRecordHistoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRecordHistoryRequest::response(QNetworkReply * const reply) const
{
    return new ListRecordHistoryResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::ListRecordHistoryRequestPrivate
 * \brief The ListRecordHistoryRequestPrivate class provides private implementation for ListRecordHistoryRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a ListRecordHistoryRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
ListRecordHistoryRequestPrivate::ListRecordHistoryRequestPrivate(
    const ServiceCatalogRequest::Action action, ListRecordHistoryRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRecordHistoryRequest
 * class' copy constructor.
 */
ListRecordHistoryRequestPrivate::ListRecordHistoryRequestPrivate(
    const ListRecordHistoryRequestPrivate &other, ListRecordHistoryRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
