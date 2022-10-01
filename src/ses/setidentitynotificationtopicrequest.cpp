// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setidentitynotificationtopicrequest.h"
#include "setidentitynotificationtopicrequest_p.h"
#include "setidentitynotificationtopicresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SetIdentityNotificationTopicRequest
 * \brief The SetIdentityNotificationTopicRequest class provides an interface for Ses SetIdentityNotificationTopic requests.
 *
 * \inmodule QtAwsSes
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
 *
 * \sa SesClient::setIdentityNotificationTopic
 */

/*!
 * Constructs a copy of \a other.
 */
SetIdentityNotificationTopicRequest::SetIdentityNotificationTopicRequest(const SetIdentityNotificationTopicRequest &other)
    : SesRequest(new SetIdentityNotificationTopicRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetIdentityNotificationTopicRequest object.
 */
SetIdentityNotificationTopicRequest::SetIdentityNotificationTopicRequest()
    : SesRequest(new SetIdentityNotificationTopicRequestPrivate(SesRequest::SetIdentityNotificationTopicAction, this))
{

}

/*!
 * \reimp
 */
bool SetIdentityNotificationTopicRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetIdentityNotificationTopicResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetIdentityNotificationTopicRequest::response(QNetworkReply * const reply) const
{
    return new SetIdentityNotificationTopicResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::SetIdentityNotificationTopicRequestPrivate
 * \brief The SetIdentityNotificationTopicRequestPrivate class provides private implementation for SetIdentityNotificationTopicRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SetIdentityNotificationTopicRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
SetIdentityNotificationTopicRequestPrivate::SetIdentityNotificationTopicRequestPrivate(
    const SesRequest::Action action, SetIdentityNotificationTopicRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetIdentityNotificationTopicRequest
 * class' copy constructor.
 */
SetIdentityNotificationTopicRequestPrivate::SetIdentityNotificationTopicRequestPrivate(
    const SetIdentityNotificationTopicRequestPrivate &other, SetIdentityNotificationTopicRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
