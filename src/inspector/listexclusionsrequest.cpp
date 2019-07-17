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

#include "listexclusionsrequest.h"
#include "listexclusionsrequest_p.h"
#include "listexclusionsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::ListExclusionsRequest
 * \brief The ListExclusionsRequest class provides an interface for Inspector ListExclusions requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::listExclusions
 */

/*!
 * Constructs a copy of \a other.
 */
ListExclusionsRequest::ListExclusionsRequest(const ListExclusionsRequest &other)
    : InspectorRequest(new ListExclusionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExclusionsRequest object.
 */
ListExclusionsRequest::ListExclusionsRequest()
    : InspectorRequest(new ListExclusionsRequestPrivate(InspectorRequest::ListExclusionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListExclusionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExclusionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExclusionsRequest::response(QNetworkReply * const reply) const
{
    return new ListExclusionsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::ListExclusionsRequestPrivate
 * \brief The ListExclusionsRequestPrivate class provides private implementation for ListExclusionsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a ListExclusionsRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
ListExclusionsRequestPrivate::ListExclusionsRequestPrivate(
    const InspectorRequest::Action action, ListExclusionsRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExclusionsRequest
 * class' copy constructor.
 */
ListExclusionsRequestPrivate::ListExclusionsRequestPrivate(
    const ListExclusionsRequestPrivate &other, ListExclusionsRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
