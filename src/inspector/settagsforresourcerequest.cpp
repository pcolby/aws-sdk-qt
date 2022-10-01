// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  For more information, see <a href="https://docs.aws.amazon.com/inspector/latest/userguide/inspector_introduction.html">
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
