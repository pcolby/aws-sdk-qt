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

#include "listgraphsrequest.h"
#include "listgraphsrequest_p.h"
#include "listgraphsresponse.h"
#include "detectiverequest_p.h"

namespace QtAws {
namespace Detective {

/*!
 * \class QtAws::Detective::ListGraphsRequest
 * \brief The ListGraphsRequest class provides an interface for Detective ListGraphs requests.
 *
 * \inmodule QtAwsDetective
 *
 *  Detective uses machine learning and purpose-built visualizations to help you analyze and investigate security issues
 *  across your Amazon Web Services (AWS) workloads. Detective automatically extracts time-based events such as login
 *  attempts, API calls, and network traffic from AWS CloudTrail and Amazon Virtual Private Cloud (Amazon VPC) flow logs. It
 *  also extracts findings detected by Amazon
 * 
 *  GuardDuty>
 * 
 *  The Detective API primarily supports the creation and management of behavior graphs. A behavior graph contains the
 *  extracted data from a set of member accounts, and is created and managed by an administrator
 * 
 *  account>
 * 
 *  Every behavior graph is specific to a Region. You can only use the API to manage graphs that belong to the Region that
 *  is associated with the currently selected
 * 
 *  endpoint>
 * 
 *  A Detective administrator account can use the Detective API to do the
 * 
 *  following> <ul> <li>
 * 
 *  Enable and disable Detective. Enabling Detective creates a new behavior
 * 
 *  graph> </li> <li>
 * 
 *  View the list of member accounts in a behavior
 * 
 *  graph> </li> <li>
 * 
 *  Add member accounts to a behavior
 * 
 *  graph> </li> <li>
 * 
 *  Remove member accounts from a behavior
 * 
 *  graph> </li> </ul>
 * 
 *  A member account can use the Detective API to do the
 * 
 *  following> <ul> <li>
 * 
 *  View the list of behavior graphs that they are invited
 * 
 *  to> </li> <li>
 * 
 *  Accept an invitation to contribute to a behavior
 * 
 *  graph> </li> <li>
 * 
 *  Decline an invitation to contribute to a behavior
 * 
 *  graph> </li> <li>
 * 
 *  Remove their account from a behavior
 * 
 *  graph> </li> </ul>
 * 
 *  All API actions are logged as CloudTrail events. See <a
 *  href="https://docs.aws.amazon.com/detective/latest/adminguide/logging-using-cloudtrail.html">Logging Detective API Calls
 *  with
 * 
 *  CloudTrail</a>> <note>
 * 
 *  We replaced the term "master account" with the term "administrator account." An administrator account is used to
 *  centrally manage multiple accounts. In the case of Detective, the administrator account manages the accounts in their
 *  behavior
 *
 * \sa DetectiveClient::listGraphs
 */

/*!
 * Constructs a copy of \a other.
 */
ListGraphsRequest::ListGraphsRequest(const ListGraphsRequest &other)
    : DetectiveRequest(new ListGraphsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListGraphsRequest object.
 */
ListGraphsRequest::ListGraphsRequest()
    : DetectiveRequest(new ListGraphsRequestPrivate(DetectiveRequest::ListGraphsAction, this))
{

}

/*!
 * \reimp
 */
bool ListGraphsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListGraphsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListGraphsRequest::response(QNetworkReply * const reply) const
{
    return new ListGraphsResponse(*this, reply);
}

/*!
 * \class QtAws::Detective::ListGraphsRequestPrivate
 * \brief The ListGraphsRequestPrivate class provides private implementation for ListGraphsRequest.
 * \internal
 *
 * \inmodule QtAwsDetective
 */

/*!
 * Constructs a ListGraphsRequestPrivate object for Detective \a action,
 * with public implementation \a q.
 */
ListGraphsRequestPrivate::ListGraphsRequestPrivate(
    const DetectiveRequest::Action action, ListGraphsRequest * const q)
    : DetectiveRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListGraphsRequest
 * class' copy constructor.
 */
ListGraphsRequestPrivate::ListGraphsRequestPrivate(
    const ListGraphsRequestPrivate &other, ListGraphsRequest * const q)
    : DetectiveRequestPrivate(other, q)
{

}

} // namespace Detective
} // namespace QtAws
