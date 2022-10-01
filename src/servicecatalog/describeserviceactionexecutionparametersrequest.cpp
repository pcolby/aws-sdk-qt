// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describeserviceactionexecutionparametersrequest.h"
#include "describeserviceactionexecutionparametersrequest_p.h"
#include "describeserviceactionexecutionparametersresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeServiceActionExecutionParametersRequest
 * \brief The DescribeServiceActionExecutionParametersRequest class provides an interface for ServiceCatalog DescribeServiceActionExecutionParameters requests.
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
 * \sa ServiceCatalogClient::describeServiceActionExecutionParameters
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeServiceActionExecutionParametersRequest::DescribeServiceActionExecutionParametersRequest(const DescribeServiceActionExecutionParametersRequest &other)
    : ServiceCatalogRequest(new DescribeServiceActionExecutionParametersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeServiceActionExecutionParametersRequest object.
 */
DescribeServiceActionExecutionParametersRequest::DescribeServiceActionExecutionParametersRequest()
    : ServiceCatalogRequest(new DescribeServiceActionExecutionParametersRequestPrivate(ServiceCatalogRequest::DescribeServiceActionExecutionParametersAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeServiceActionExecutionParametersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeServiceActionExecutionParametersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeServiceActionExecutionParametersRequest::response(QNetworkReply * const reply) const
{
    return new DescribeServiceActionExecutionParametersResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DescribeServiceActionExecutionParametersRequestPrivate
 * \brief The DescribeServiceActionExecutionParametersRequestPrivate class provides private implementation for DescribeServiceActionExecutionParametersRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeServiceActionExecutionParametersRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DescribeServiceActionExecutionParametersRequestPrivate::DescribeServiceActionExecutionParametersRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeServiceActionExecutionParametersRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeServiceActionExecutionParametersRequest
 * class' copy constructor.
 */
DescribeServiceActionExecutionParametersRequestPrivate::DescribeServiceActionExecutionParametersRequestPrivate(
    const DescribeServiceActionExecutionParametersRequestPrivate &other, DescribeServiceActionExecutionParametersRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
