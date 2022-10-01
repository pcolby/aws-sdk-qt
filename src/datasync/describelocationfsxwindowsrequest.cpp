// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelocationfsxwindowsrequest.h"
#include "describelocationfsxwindowsrequest_p.h"
#include "describelocationfsxwindowsresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationFsxWindowsRequest
 * \brief The DescribeLocationFsxWindowsRequest class provides an interface for DataSync DescribeLocationFsxWindows requests.
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
 * \sa DataSyncClient::describeLocationFsxWindows
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLocationFsxWindowsRequest::DescribeLocationFsxWindowsRequest(const DescribeLocationFsxWindowsRequest &other)
    : DataSyncRequest(new DescribeLocationFsxWindowsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLocationFsxWindowsRequest object.
 */
DescribeLocationFsxWindowsRequest::DescribeLocationFsxWindowsRequest()
    : DataSyncRequest(new DescribeLocationFsxWindowsRequestPrivate(DataSyncRequest::DescribeLocationFsxWindowsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLocationFsxWindowsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLocationFsxWindowsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLocationFsxWindowsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLocationFsxWindowsResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::DescribeLocationFsxWindowsRequestPrivate
 * \brief The DescribeLocationFsxWindowsRequestPrivate class provides private implementation for DescribeLocationFsxWindowsRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationFsxWindowsRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
DescribeLocationFsxWindowsRequestPrivate::DescribeLocationFsxWindowsRequestPrivate(
    const DataSyncRequest::Action action, DescribeLocationFsxWindowsRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLocationFsxWindowsRequest
 * class' copy constructor.
 */
DescribeLocationFsxWindowsRequestPrivate::DescribeLocationFsxWindowsRequestPrivate(
    const DescribeLocationFsxWindowsRequestPrivate &other, DescribeLocationFsxWindowsRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
