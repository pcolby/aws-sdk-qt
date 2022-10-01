// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <a href="https://aws.amazon.com/servicecatalog/">Service Catalog</a> enables organizations to create and manage catalogs
 *  of IT services that are approved for Amazon Web Services. To get the most out of this documentation, you should be
 *  familiar with the terminology discussed in <a
 *  href="http://docs.aws.amazon.com/servicecatalog/latest/adminguide/what-is_concepts.html">Service Catalog
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
