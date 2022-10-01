// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdeploymentsrequest.h"
#include "listdeploymentsrequest_p.h"
#include "listdeploymentsresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::ListDeploymentsRequest
 * \brief The ListDeploymentsRequest class provides an interface for M2 ListDeployments requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::listDeployments
 */

/*!
 * Constructs a copy of \a other.
 */
ListDeploymentsRequest::ListDeploymentsRequest(const ListDeploymentsRequest &other)
    : M2Request(new ListDeploymentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeploymentsRequest object.
 */
ListDeploymentsRequest::ListDeploymentsRequest()
    : M2Request(new ListDeploymentsRequestPrivate(M2Request::ListDeploymentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDeploymentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDeploymentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeploymentsRequest::response(QNetworkReply * const reply) const
{
    return new ListDeploymentsResponse(*this, reply);
}

/*!
 * \class QtAws::M2::ListDeploymentsRequestPrivate
 * \brief The ListDeploymentsRequestPrivate class provides private implementation for ListDeploymentsRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a ListDeploymentsRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
ListDeploymentsRequestPrivate::ListDeploymentsRequestPrivate(
    const M2Request::Action action, ListDeploymentsRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDeploymentsRequest
 * class' copy constructor.
 */
ListDeploymentsRequestPrivate::ListDeploymentsRequestPrivate(
    const ListDeploymentsRequestPrivate &other, ListDeploymentsRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
