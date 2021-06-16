/*
    Copyright 2013-2021 Paul Colby

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

#include "describeengagementrequest.h"
#include "describeengagementrequest_p.h"
#include "describeengagementresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::DescribeEngagementRequest
 * \brief The DescribeEngagementRequest class provides an interface for SSMContacts DescribeEngagement requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::describeEngagement
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeEngagementRequest::DescribeEngagementRequest(const DescribeEngagementRequest &other)
    : SSMContactsRequest(new DescribeEngagementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeEngagementRequest object.
 */
DescribeEngagementRequest::DescribeEngagementRequest()
    : SSMContactsRequest(new DescribeEngagementRequestPrivate(SSMContactsRequest::DescribeEngagementAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeEngagementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeEngagementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeEngagementRequest::response(QNetworkReply * const reply) const
{
    return new DescribeEngagementResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::DescribeEngagementRequestPrivate
 * \brief The DescribeEngagementRequestPrivate class provides private implementation for DescribeEngagementRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a DescribeEngagementRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
DescribeEngagementRequestPrivate::DescribeEngagementRequestPrivate(
    const SSMContactsRequest::Action action, DescribeEngagementRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeEngagementRequest
 * class' copy constructor.
 */
DescribeEngagementRequestPrivate::DescribeEngagementRequestPrivate(
    const DescribeEngagementRequestPrivate &other, DescribeEngagementRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
