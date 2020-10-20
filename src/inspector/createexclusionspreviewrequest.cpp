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

#include "createexclusionspreviewrequest.h"
#include "createexclusionspreviewrequest_p.h"
#include "createexclusionspreviewresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::CreateExclusionsPreviewRequest
 * \brief The CreateExclusionsPreviewRequest class provides an interface for Inspector CreateExclusionsPreview requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::createExclusionsPreview
 */

/*!
 * Constructs a copy of \a other.
 */
CreateExclusionsPreviewRequest::CreateExclusionsPreviewRequest(const CreateExclusionsPreviewRequest &other)
    : InspectorRequest(new CreateExclusionsPreviewRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateExclusionsPreviewRequest object.
 */
CreateExclusionsPreviewRequest::CreateExclusionsPreviewRequest()
    : InspectorRequest(new CreateExclusionsPreviewRequestPrivate(InspectorRequest::CreateExclusionsPreviewAction, this))
{

}

/*!
 * \reimp
 */
bool CreateExclusionsPreviewRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateExclusionsPreviewResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateExclusionsPreviewRequest::response(QNetworkReply * const reply) const
{
    return new CreateExclusionsPreviewResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::CreateExclusionsPreviewRequestPrivate
 * \brief The CreateExclusionsPreviewRequestPrivate class provides private implementation for CreateExclusionsPreviewRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a CreateExclusionsPreviewRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
CreateExclusionsPreviewRequestPrivate::CreateExclusionsPreviewRequestPrivate(
    const InspectorRequest::Action action, CreateExclusionsPreviewRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateExclusionsPreviewRequest
 * class' copy constructor.
 */
CreateExclusionsPreviewRequestPrivate::CreateExclusionsPreviewRequestPrivate(
    const CreateExclusionsPreviewRequestPrivate &other, CreateExclusionsPreviewRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
