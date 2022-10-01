// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
