// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listenvironmentsrequest.h"
#include "listenvironmentsrequest_p.h"
#include "listenvironmentsresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::ListEnvironmentsRequest
 * \brief The ListEnvironmentsRequest class provides an interface for M2 ListEnvironments requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::listEnvironments
 */

/*!
 * Constructs a copy of \a other.
 */
ListEnvironmentsRequest::ListEnvironmentsRequest(const ListEnvironmentsRequest &other)
    : M2Request(new ListEnvironmentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEnvironmentsRequest object.
 */
ListEnvironmentsRequest::ListEnvironmentsRequest()
    : M2Request(new ListEnvironmentsRequestPrivate(M2Request::ListEnvironmentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEnvironmentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEnvironmentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEnvironmentsRequest::response(QNetworkReply * const reply) const
{
    return new ListEnvironmentsResponse(*this, reply);
}

/*!
 * \class QtAws::M2::ListEnvironmentsRequestPrivate
 * \brief The ListEnvironmentsRequestPrivate class provides private implementation for ListEnvironmentsRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a ListEnvironmentsRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
ListEnvironmentsRequestPrivate::ListEnvironmentsRequestPrivate(
    const M2Request::Action action, ListEnvironmentsRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEnvironmentsRequest
 * class' copy constructor.
 */
ListEnvironmentsRequestPrivate::ListEnvironmentsRequestPrivate(
    const ListEnvironmentsRequestPrivate &other, ListEnvironmentsRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
