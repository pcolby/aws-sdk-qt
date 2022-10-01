// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeprovisioningparametersrequest.h"
#include "describeprovisioningparametersrequest_p.h"
#include "describeprovisioningparametersresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeProvisioningParametersRequest
 * \brief The DescribeProvisioningParametersRequest class provides an interface for ServiceCatalog DescribeProvisioningParameters requests.
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
 * \sa ServiceCatalogClient::describeProvisioningParameters
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeProvisioningParametersRequest::DescribeProvisioningParametersRequest(const DescribeProvisioningParametersRequest &other)
    : ServiceCatalogRequest(new DescribeProvisioningParametersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeProvisioningParametersRequest object.
 */
DescribeProvisioningParametersRequest::DescribeProvisioningParametersRequest()
    : ServiceCatalogRequest(new DescribeProvisioningParametersRequestPrivate(ServiceCatalogRequest::DescribeProvisioningParametersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeProvisioningParametersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeProvisioningParametersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeProvisioningParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeProvisioningParametersResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DescribeProvisioningParametersRequestPrivate
 * \brief The DescribeProvisioningParametersRequestPrivate class provides private implementation for DescribeProvisioningParametersRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeProvisioningParametersRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DescribeProvisioningParametersRequestPrivate::DescribeProvisioningParametersRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeProvisioningParametersRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeProvisioningParametersRequest
 * class' copy constructor.
 */
DescribeProvisioningParametersRequestPrivate::DescribeProvisioningParametersRequestPrivate(
    const DescribeProvisioningParametersRequestPrivate &other, DescribeProvisioningParametersRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
