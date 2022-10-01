// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendannouncementrequest.h"
#include "sendannouncementrequest_p.h"
#include "sendannouncementresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::SendAnnouncementRequest
 * \brief The SendAnnouncementRequest class provides an interface for AlexaForBusiness SendAnnouncement requests.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business helps you use Alexa in your organization. Alexa for Business provides you with the tools to manage
 *  Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice skills using
 *  the Alexa Skills Kit and the Alexa for Business API operations. You can also make these available as private skills for
 *  your organization. Alexa for Business makes it efficient to voice-enable your products and services, thus providing
 *  context-aware voice experiences for your customers. Device makers building with the Alexa Voice Service (AVS) can create
 *  fully integrated solutions, register their products with Alexa for Business, and manage them as shared devices in their
 *  organization.
 *
 * \sa AlexaForBusinessClient::sendAnnouncement
 */

/*!
 * Constructs a copy of \a other.
 */
SendAnnouncementRequest::SendAnnouncementRequest(const SendAnnouncementRequest &other)
    : AlexaForBusinessRequest(new SendAnnouncementRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendAnnouncementRequest object.
 */
SendAnnouncementRequest::SendAnnouncementRequest()
    : AlexaForBusinessRequest(new SendAnnouncementRequestPrivate(AlexaForBusinessRequest::SendAnnouncementAction, this))
{

}

/*!
 * \reimp
 */
bool SendAnnouncementRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendAnnouncementResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendAnnouncementRequest::response(QNetworkReply * const reply) const
{
    return new SendAnnouncementResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::SendAnnouncementRequestPrivate
 * \brief The SendAnnouncementRequestPrivate class provides private implementation for SendAnnouncementRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a SendAnnouncementRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
SendAnnouncementRequestPrivate::SendAnnouncementRequestPrivate(
    const AlexaForBusinessRequest::Action action, SendAnnouncementRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendAnnouncementRequest
 * class' copy constructor.
 */
SendAnnouncementRequestPrivate::SendAnnouncementRequestPrivate(
    const SendAnnouncementRequestPrivate &other, SendAnnouncementRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
