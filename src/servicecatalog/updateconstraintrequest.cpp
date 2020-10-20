/*
    Copyright 2013-2020 Paul Colby

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

#include "updateconstraintrequest.h"
#include "updateconstraintrequest_p.h"
#include "updateconstraintresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::UpdateConstraintRequest
 * \brief The UpdateConstraintRequest class provides an interface for ServiceCatalog UpdateConstraint requests.
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
 * \sa ServiceCatalogClient::updateConstraint
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConstraintRequest::UpdateConstraintRequest(const UpdateConstraintRequest &other)
    : ServiceCatalogRequest(new UpdateConstraintRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConstraintRequest object.
 */
UpdateConstraintRequest::UpdateConstraintRequest()
    : ServiceCatalogRequest(new UpdateConstraintRequestPrivate(ServiceCatalogRequest::UpdateConstraintAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConstraintRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConstraintResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConstraintRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConstraintResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::UpdateConstraintRequestPrivate
 * \brief The UpdateConstraintRequestPrivate class provides private implementation for UpdateConstraintRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a UpdateConstraintRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
UpdateConstraintRequestPrivate::UpdateConstraintRequestPrivate(
    const ServiceCatalogRequest::Action action, UpdateConstraintRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConstraintRequest
 * class' copy constructor.
 */
UpdateConstraintRequestPrivate::UpdateConstraintRequestPrivate(
    const UpdateConstraintRequestPrivate &other, UpdateConstraintRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
