// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtemplateversionsrequest.h"
#include "listtemplateversionsrequest_p.h"
#include "listtemplateversionsresponse.h"
#include "pinpointrequest_p.h"

namespace QtAws {
namespace Pinpoint {

/*!
 * \class QtAws::Pinpoint::ListTemplateVersionsRequest
 * \brief The ListTemplateVersionsRequest class provides an interface for Pinpoint ListTemplateVersions requests.
 *
 * \inmodule QtAwsPinpoint
 *
 *  Doc Engage API - Amazon Pinpoint
 *
 * \sa PinpointClient::listTemplateVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListTemplateVersionsRequest::ListTemplateVersionsRequest(const ListTemplateVersionsRequest &other)
    : PinpointRequest(new ListTemplateVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTemplateVersionsRequest object.
 */
ListTemplateVersionsRequest::ListTemplateVersionsRequest()
    : PinpointRequest(new ListTemplateVersionsRequestPrivate(PinpointRequest::ListTemplateVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTemplateVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTemplateVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTemplateVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListTemplateVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Pinpoint::ListTemplateVersionsRequestPrivate
 * \brief The ListTemplateVersionsRequestPrivate class provides private implementation for ListTemplateVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpoint
 */

/*!
 * Constructs a ListTemplateVersionsRequestPrivate object for Pinpoint \a action,
 * with public implementation \a q.
 */
ListTemplateVersionsRequestPrivate::ListTemplateVersionsRequestPrivate(
    const PinpointRequest::Action action, ListTemplateVersionsRequest * const q)
    : PinpointRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTemplateVersionsRequest
 * class' copy constructor.
 */
ListTemplateVersionsRequestPrivate::ListTemplateVersionsRequestPrivate(
    const ListTemplateVersionsRequestPrivate &other, ListTemplateVersionsRequest * const q)
    : PinpointRequestPrivate(other, q)
{

}

} // namespace Pinpoint
} // namespace QtAws
