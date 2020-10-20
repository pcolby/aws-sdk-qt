/*
    Copyright 2013-2020 Paul Colby

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

#include "listpoliciesrequest.h"
#include "listpoliciesrequest_p.h"
#include "listpoliciesresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace FMS {

/*!
 * \class QtAws::FMS::ListPoliciesRequest
 * \brief The ListPoliciesRequest class provides an interface for FMS ListPolicies requests.
 *
 * \inmodule QtAwsFMS
 *
 *  <fullname>AWS Firewall Manager</fullname>
 * 
 *  This is the <i>AWS Firewall Manager API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Firewall Manager API actions, data types, and errors. For detailed information about AWS Firewall Manager
 *  features, see the <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">AWS Firewall Manager
 *  Developer
 *
 * \sa FmsClient::listPolicies
 */

/*!
 * Constructs a copy of \a other.
 */
ListPoliciesRequest::ListPoliciesRequest(const ListPoliciesRequest &other)
    : FmsRequest(new ListPoliciesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPoliciesRequest object.
 */
ListPoliciesRequest::ListPoliciesRequest()
    : FmsRequest(new ListPoliciesRequestPrivate(FmsRequest::ListPoliciesAction, this))
{

}

/*!
 * \reimp
 */
bool ListPoliciesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPoliciesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPoliciesRequest::response(QNetworkReply * const reply) const
{
    return new ListPoliciesResponse(*this, reply);
}

/*!
 * \class QtAws::FMS::ListPoliciesRequestPrivate
 * \brief The ListPoliciesRequestPrivate class provides private implementation for ListPoliciesRequest.
 * \internal
 *
 * \inmodule QtAwsFMS
 */

/*!
 * Constructs a ListPoliciesRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
ListPoliciesRequestPrivate::ListPoliciesRequestPrivate(
    const FmsRequest::Action action, ListPoliciesRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPoliciesRequest
 * class' copy constructor.
 */
ListPoliciesRequestPrivate::ListPoliciesRequestPrivate(
    const ListPoliciesRequestPrivate &other, ListPoliciesRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace FMS
} // namespace QtAws
