// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describecopyproductstatusrequest.h"
#include "describecopyproductstatusrequest_p.h"
#include "describecopyproductstatusresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeCopyProductStatusRequest
 * \brief The DescribeCopyProductStatusRequest class provides an interface for ServiceCatalog DescribeCopyProductStatus requests.
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
 * \sa ServiceCatalogClient::describeCopyProductStatus
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeCopyProductStatusRequest::DescribeCopyProductStatusRequest(const DescribeCopyProductStatusRequest &other)
    : ServiceCatalogRequest(new DescribeCopyProductStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeCopyProductStatusRequest object.
 */
DescribeCopyProductStatusRequest::DescribeCopyProductStatusRequest()
    : ServiceCatalogRequest(new DescribeCopyProductStatusRequestPrivate(ServiceCatalogRequest::DescribeCopyProductStatusAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeCopyProductStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeCopyProductStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeCopyProductStatusRequest::response(QNetworkReply * const reply) const
{
    return new DescribeCopyProductStatusResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DescribeCopyProductStatusRequestPrivate
 * \brief The DescribeCopyProductStatusRequestPrivate class provides private implementation for DescribeCopyProductStatusRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeCopyProductStatusRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DescribeCopyProductStatusRequestPrivate::DescribeCopyProductStatusRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeCopyProductStatusRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeCopyProductStatusRequest
 * class' copy constructor.
 */
DescribeCopyProductStatusRequestPrivate::DescribeCopyProductStatusRequestPrivate(
    const DescribeCopyProductStatusRequestPrivate &other, DescribeCopyProductStatusRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
