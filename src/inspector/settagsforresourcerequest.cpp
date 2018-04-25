/*
    Copyright 2013-2018 Paul Colby

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

#include "settagsforresourcerequest.h"
#include "settagsforresourcerequest_p.h"
#include "settagsforresourceresponse.h"
#include "inspectorrequest_p.h"

namespace QtAws {
namespace Inspector {

/*!
 * \class QtAws::Inspector::SetTagsForResourceRequest
 * \brief The SetTagsForResourceRequest class provides an interface for Inspector SetTagsForResource requests.
 *
 * \inmodule QtAwsInspector
 *
 *  <fullname>Amazon Inspector</fullname>
 * 
 *  Amazon Inspector enables you to analyze the behavior of your AWS resources and to identify potential security issues.
 *  For more information, see <a href="http://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
 *  Amazon Inspector User
 *
 * \sa InspectorClient::setTagsForResource
 */

/*!
 * Constructs a copy of \a other.
 */
SetTagsForResourceRequest::SetTagsForResourceRequest(const SetTagsForResourceRequest &other)
    : InspectorRequest(new SetTagsForResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetTagsForResourceRequest object.
 */
SetTagsForResourceRequest::SetTagsForResourceRequest()
    : InspectorRequest(new SetTagsForResourceRequestPrivate(InspectorRequest::SetTagsForResourceAction, this))
{

}

/*!
 * \reimp
 */
bool SetTagsForResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetTagsForResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetTagsForResourceRequest::response(QNetworkReply * const reply) const
{
    return new SetTagsForResourceResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector::SetTagsForResourceRequestPrivate
 * \brief The SetTagsForResourceRequestPrivate class provides private implementation for SetTagsForResourceRequest.
 * \internal
 *
 * \inmodule QtAwsInspector
 */

/*!
 * Constructs a SetTagsForResourceRequestPrivate object for Inspector \a action,
 * with public implementation \a q.
 */
SetTagsForResourceRequestPrivate::SetTagsForResourceRequestPrivate(
    const InspectorRequest::Action action, SetTagsForResourceRequest * const q)
    : InspectorRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetTagsForResourceRequest
 * class' copy constructor.
 */
SetTagsForResourceRequestPrivate::SetTagsForResourceRequestPrivate(
    const SetTagsForResourceRequestPrivate &other, SetTagsForResourceRequest * const q)
    : InspectorRequestPrivate(other, q)
{

}

} // namespace Inspector
} // namespace QtAws
