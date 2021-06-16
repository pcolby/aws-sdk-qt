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

#include "deleteserviceactionrequest.h"
#include "deleteserviceactionrequest_p.h"
#include "deleteserviceactionresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DeleteServiceActionRequest
 * \brief The DeleteServiceActionRequest class provides an interface for ServiceCatalog DeleteServiceAction requests.
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
 * \sa ServiceCatalogClient::deleteServiceAction
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteServiceActionRequest::DeleteServiceActionRequest(const DeleteServiceActionRequest &other)
    : ServiceCatalogRequest(new DeleteServiceActionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteServiceActionRequest object.
 */
DeleteServiceActionRequest::DeleteServiceActionRequest()
    : ServiceCatalogRequest(new DeleteServiceActionRequestPrivate(ServiceCatalogRequest::DeleteServiceActionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteServiceActionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteServiceActionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteServiceActionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteServiceActionResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DeleteServiceActionRequestPrivate
 * \brief The DeleteServiceActionRequestPrivate class provides private implementation for DeleteServiceActionRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DeleteServiceActionRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DeleteServiceActionRequestPrivate::DeleteServiceActionRequestPrivate(
    const ServiceCatalogRequest::Action action, DeleteServiceActionRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteServiceActionRequest
 * class' copy constructor.
 */
DeleteServiceActionRequestPrivate::DeleteServiceActionRequestPrivate(
    const DeleteServiceActionRequestPrivate &other, DeleteServiceActionRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
