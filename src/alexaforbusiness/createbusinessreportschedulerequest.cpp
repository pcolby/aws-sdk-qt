// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbusinessreportschedulerequest.h"
#include "createbusinessreportschedulerequest_p.h"
#include "createbusinessreportscheduleresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::CreateBusinessReportScheduleRequest
 * \brief The CreateBusinessReportScheduleRequest class provides an interface for AlexaForBusiness CreateBusinessReportSchedule requests.
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
 * \sa AlexaForBusinessClient::createBusinessReportSchedule
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBusinessReportScheduleRequest::CreateBusinessReportScheduleRequest(const CreateBusinessReportScheduleRequest &other)
    : AlexaForBusinessRequest(new CreateBusinessReportScheduleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBusinessReportScheduleRequest object.
 */
CreateBusinessReportScheduleRequest::CreateBusinessReportScheduleRequest()
    : AlexaForBusinessRequest(new CreateBusinessReportScheduleRequestPrivate(AlexaForBusinessRequest::CreateBusinessReportScheduleAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBusinessReportScheduleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBusinessReportScheduleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBusinessReportScheduleRequest::response(QNetworkReply * const reply) const
{
    return new CreateBusinessReportScheduleResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::CreateBusinessReportScheduleRequestPrivate
 * \brief The CreateBusinessReportScheduleRequestPrivate class provides private implementation for CreateBusinessReportScheduleRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a CreateBusinessReportScheduleRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
CreateBusinessReportScheduleRequestPrivate::CreateBusinessReportScheduleRequestPrivate(
    const AlexaForBusinessRequest::Action action, CreateBusinessReportScheduleRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBusinessReportScheduleRequest
 * class' copy constructor.
 */
CreateBusinessReportScheduleRequestPrivate::CreateBusinessReportScheduleRequestPrivate(
    const CreateBusinessReportScheduleRequestPrivate &other, CreateBusinessReportScheduleRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
