// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listcoveragerequest.h"
#include "listcoveragerequest_p.h"
#include "listcoverageresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::ListCoverageRequest
 * \brief The ListCoverageRequest class provides an interface for Inspector2 ListCoverage requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::listCoverage
 */

/*!
 * Constructs a copy of \a other.
 */
ListCoverageRequest::ListCoverageRequest(const ListCoverageRequest &other)
    : Inspector2Request(new ListCoverageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListCoverageRequest object.
 */
ListCoverageRequest::ListCoverageRequest()
    : Inspector2Request(new ListCoverageRequestPrivate(Inspector2Request::ListCoverageAction, this))
{

}

/*!
 * \reimp
 */
bool ListCoverageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListCoverageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListCoverageRequest::response(QNetworkReply * const reply) const
{
    return new ListCoverageResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::ListCoverageRequestPrivate
 * \brief The ListCoverageRequestPrivate class provides private implementation for ListCoverageRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a ListCoverageRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
ListCoverageRequestPrivate::ListCoverageRequestPrivate(
    const Inspector2Request::Action action, ListCoverageRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListCoverageRequest
 * class' copy constructor.
 */
ListCoverageRequestPrivate::ListCoverageRequestPrivate(
    const ListCoverageRequestPrivate &other, ListCoverageRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
