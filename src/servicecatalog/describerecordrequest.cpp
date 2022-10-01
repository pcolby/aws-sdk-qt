// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describerecordrequest.h"
#include "describerecordrequest_p.h"
#include "describerecordresponse.h"
#include "servicecatalogrequest_p.h"

namespace QtAws {
namespace ServiceCatalog {

/*!
 * \class QtAws::ServiceCatalog::DescribeRecordRequest
 * \brief The DescribeRecordRequest class provides an interface for ServiceCatalog DescribeRecord requests.
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
 * \sa ServiceCatalogClient::describeRecord
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeRecordRequest::DescribeRecordRequest(const DescribeRecordRequest &other)
    : ServiceCatalogRequest(new DescribeRecordRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeRecordRequest object.
 */
DescribeRecordRequest::DescribeRecordRequest()
    : ServiceCatalogRequest(new DescribeRecordRequestPrivate(ServiceCatalogRequest::DescribeRecordAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeRecordRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeRecordResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeRecordRequest::response(QNetworkReply * const reply) const
{
    return new DescribeRecordResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceCatalog::DescribeRecordRequestPrivate
 * \brief The DescribeRecordRequestPrivate class provides private implementation for DescribeRecordRequest.
 * \internal
 *
 * \inmodule QtAwsServiceCatalog
 */

/*!
 * Constructs a DescribeRecordRequestPrivate object for ServiceCatalog \a action,
 * with public implementation \a q.
 */
DescribeRecordRequestPrivate::DescribeRecordRequestPrivate(
    const ServiceCatalogRequest::Action action, DescribeRecordRequest * const q)
    : ServiceCatalogRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeRecordRequest
 * class' copy constructor.
 */
DescribeRecordRequestPrivate::DescribeRecordRequestPrivate(
    const DescribeRecordRequestPrivate &other, DescribeRecordRequest * const q)
    : ServiceCatalogRequestPrivate(other, q)
{

}

} // namespace ServiceCatalog
} // namespace QtAws
