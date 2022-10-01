// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
