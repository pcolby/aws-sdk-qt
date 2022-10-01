/*
    Copyright 2013-2021 Paul Colby

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

#include "listconfigurationsetsrequest.h"
#include "listconfigurationsetsrequest_p.h"
#include "listconfigurationsetsresponse.h"
#include "pinpointsmsvoicerequest_p.h"

namespace QtAws {
namespace PinpointSmsVoice {

/*!
 * \class QtAws::PinpointSmsVoice::ListConfigurationSetsRequest
 * \brief The ListConfigurationSetsRequest class provides an interface for PinpointSmsVoice ListConfigurationSets requests.
 *
 * \inmodule QtAwsPinpointSmsVoice
 *
 *
 * \sa PinpointSmsVoiceClient::listConfigurationSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListConfigurationSetsRequest::ListConfigurationSetsRequest(const ListConfigurationSetsRequest &other)
    : PinpointSmsVoiceRequest(new ListConfigurationSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConfigurationSetsRequest object.
 */
ListConfigurationSetsRequest::ListConfigurationSetsRequest()
    : PinpointSmsVoiceRequest(new ListConfigurationSetsRequestPrivate(PinpointSmsVoiceRequest::ListConfigurationSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListConfigurationSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListConfigurationSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListConfigurationSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListConfigurationSetsResponse(*this, reply);
}

/*!
 * \class QtAws::PinpointSmsVoice::ListConfigurationSetsRequestPrivate
 * \brief The ListConfigurationSetsRequestPrivate class provides private implementation for ListConfigurationSetsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSmsVoice
 */

/*!
 * Constructs a ListConfigurationSetsRequestPrivate object for PinpointSmsVoice \a action,
 * with public implementation \a q.
 */
ListConfigurationSetsRequestPrivate::ListConfigurationSetsRequestPrivate(
    const PinpointSmsVoiceRequest::Action action, ListConfigurationSetsRequest * const q)
    : PinpointSmsVoiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListConfigurationSetsRequest
 * class' copy constructor.
 */
ListConfigurationSetsRequestPrivate::ListConfigurationSetsRequestPrivate(
    const ListConfigurationSetsRequestPrivate &other, ListConfigurationSetsRequest * const q)
    : PinpointSmsVoiceRequestPrivate(other, q)
{

}

} // namespace PinpointSmsVoice
} // namespace QtAws
