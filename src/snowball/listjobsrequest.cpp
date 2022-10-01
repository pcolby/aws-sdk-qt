// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listjobsrequest.h"
#include "listjobsrequest_p.h"
#include "listjobsresponse.h"
#include "snowballrequest_p.h"

namespace QtAws {
namespace Snowball {

/*!
 * \class QtAws::Snowball::ListJobsRequest
 * \brief The ListJobsRequest class provides an interface for Snowball ListJobs requests.
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
 * \sa SnowballClient::listJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListJobsRequest::ListJobsRequest(const ListJobsRequest &other)
    : SnowballRequest(new ListJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListJobsRequest object.
 */
ListJobsRequest::ListJobsRequest()
    : SnowballRequest(new ListJobsRequestPrivate(SnowballRequest::ListJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Snowball::ListJobsRequestPrivate
 * \brief The ListJobsRequestPrivate class provides private implementation for ListJobsRequest.
 * \internal
 *
 * \inmodule QtAwsSnowball
 */

/*!
 * Constructs a ListJobsRequestPrivate object for Snowball \a action,
 * with public implementation \a q.
 */
ListJobsRequestPrivate::ListJobsRequestPrivate(
    const SnowballRequest::Action action, ListJobsRequest * const q)
    : SnowballRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListJobsRequest
 * class' copy constructor.
 */
ListJobsRequestPrivate::ListJobsRequestPrivate(
    const ListJobsRequestPrivate &other, ListJobsRequest * const q)
    : SnowballRequestPrivate(other, q)
{

}

} // namespace Snowball
} // namespace QtAws
