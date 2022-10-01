// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "previewagentsrequest.h"
#include "previewagentsrequest_p.h"
#include "previewagentsresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::PreviewAgentsRequest
 * \brief The PreviewAgentsRequest class provides an interface for Inspector PreviewAgents requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::previewAgents
 */

/*!
 * Constructs a copy of \a other.
 */
PreviewAgentsRequest::PreviewAgentsRequest(const PreviewAgentsRequest &other)
    : InspectorRequest(new PreviewAgentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PreviewAgentsRequest object.
 */
PreviewAgentsRequest::PreviewAgentsRequest()
    : InspectorRequest(new PreviewAgentsRequestPrivate(InspectorRequest::PreviewAgentsAction, this))
{

}

/*!
 * \reimp
 */
bool PreviewAgentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PreviewAgentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PreviewAgentsRequest::response(QNetworkReply * const reply) const
{
    return new PreviewAgentsResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::PreviewAgentsRequestPrivate
 * \brief The PreviewAgentsRequestPrivate class provides private implementation for PreviewAgentsRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a PreviewAgentsRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
PreviewAgentsRequestPrivate::PreviewAgentsRequestPrivate(
    const InspectorRequest::Action action, PreviewAgentsRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PreviewAgentsRequest
 * class' copy constructor.
 */
PreviewAgentsRequestPrivate::PreviewAgentsRequestPrivate(
    const PreviewAgentsRequestPrivate &other, PreviewAgentsRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
