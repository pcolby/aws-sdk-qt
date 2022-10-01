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

#include "updatecontactchannelrequest.h"
#include "updatecontactchannelrequest_p.h"
#include "updatecontactchannelresponse.h"
#include "ssmcontactsrequest_p.h"

namespace QtAws {
namespace SsmContacts {

/*!
 * \class QtAws::SsmContacts::UpdateContactChannelRequest
 * \brief The UpdateContactChannelRequest class provides an interface for SsmContacts UpdateContactChannel requests.
 *
 * \inmodule QtAwsSsmContacts
 *
 *  Systems Manager Incident Manager is an incident management console designed to help users mitigate and recover from
 *  incidents affecting their Amazon Web Services-hosted applications. An incident is any unplanned interruption or
 *  reduction in quality of services.
 * 
 *  </p
 * 
 *  Incident Manager increases incident resolution by notifying responders of impact, highlighting relevant troubleshooting
 *  data, and providing collaboration tools to get services back up and running. To achieve the primary goal of reducing the
 *  time-to-resolution of critical incidents, Incident Manager automates response plans and enables responder team
 *  escalation.
 *
 * \sa SsmContactsClient::updateContactChannel
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateContactChannelRequest::UpdateContactChannelRequest(const UpdateContactChannelRequest &other)
    : SsmContactsRequest(new UpdateContactChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateContactChannelRequest object.
 */
UpdateContactChannelRequest::UpdateContactChannelRequest()
    : SsmContactsRequest(new UpdateContactChannelRequestPrivate(SsmContactsRequest::UpdateContactChannelAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateContactChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateContactChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateContactChannelRequest::response(QNetworkReply * const reply) const
{
    return new UpdateContactChannelResponse(*this, reply);
}

/*!
 * \class QtAws::SsmContacts::UpdateContactChannelRequestPrivate
 * \brief The UpdateContactChannelRequestPrivate class provides private implementation for UpdateContactChannelRequest.
 * \internal
 *
 * \inmodule QtAwsSsmContacts
 */

/*!
 * Constructs a UpdateContactChannelRequestPrivate object for SsmContacts \a action,
 * with public implementation \a q.
 */
UpdateContactChannelRequestPrivate::UpdateContactChannelRequestPrivate(
    const SsmContactsRequest::Action action, UpdateContactChannelRequest * const q)
    : SsmContactsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateContactChannelRequest
 * class' copy constructor.
 */
UpdateContactChannelRequestPrivate::UpdateContactChannelRequestPrivate(
    const UpdateContactChannelRequestPrivate &other, UpdateContactChannelRequest * const q)
    : SsmContactsRequestPrivate(other, q)
{

}

} // namespace SsmContacts
} // namespace QtAws
