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

#include "describepagerequest.h"
#include "describepagerequest_p.h"
#include "describepageresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SSMContacts {

/*!
 * \class QtAws::SSMContacts::DescribePageRequest
 * \brief The DescribePageRequest class provides an interface for SSMContacts DescribePage requests.
 *
 * \inmodule QtAwsSSMContacts
 *
 *
 * \sa SSMContactsClient::describePage
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePageRequest::DescribePageRequest(const DescribePageRequest &other)
    : SSMContactsRequest(new DescribePageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePageRequest object.
 */
DescribePageRequest::DescribePageRequest()
    : SSMContactsRequest(new DescribePageRequestPrivate(SSMContactsRequest::DescribePageAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePageRequest::response(QNetworkReply * const reply) const
{
    return new DescribePageResponse(*this, reply);
}

/*!
 * \class QtAws::SSMContacts::DescribePageRequestPrivate
 * \brief The DescribePageRequestPrivate class provides private implementation for DescribePageRequest.
 * \internal
 *
 * \inmodule QtAwsSSMContacts
 */

/*!
 * Constructs a DescribePageRequestPrivate object for SSMContacts \a action,
 * with public implementation \a q.
 */
DescribePageRequestPrivate::DescribePageRequestPrivate(
    const SSMContactsRequest::Action action, DescribePageRequest * const q)
    : SSMContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePageRequest
 * class' copy constructor.
 */
DescribePageRequestPrivate::DescribePageRequestPrivate(
    const DescribePageRequestPrivate &other, DescribePageRequest * const q)
    : SSMContactsRequestPrivate(other, q)
{

}

} // namespace SSMContacts
} // namespace QtAws
