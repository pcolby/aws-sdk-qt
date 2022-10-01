// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtemplatesrequest.h"
#include "listtemplatesrequest_p.h"
#include "listtemplatesresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::ListTemplatesRequest
 * \brief The ListTemplatesRequest class provides an interface for Pinpoint ListTemplates requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::listTemplates
 */

/*!
 * Constructs a copy of \a other.
 */
ListTemplatesRequest::ListTemplatesRequest(const ListTemplatesRequest &other)
    : PinpointRequest(new ListTemplatesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTemplatesRequest object.
 */
ListTemplatesRequest::ListTemplatesRequest()
    : PinpointRequest(new ListTemplatesRequestPrivate(PinpointRequest::ListTemplatesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTemplatesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTemplatesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTemplatesRequest::response(QNetworkReply * const reply) const
{
    return new ListTemplatesResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::ListTemplatesRequestPrivate
 * \brief The ListTemplatesRequestPrivate class provides private implementation for ListTemplatesRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a ListTemplatesRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
ListTemplatesRequestPrivate::ListTemplatesRequestPrivate(
    const PinpointRequest::Action action, ListTemplatesRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTemplatesRequest
 * class' copy constructor.
 */
ListTemplatesRequestPrivate::ListTemplatesRequestPrivate(
    const ListTemplatesRequestPrivate &other, ListTemplatesRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
