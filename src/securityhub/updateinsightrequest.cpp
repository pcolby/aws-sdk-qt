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

#include "updateinsightrequest.h"
#include "updateinsightrequest_p.h"
#include "updateinsightresponse.h"
#include "securityhubrequest_p.h"

namespace QtAws {
namespace SecurityHub {

/*!
 * \class QtAws::SecurityHub::UpdateInsightRequest
 * \brief The UpdateInsightRequest class provides an interface for SecurityHub UpdateInsight requests.
 *
 * \inmodule QtAwsSecurityHub
 *
 *  AWS Security Hub provides you with a comprehensive view of your security state within AWS and your compliance with the
 *  security industry standards and best practices. Security Hub collects security data from across AWS accounts, services,
 *  and supported third-party partners and helps you analyze your security trends and identify the highest priority security
 *  issues. For more information, see <a href="">AWS Security Hub User Guide</a>.
 *
 * \sa SecurityHubClient::updateInsight
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateInsightRequest::UpdateInsightRequest(const UpdateInsightRequest &other)
    : SecurityHubRequest(new UpdateInsightRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateInsightRequest object.
 */
UpdateInsightRequest::UpdateInsightRequest()
    : SecurityHubRequest(new UpdateInsightRequestPrivate(SecurityHubRequest::UpdateInsightAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateInsightRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateInsightResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateInsightRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInsightResponse(*this, reply);
}

/*!
 * \class QtAws::SecurityHub::UpdateInsightRequestPrivate
 * \brief The UpdateInsightRequestPrivate class provides private implementation for UpdateInsightRequest.
 * \internal
 *
 * \inmodule QtAwsSecurityHub
 */

/*!
 * Constructs a UpdateInsightRequestPrivate object for SecurityHub \a action,
 * with public implementation \a q.
 */
UpdateInsightRequestPrivate::UpdateInsightRequestPrivate(
    const SecurityHubRequest::Action action, UpdateInsightRequest * const q)
    : SecurityHubRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateInsightRequest
 * class' copy constructor.
 */
UpdateInsightRequestPrivate::UpdateInsightRequestPrivate(
    const UpdateInsightRequestPrivate &other, UpdateInsightRequest * const q)
    : SecurityHubRequestPrivate(other, q)
{

}

} // namespace SecurityHub
} // namespace QtAws
