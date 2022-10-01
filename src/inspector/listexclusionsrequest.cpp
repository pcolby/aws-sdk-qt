// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
