// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcoveragestatisticsrequest.h"
#include "listcoveragestatisticsrequest_p.h"
#include "listcoveragestatisticsresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::ListCoverageStatisticsRequest
 * \brief The ListCoverageStatisticsRequest class provides an interface for Inspector2 ListCoverageStatistics requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::listCoverageStatistics
 */

/*!
 * Constructs a copy of \a other.
 */
ListCoverageStatisticsRequest::ListCoverageStatisticsRequest(const ListCoverageStatisticsRequest &other)
    : Inspector2Request(new ListCoverageStatisticsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCoverageStatisticsRequest object.
 */
ListCoverageStatisticsRequest::ListCoverageStatisticsRequest()
    : Inspector2Request(new ListCoverageStatisticsRequestPrivate(Inspector2Request::ListCoverageStatisticsAction, this))
{

}

/*!
 * \reimp
 */
bool ListCoverageStatisticsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCoverageStatisticsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCoverageStatisticsRequest::response(QNetworkReply * const reply) const
{
    return new ListCoverageStatisticsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::ListCoverageStatisticsRequestPrivate
 * \brief The ListCoverageStatisticsRequestPrivate class provides private implementation for ListCoverageStatisticsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a ListCoverageStatisticsRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
ListCoverageStatisticsRequestPrivate::ListCoverageStatisticsRequestPrivate(
    const Inspector2Request::Action action, ListCoverageStatisticsRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCoverageStatisticsRequest
 * class' copy constructor.
 */
ListCoverageStatisticsRequestPrivate::ListCoverageStatisticsRequestPrivate(
    const ListCoverageStatisticsRequestPrivate &other, ListCoverageStatisticsRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
