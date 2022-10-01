// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelocationfsxontaprequest.h"
#include "describelocationfsxontaprequest_p.h"
#include "describelocationfsxontapresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationFsxOntapRequest
 * \brief The DescribeLocationFsxOntapRequest class provides an interface for DataSync DescribeLocationFsxOntap requests.
 *
 * \inmodule QtAwsDataSync
 *
 *  <fullname>DataSync</fullname>
 * 
 *  DataSync is a managed data transfer service that makes it simpler for you to automate moving data between on-premises
 *  storage and Amazon Simple Storage Service (Amazon S3) or Amazon Elastic File System (Amazon EFS).
 * 
 *  </p
 * 
 *  This API interface reference for DataSync contains documentation for a programming interface that you can use to manage
 *
 * \sa DataSyncClient::describeLocationFsxOntap
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLocationFsxOntapRequest::DescribeLocationFsxOntapRequest(const DescribeLocationFsxOntapRequest &other)
    : DataSyncRequest(new DescribeLocationFsxOntapRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLocationFsxOntapRequest object.
 */
DescribeLocationFsxOntapRequest::DescribeLocationFsxOntapRequest()
    : DataSyncRequest(new DescribeLocationFsxOntapRequestPrivate(DataSyncRequest::DescribeLocationFsxOntapAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLocationFsxOntapRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLocationFsxOntapResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLocationFsxOntapRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLocationFsxOntapResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::DescribeLocationFsxOntapRequestPrivate
 * \brief The DescribeLocationFsxOntapRequestPrivate class provides private implementation for DescribeLocationFsxOntapRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationFsxOntapRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
DescribeLocationFsxOntapRequestPrivate::DescribeLocationFsxOntapRequestPrivate(
    const DataSyncRequest::Action action, DescribeLocationFsxOntapRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLocationFsxOntapRequest
 * class' copy constructor.
 */
DescribeLocationFsxOntapRequestPrivate::DescribeLocationFsxOntapRequestPrivate(
    const DescribeLocationFsxOntapRequestPrivate &other, DescribeLocationFsxOntapRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
