// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfiltersrequest.h"
#include "listfiltersrequest_p.h"
#include "listfiltersresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::ListFiltersRequest
 * \brief The ListFiltersRequest class provides an interface for Inspector2 ListFilters requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::listFilters
 */

/*!
 * Constructs a copy of \a other.
 */
ListFiltersRequest::ListFiltersRequest(const ListFiltersRequest &other)
    : Inspector2Request(new ListFiltersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFiltersRequest object.
 */
ListFiltersRequest::ListFiltersRequest()
    : Inspector2Request(new ListFiltersRequestPrivate(Inspector2Request::ListFiltersAction, this))
{

}

/*!
 * \reimp
 */
bool ListFiltersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFiltersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFiltersRequest::response(QNetworkReply * const reply) const
{
    return new ListFiltersResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::ListFiltersRequestPrivate
 * \brief The ListFiltersRequestPrivate class provides private implementation for ListFiltersRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a ListFiltersRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
ListFiltersRequestPrivate::ListFiltersRequestPrivate(
    const Inspector2Request::Action action, ListFiltersRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFiltersRequest
 * class' copy constructor.
 */
ListFiltersRequestPrivate::ListFiltersRequestPrivate(
    const ListFiltersRequestPrivate &other, ListFiltersRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
