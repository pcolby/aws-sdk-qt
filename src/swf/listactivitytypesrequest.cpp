// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listactivitytypesrequest.h"
#include "listactivitytypesrequest_p.h"
#include "listactivitytypesresponse.h"
#include "swfrequest_p.h"

namespace QtAws {
namespace Swf {

/*!
 * \class QtAws::Swf::ListActivityTypesRequest
 * \brief The ListActivityTypesRequest class provides an interface for Swf ListActivityTypes requests.
 *
 * \inmodule QtAwsSwf
 *
 *  <fullname>Amazon Simple Workflow Service</fullname>
 * 
 *  The Amazon Simple Workflow Service (Amazon SWF) makes it easy to build applications that use Amazon's cloud to
 *  coordinate work across distributed components. In Amazon SWF, a <i>task</i> represents a logical unit of work that is
 *  performed by a component of your workflow. Coordinating tasks in a workflow involves managing intertask dependencies,
 *  scheduling, and concurrency in accordance with the logical flow of the
 * 
 *  application>
 * 
 *  Amazon SWF gives you full control over implementing tasks and coordinating them without worrying about underlying
 *  complexities such as tracking their progress and maintaining their
 * 
 *  state>
 * 
 *  This documentation serves as reference only. For a broader overview of the Amazon SWF programming model, see the <i> <a
 *  href="https://docs.aws.amazon.com/amazonswf/latest/developerguide/">Amazon SWF Developer Guide</a>
 *
 * \sa SwfClient::listActivityTypes
 */

/*!
 * Constructs a copy of \a other.
 */
ListActivityTypesRequest::ListActivityTypesRequest(const ListActivityTypesRequest &other)
    : SwfRequest(new ListActivityTypesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListActivityTypesRequest object.
 */
ListActivityTypesRequest::ListActivityTypesRequest()
    : SwfRequest(new ListActivityTypesRequestPrivate(SwfRequest::ListActivityTypesAction, this))
{

}

/*!
 * \reimp
 */
bool ListActivityTypesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListActivityTypesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListActivityTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListActivityTypesResponse(*this, reply);
}

/*!
 * \class QtAws::Swf::ListActivityTypesRequestPrivate
 * \brief The ListActivityTypesRequestPrivate class provides private implementation for ListActivityTypesRequest.
 * \internal
 *
 * \inmodule QtAwsSwf
 */

/*!
 * Constructs a ListActivityTypesRequestPrivate object for Swf \a action,
 * with public implementation \a q.
 */
ListActivityTypesRequestPrivate::ListActivityTypesRequestPrivate(
    const SwfRequest::Action action, ListActivityTypesRequest * const q)
    : SwfRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListActivityTypesRequest
 * class' copy constructor.
 */
ListActivityTypesRequestPrivate::ListActivityTypesRequestPrivate(
    const ListActivityTypesRequestPrivate &other, ListActivityTypesRequest * const q)
    : SwfRequestPrivate(other, q)
{

}

} // namespace Swf
} // namespace QtAws
