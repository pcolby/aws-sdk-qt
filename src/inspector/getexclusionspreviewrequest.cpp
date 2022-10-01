// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
