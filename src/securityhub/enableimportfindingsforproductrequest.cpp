/*
    Copyright 2013-2019 Paul Colby

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

#include "enableimportfindingsforproductrequest.h"
#include "enableimportfindingsforproductrequest_p.h"
#include "enableimportfindingsforproductresponse.h"
#include "securityhubrequest_p.h"

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::EnableImportFindingsForProductRequest
 * \brief The EnableImportFindingsForProductRequest class provides an interface for SecurityHub EnableImportFindingsForProduct requests.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::enableImportFindingsForProduct
 */

/*!
 * Constructs a copy of \a other.
 */
EnableImportFindingsForProductRequest::EnableImportFindingsForProductRequest(const EnableImportFindingsForProductRequest &other)
    : SecurityHubRequest(new EnableImportFindingsForProductRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableImportFindingsForProductRequest object.
 */
EnableImportFindingsForProductRequest::EnableImportFindingsForProductRequest()
    : SecurityHubRequest(new EnableImportFindingsForProductRequestPrivate(SecurityHubRequest::EnableImportFindingsForProductAction, this))
{

}

/*!
 * \reimp
 */
bool EnableImportFindingsForProductRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableImportFindingsForProductResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableImportFindingsForProductRequest::response(QNetworkReply * const reply) const
{
    return new EnableImportFindingsForProductResponse(*this, reply);
}

/*!
 * \class QtAws::SecurityHub::EnableImportFindingsForProductRequestPrivate
 * \brief The EnableImportFindingsForProductRequestPrivate class provides private implementation for EnableImportFindingsForProductRequest.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a EnableImportFindingsForProductRequestPrivate object for SecurityHub \a action,
 * with public implementation \a q.
 */
EnableImportFindingsForProductRequestPrivate::EnableImportFindingsForProductRequestPrivate(
    const SecurityHubRequest::Action action, EnableImportFindingsForProductRequest * const q)
    : SecurityHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableImportFindingsForProductRequest
 * class' copy constructor.
 */
EnableImportFindingsForProductRequestPrivate::EnableImportFindingsForProductRequestPrivate(
    const EnableImportFindingsForProductRequestPrivate &other, EnableImportFindingsForProductRequest * const q)
    : SecurityHubRequestPrivate(other, q)
{

}

} // namespace SecurityHub
} // namespace QtAws
