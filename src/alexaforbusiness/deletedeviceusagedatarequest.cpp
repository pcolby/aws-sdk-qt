// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedeviceusagedatarequest.h"
#include "deletedeviceusagedatarequest_p.h"
#include "deletedeviceusagedataresponse.h"
#include "alexaforbusinessrequest_p.h"

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteDeviceUsageDataRequest
 * \brief The DeleteDeviceUsageDataRequest class provides an interface for AlexaForBusiness DeleteDeviceUsageData requests.
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
 * \sa AlexaForBusinessClient::deleteDeviceUsageData
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDeviceUsageDataRequest::DeleteDeviceUsageDataRequest(const DeleteDeviceUsageDataRequest &other)
    : AlexaForBusinessRequest(new DeleteDeviceUsageDataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDeviceUsageDataRequest object.
 */
DeleteDeviceUsageDataRequest::DeleteDeviceUsageDataRequest()
    : AlexaForBusinessRequest(new DeleteDeviceUsageDataRequestPrivate(AlexaForBusinessRequest::DeleteDeviceUsageDataAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDeviceUsageDataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDeviceUsageDataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDeviceUsageDataRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDeviceUsageDataResponse(*this, reply);
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteDeviceUsageDataRequestPrivate
 * \brief The DeleteDeviceUsageDataRequestPrivate class provides private implementation for DeleteDeviceUsageDataRequest.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DeleteDeviceUsageDataRequestPrivate object for AlexaForBusiness \a action,
 * with public implementation \a q.
 */
DeleteDeviceUsageDataRequestPrivate::DeleteDeviceUsageDataRequestPrivate(
    const AlexaForBusinessRequest::Action action, DeleteDeviceUsageDataRequest * const q)
    : AlexaForBusinessRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDeviceUsageDataRequest
 * class' copy constructor.
 */
DeleteDeviceUsageDataRequestPrivate::DeleteDeviceUsageDataRequestPrivate(
    const DeleteDeviceUsageDataRequestPrivate &other, DeleteDeviceUsageDataRequest * const q)
    : AlexaForBusinessRequestPrivate(other, q)
{

}

} // namespace AlexaForBusiness
} // namespace QtAws
