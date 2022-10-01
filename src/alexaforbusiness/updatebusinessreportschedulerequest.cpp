// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebusinessreportschedulerequest.h"
#include "updatebusinessreportschedulerequest_p.h"
#include "updatebusinessreportscheduleresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::UpdateBusinessReportScheduleRequest
 * \brief The UpdateBusinessReportScheduleRequest class provides an interface for AlexaForBusiness UpdateBusinessReportSchedule requests.
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
 * \sa AlexaForBusinessClient::updateBusinessReportSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBusinessReportScheduleRequest::UpdateBusinessReportScheduleRequest(const UpdateBusinessReportScheduleRequest &other)
    : AlexaForBusinessRequest(new UpdateBusinessReportScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBusinessReportScheduleRequest object.
 */
UpdateBusinessReportScheduleRequest::UpdateBusinessReportScheduleRequest()
    : AlexaForBusinessRequest(new UpdateBusinessReportScheduleRequestPrivate(AlexaForBusinessRequest::UpdateBusinessReportScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBusinessReportScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBusinessReportScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBusinessReportScheduleRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBusinessReportScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::UpdateBusinessReportScheduleRequestPrivate
 * \brief The UpdateBusinessReportScheduleRequestPrivate class provides private implementation for UpdateBusinessReportScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a UpdateBusinessReportScheduleRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
UpdateBusinessReportScheduleRequestPrivate::UpdateBusinessReportScheduleRequestPrivate(
    const AlexaForBusinessRequest::Action action, UpdateBusinessReportScheduleRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBusinessReportScheduleRequest
 * class' copy constructor.
 */
UpdateBusinessReportScheduleRequestPrivate::UpdateBusinessReportScheduleRequestPrivate(
    const UpdateBusinessReportScheduleRequestPrivate &other, UpdateBusinessReportScheduleRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
