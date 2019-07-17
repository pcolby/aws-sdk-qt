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

#include "addattributestofindingsrequest.h"
#include "addattributestofindingsrequest_p.h"
#include "addattributestofindingsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::AddAttributesToFindingsRequest
 * \brief The AddAttributesToFindingsRequest class provides an interface for Inspector AddAttributesToFindings requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::addAttributesToFindings
 */

/*!
 * Constructs a copy of \a other.
 */
AddAttributesToFindingsRequest::AddAttributesToFindingsRequest(const AddAttributesToFindingsRequest &other)
    : InspectorRequest(new AddAttributesToFindingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AddAttributesToFindingsRequest object.
 */
AddAttributesToFindingsRequest::AddAttributesToFindingsRequest()
    : InspectorRequest(new AddAttributesToFindingsRequestPrivate(InspectorRequest::AddAttributesToFindingsAction, this))
{

}

/*!
 * \reimp
 */
bool AddAttributesToFindingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AddAttributesToFindingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AddAttributesToFindingsRequest::response(QNetworkReply * const reply) const
{
    return new AddAttributesToFindingsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::AddAttributesToFindingsRequestPrivate
 * \brief The AddAttributesToFindingsRequestPrivate class provides private implementation for AddAttributesToFindingsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a AddAttributesToFindingsRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
AddAttributesToFindingsRequestPrivate::AddAttributesToFindingsRequestPrivate(
    const InspectorRequest::Action action, AddAttributesToFindingsRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AddAttributesToFindingsRequest
 * class' copy constructor.
 */
AddAttributesToFindingsRequestPrivate::AddAttributesToFindingsRequestPrivate(
    const AddAttributesToFindingsRequestPrivate &other, AddAttributesToFindingsRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
