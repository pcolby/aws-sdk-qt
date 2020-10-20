/*
    Copyright 2013-2020 Paul Colby

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
namespace PinpointSMSVoice {

/*!
 * \class QtAws::PinpointSMSVoice::ListConfigurationSetsRequest
 * \brief The ListConfigurationSetsRequest class provides an interface for PinpointSMSVoice ListConfigurationSets requests.
 *
 * \inmodule QtAwsPinpointSMSVoice
 *
 *
 * \sa PinpointSMSVoiceClient::listConfigurationSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListConfigurationSetsRequest::ListConfigurationSetsRequest(const ListConfigurationSetsRequest &other)
    : PinpointSMSVoiceRequest(new ListConfigurationSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListConfigurationSetsRequest object.
 */
ListConfigurationSetsRequest::ListConfigurationSetsRequest()
    : PinpointSMSVoiceRequest(new ListConfigurationSetsRequestPrivate(PinpointSMSVoiceRequest::ListConfigurationSetsAction, this))
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
 * \class QtAws::PinpointSMSVoice::ListConfigurationSetsRequestPrivate
 * \brief The ListConfigurationSetsRequestPrivate class provides private implementation for ListConfigurationSetsRequest.
 * \internal
 *
 * \inmodule QtAwsPinpointSMSVoice
 */

/*!
 * Constructs a ListConfigurationSetsRequestPrivate object for PinpointSMSVoice \a action,
 * with public implementation \a q.
 */
ListConfigurationSetsRequestPrivate::ListConfigurationSetsRequestPrivate(
    const PinpointSMSVoiceRequest::Action action, ListConfigurationSetsRequest * const q)
    : PinpointSMSVoiceRequestPrivate(action, q)
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
    : PinpointSMSVoiceRequestPrivate(other, q)
{

}

} // namespace PinpointSMSVoice
} // namespace QtAws
