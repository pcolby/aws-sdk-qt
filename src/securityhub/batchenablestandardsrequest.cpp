/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "batchenablestandardsrequest.h"
#include "batchenablestandardsrequest_p.h"
#include "batchenablestandardsresponse.h"
#include "securityhubrequest_p.h"

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::BatchEnableStandardsRequest
 * \brief The BatchEnableStandardsRequest class provides an interface for SecurityHub BatchEnableStandards requests.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::batchEnableStandards
 */

/*!
 * Constructs a copy of \a other.
 */
BatchEnableStandardsRequest::BatchEnableStandardsRequest(const BatchEnableStandardsRequest &other)
    : SecurityHubRequest(new BatchEnableStandardsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchEnableStandardsRequest object.
 */
BatchEnableStandardsRequest::BatchEnableStandardsRequest()
    : SecurityHubRequest(new BatchEnableStandardsRequestPrivate(SecurityHubRequest::BatchEnableStandardsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchEnableStandardsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchEnableStandardsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchEnableStandardsRequest::response(QNetworkReply * const reply) const
{
    return new BatchEnableStandardsResponse(*this, reply);
}

/*!
 * \class QtAws::SecurityHub::BatchEnableStandardsRequestPrivate
 * \brief The BatchEnableStandardsRequestPrivate class provides private implementation for BatchEnableStandardsRequest.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a BatchEnableStandardsRequestPrivate object for SecurityHub \a action,
 * with public implementation \a q.
 */
BatchEnableStandardsRequestPrivate::BatchEnableStandardsRequestPrivate(
    const SecurityHubRequest::Action action, BatchEnableStandardsRequest * const q)
    : SecurityHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchEnableStandardsRequest
 * class' copy constructor.
 */
BatchEnableStandardsRequestPrivate::BatchEnableStandardsRequestPrivate(
    const BatchEnableStandardsRequestPrivate &other, BatchEnableStandardsRequest * const q)
    : SecurityHubRequestPrivate(other, q)
{

}

} // namespace SecurityHub
} // namespace QtAws
