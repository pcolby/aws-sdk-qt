// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describelocationnfsrequest.h"
#include "describelocationnfsrequest_p.h"
#include "describelocationnfsresponse.h"
#include "datasyncrequest_p.h"

namespace QtAws {
namespace DataSync {

/*!
 * \class QtAws::DataSync::DescribeLocationNfsRequest
 * \brief The DescribeLocationNfsRequest class provides an interface for DataSync DescribeLocationNfs requests.
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
 * \sa DataSyncClient::describeLocationNfs
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeLocationNfsRequest::DescribeLocationNfsRequest(const DescribeLocationNfsRequest &other)
    : DataSyncRequest(new DescribeLocationNfsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeLocationNfsRequest object.
 */
DescribeLocationNfsRequest::DescribeLocationNfsRequest()
    : DataSyncRequest(new DescribeLocationNfsRequestPrivate(DataSyncRequest::DescribeLocationNfsAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeLocationNfsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeLocationNfsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeLocationNfsRequest::response(QNetworkReply * const reply) const
{
    return new DescribeLocationNfsResponse(*this, reply);
}

/*!
 * \class QtAws::DataSync::DescribeLocationNfsRequestPrivate
 * \brief The DescribeLocationNfsRequestPrivate class provides private implementation for DescribeLocationNfsRequest.
 * \internal
 *
 * \inmodule QtAwsDataSync
 */

/*!
 * Constructs a DescribeLocationNfsRequestPrivate object for DataSync \a action,
 * with public implementation \a q.
 */
DescribeLocationNfsRequestPrivate::DescribeLocationNfsRequestPrivate(
    const DataSyncRequest::Action action, DescribeLocationNfsRequest * const q)
    : DataSyncRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeLocationNfsRequest
 * class' copy constructor.
 */
DescribeLocationNfsRequestPrivate::DescribeLocationNfsRequestPrivate(
    const DescribeLocationNfsRequestPrivate &other, DescribeLocationNfsRequest * const q)
    : DataSyncRequestPrivate(other, q)
{

}

} // namespace DataSync
} // namespace QtAws
