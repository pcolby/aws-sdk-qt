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

#include "getexclusionspreviewrequest.h"
#include "getexclusionspreviewrequest_p.h"
#include "getexclusionspreviewresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::GetExclusionsPreviewRequest
 * \brief The GetExclusionsPreviewRequest class provides an interface for Inspector GetExclusionsPreview requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::getExclusionsPreview
 */

/*!
 * Constructs a copy of \a other.
 */
GetExclusionsPreviewRequest::GetExclusionsPreviewRequest(const GetExclusionsPreviewRequest &other)
    : InspectorRequest(new GetExclusionsPreviewRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetExclusionsPreviewRequest object.
 */
GetExclusionsPreviewRequest::GetExclusionsPreviewRequest()
    : InspectorRequest(new GetExclusionsPreviewRequestPrivate(InspectorRequest::GetExclusionsPreviewAction, this))
{

}

/*!
 * \reimp
 */
bool GetExclusionsPreviewRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetExclusionsPreviewResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetExclusionsPreviewRequest::response(QNetworkReply * const reply) const
{
    return new GetExclusionsPreviewResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::GetExclusionsPreviewRequestPrivate
 * \brief The GetExclusionsPreviewRequestPrivate class provides private implementation for GetExclusionsPreviewRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a GetExclusionsPreviewRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
GetExclusionsPreviewRequestPrivate::GetExclusionsPreviewRequestPrivate(
    const InspectorRequest::Action action, GetExclusionsPreviewRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetExclusionsPreviewRequest
 * class' copy constructor.
 */
GetExclusionsPreviewRequestPrivate::GetExclusionsPreviewRequestPrivate(
    const GetExclusionsPreviewRequestPrivate &other, GetExclusionsPreviewRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
