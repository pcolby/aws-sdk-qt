// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconstraintrequest.h"
#include "createconstraintrequest_p.h"
#include "createconstraintresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::CreateConstraintRequest
 * \brief The CreateConstraintRequest class provides an interface for ServiceCatalog CreateConstraint requests.
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
 * \sa ServiceCatalogClient::createConstraint
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConstraintRequest::CreateConstraintRequest(const CreateConstraintRequest &other)
    : ServiceCatalogRequest(new CreateConstraintRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConstraintRequest object.
 */
CreateConstraintRequest::CreateConstraintRequest()
    : ServiceCatalogRequest(new CreateConstraintRequestPrivate(ServiceCatalogRequest::CreateConstraintAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConstraintRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConstraintResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConstraintRequest::response(QNetworkReply * const reply) const
{
    return new CreateConstraintResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::CreateConstraintRequestPrivate
 * \brief The CreateConstraintRequestPrivate class provides private implementation for CreateConstraintRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a CreateConstraintRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
CreateConstraintRequestPrivate::CreateConstraintRequestPrivate(
    const ServiceCatalogRequest::Action action, CreateConstraintRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConstraintRequest
 * class' copy constructor.
 */
CreateConstraintRequestPrivate::CreateConstraintRequestPrivate(
    const CreateConstraintRequestPrivate &other, CreateConstraintRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
