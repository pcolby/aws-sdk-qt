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
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
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
