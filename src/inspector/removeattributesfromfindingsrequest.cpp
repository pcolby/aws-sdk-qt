/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "removeattributesfromfindingsrequest.h"
#include "removeattributesfromfindingsrequest_p.h"
#include "removeattributesfromfindingsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::RemoveAttributesFromFindingsRequest
 * \brief The RemoveAttributesFromFindingsRequest class provides an interface for Inspector RemoveAttributesFromFindings requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::removeAttributesFromFindings
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveAttributesFromFindingsRequest::RemoveAttributesFromFindingsRequest(const RemoveAttributesFromFindingsRequest &other)
    : InspectorRequest(new RemoveAttributesFromFindingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveAttributesFromFindingsRequest object.
 */
RemoveAttributesFromFindingsRequest::RemoveAttributesFromFindingsRequest()
    : InspectorRequest(new RemoveAttributesFromFindingsRequestPrivate(InspectorRequest::RemoveAttributesFromFindingsAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveAttributesFromFindingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveAttributesFromFindingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveAttributesFromFindingsRequest::response(QNetworkReply * const reply) const
{
    return new RemoveAttributesFromFindingsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::RemoveAttributesFromFindingsRequestPrivate
 * \brief The RemoveAttributesFromFindingsRequestPrivate class provides private implementation for RemoveAttributesFromFindingsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 *
 * Constructs a RemoveAttributesFromFindingsRequestPrivate object for Inspector \a action with,
 * public implementation \a q.
 */
RemoveAttributesFromFindingsRequestPrivate::RemoveAttributesFromFindingsRequestPrivate(
    const InspectorRequest::Action action, RemoveAttributesFromFindingsRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveAttributesFromFindingsRequest
 * class' copy constructor.
 */
RemoveAttributesFromFindingsRequestPrivate::RemoveAttributesFromFindingsRequestPrivate(
    const RemoveAttributesFromFindingsRequestPrivate &other, RemoveAttributesFromFindingsRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
