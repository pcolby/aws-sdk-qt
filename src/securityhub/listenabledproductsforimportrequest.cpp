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

#include "listenabledproductsforimportrequest.h"
#include "listenabledproductsforimportrequest_p.h"
#include "listenabledproductsforimportresponse.h"
#include "securityhubrequest_p.h"

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::ListEnabledProductsForImportRequest
 * \brief The ListEnabledProductsForImportRequest class provides an interface for SecurityHub ListEnabledProductsForImport requests.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::listEnabledProductsForImport
 */

/*!
 * Constructs a copy of \a other.
 */
ListEnabledProductsForImportRequest::ListEnabledProductsForImportRequest(const ListEnabledProductsForImportRequest &other)
    : SecurityHubRequest(new ListEnabledProductsForImportRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEnabledProductsForImportRequest object.
 */
ListEnabledProductsForImportRequest::ListEnabledProductsForImportRequest()
    : SecurityHubRequest(new ListEnabledProductsForImportRequestPrivate(SecurityHubRequest::ListEnabledProductsForImportAction, this))
{

}

/*!
 * \reimp
 */
bool ListEnabledProductsForImportRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEnabledProductsForImportResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEnabledProductsForImportRequest::response(QNetworkReply * const reply) const
{
    return new ListEnabledProductsForImportResponse(*this, reply);
}

/*!
 * \class QtAws::SecurityHub::ListEnabledProductsForImportRequestPrivate
 * \brief The ListEnabledProductsForImportRequestPrivate class provides private implementation for ListEnabledProductsForImportRequest.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a ListEnabledProductsForImportRequestPrivate object for SecurityHub \a action,
 * with public implementation \a q.
 */
ListEnabledProductsForImportRequestPrivate::ListEnabledProductsForImportRequestPrivate(
    const SecurityHubRequest::Action action, ListEnabledProductsForImportRequest * const q)
    : SecurityHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEnabledProductsForImportRequest
 * class' copy constructor.
 */
ListEnabledProductsForImportRequestPrivate::ListEnabledProductsForImportRequestPrivate(
    const ListEnabledProductsForImportRequestPrivate &other, ListEnabledProductsForImportRequest * const q)
    : SecurityHubRequestPrivate(other, q)
{

}

} // namespace SecurityHub
} // namespace QtAws
