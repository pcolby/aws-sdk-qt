// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listclusterjobsrequest.h"
#include "listclusterjobsrequest_p.h"
#include "listclusterjobsresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::ListClusterJobsRequest
 * \brief The ListClusterJobsRequest class provides an interface for Snowball ListClusterJobs requests.
 *
 * \inmodule QtAwsSnowball
 *
 *  The Amazon Web Services Snow Family provides a petabyte-scale data transport solution that uses secure devices to
 *  transfer large amounts of data between your on-premises data centers and Amazon Simple Storage Service (Amazon S3). The
 *  Snow Family commands described here provide access to the same functionality that is available in the Amazon Web
 *  Services Snow Family Management Console, which enables you to create and manage jobs for a Snow Family device. To
 *  transfer data locally with a Snow Family device, you'll need to use the Snowball Edge client or the Amazon S3 API
 *  Interface for Snowball or OpsHub for Snow Family. For more information, see the <a
 *  href="https://docs.aws.amazon.com/AWSImportExport/latest/ug/api-reference.html">User
 *
 * \sa SnowballClient::listClusterJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListClusterJobsRequest::ListClusterJobsRequest(const ListClusterJobsRequest &other)
    : SnowballRequest(new ListClusterJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListClusterJobsRequest object.
 */
ListClusterJobsRequest::ListClusterJobsRequest()
    : SnowballRequest(new ListClusterJobsRequestPrivate(SnowballRequest::ListClusterJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListClusterJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListClusterJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListClusterJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListClusterJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Snowball::ListClusterJobsRequestPrivate
 * \brief The ListClusterJobsRequestPrivate class provides private implementation for ListClusterJobsRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a ListClusterJobsRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
ListClusterJobsRequestPrivate::ListClusterJobsRequestPrivate(
    const SnowballRequest::Action action, ListClusterJobsRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListClusterJobsRequest
 * class' copy constructor.
 */
ListClusterJobsRequestPrivate::ListClusterJobsRequestPrivate(
    const ListClusterJobsRequestPrivate &other, ListClusterJobsRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
