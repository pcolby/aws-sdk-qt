// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeconstraintrequest.h"
#include "describeconstraintrequest_p.h"
#include "describeconstraintresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeConstraintRequest
 * \brief The DescribeConstraintRequest class provides an interface for ServiceCatalog DescribeConstraint requests.
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
 * \sa ServiceCatalogClient::describeConstraint
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeConstraintRequest::DescribeConstraintRequest(const DescribeConstraintRequest &other)
    : ServiceCatalogRequest(new DescribeConstraintRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeConstraintRequest object.
 */
DescribeConstraintRequest::DescribeConstraintRequest()
    : ServiceCatalogRequest(new DescribeConstraintRequestPrivate(ServiceCatalogRequest::DescribeConstraintAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeConstraintRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeConstraintResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeConstraintRequest::response(QNetworkReply * const reply) const
{
    return new DescribeConstraintResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DescribeConstraintRequestPrivate
 * \brief The DescribeConstraintRequestPrivate class provides private implementation for DescribeConstraintRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeConstraintRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DescribeConstraintRequestPrivate::DescribeConstraintRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeConstraintRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeConstraintRequest
 * class' copy constructor.
 */
DescribeConstraintRequestPrivate::DescribeConstraintRequestPrivate(
    const DescribeConstraintRequestPrivate &other, DescribeConstraintRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
