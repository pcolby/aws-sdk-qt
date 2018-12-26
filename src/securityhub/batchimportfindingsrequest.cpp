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

#include "batchimportfindingsrequest.h"
#include "batchimportfindingsrequest_p.h"
#include "batchimportfindingsresponse.h"
#include "securityhubrequest_p.h"

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::BatchImportFindingsRequest
 * \brief The BatchImportFindingsRequest class provides an interface for SecurityHub BatchImportFindings requests.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::batchImportFindings
 */

/*!
 * Constructs a copy of \a other.
 */
BatchImportFindingsRequest::BatchImportFindingsRequest(const BatchImportFindingsRequest &other)
    : SecurityHubRequest(new BatchImportFindingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a BatchImportFindingsRequest object.
 */
BatchImportFindingsRequest::BatchImportFindingsRequest()
    : SecurityHubRequest(new BatchImportFindingsRequestPrivate(SecurityHubRequest::BatchImportFindingsAction, this))
{

}

/*!
 * \reimp
 */
bool BatchImportFindingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a BatchImportFindingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * BatchImportFindingsRequest::response(QNetworkReply * const reply) const
{
    return new BatchImportFindingsResponse(*this, reply);
}

/*!
 * \class QtAws::SecurityHub::BatchImportFindingsRequestPrivate
 * \brief The BatchImportFindingsRequestPrivate class provides private implementation for BatchImportFindingsRequest.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a BatchImportFindingsRequestPrivate object for SecurityHub \a action,
 * with public implementation \a q.
 */
BatchImportFindingsRequestPrivate::BatchImportFindingsRequestPrivate(
    const SecurityHubRequest::Action action, BatchImportFindingsRequest * const q)
    : SecurityHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the BatchImportFindingsRequest
 * class' copy constructor.
 */
BatchImportFindingsRequestPrivate::BatchImportFindingsRequestPrivate(
    const BatchImportFindingsRequestPrivate &other, BatchImportFindingsRequest * const q)
    : SecurityHubRequestPrivate(other, q)
{

}

} // namespace SecurityHub
} // namespace QtAws
