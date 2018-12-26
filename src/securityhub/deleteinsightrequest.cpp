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

#include "deleteinsightrequest.h"
#include "deleteinsightrequest_p.h"
#include "deleteinsightresponse.h"
#include "securityhubrequest_p.h"

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::DeleteInsightRequest
 * \brief The DeleteInsightRequest class provides an interface for SecurityHub DeleteInsight requests.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::deleteInsight
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInsightRequest::DeleteInsightRequest(const DeleteInsightRequest &other)
    : SecurityHubRequest(new DeleteInsightRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInsightRequest object.
 */
DeleteInsightRequest::DeleteInsightRequest()
    : SecurityHubRequest(new DeleteInsightRequestPrivate(SecurityHubRequest::DeleteInsightAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInsightRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInsightResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInsightRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInsightResponse(*this, reply);
}

/*!
 * \class QtAws::SecurityHub::DeleteInsightRequestPrivate
 * \brief The DeleteInsightRequestPrivate class provides private implementation for DeleteInsightRequest.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a DeleteInsightRequestPrivate object for SecurityHub \a action,
 * with public implementation \a q.
 */
DeleteInsightRequestPrivate::DeleteInsightRequestPrivate(
    const SecurityHubRequest::Action action, DeleteInsightRequest * const q)
    : SecurityHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInsightRequest
 * class' copy constructor.
 */
DeleteInsightRequestPrivate::DeleteInsightRequestPrivate(
    const DeleteInsightRequestPrivate &other, DeleteInsightRequest * const q)
    : SecurityHubRequestPrivate(other, q)
{

}

} // namespace SecurityHub
} // namespace QtAws
