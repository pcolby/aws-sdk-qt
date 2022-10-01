// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "setidentityheadersinnotificationsenabledrequest.h"
#include "setidentityheadersinnotificationsenabledrequest_p.h"
#include "setidentityheadersinnotificationsenabledresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::SetIdentityHeadersInNotificationsEnabledRequest
 * \brief The SetIdentityHeadersInNotificationsEnabledRequest class provides an interface for Ses SetIdentityHeadersInNotificationsEnabled requests.
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
 * \sa SesClient::setIdentityHeadersInNotificationsEnabled
 */

/*!
 * Constructs a copy of \a other.
 */
SetIdentityHeadersInNotificationsEnabledRequest::SetIdentityHeadersInNotificationsEnabledRequest(const SetIdentityHeadersInNotificationsEnabledRequest &other)
    : SesRequest(new SetIdentityHeadersInNotificationsEnabledRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetIdentityHeadersInNotificationsEnabledRequest object.
 */
SetIdentityHeadersInNotificationsEnabledRequest::SetIdentityHeadersInNotificationsEnabledRequest()
    : SesRequest(new SetIdentityHeadersInNotificationsEnabledRequestPrivate(SesRequest::SetIdentityHeadersInNotificationsEnabledAction, this))
{

}

/*!
 * \reimp
 */
bool SetIdentityHeadersInNotificationsEnabledRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetIdentityHeadersInNotificationsEnabledResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetIdentityHeadersInNotificationsEnabledRequest::response(QNetworkReply * const reply) const
{
    return new SetIdentityHeadersInNotificationsEnabledResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::SetIdentityHeadersInNotificationsEnabledRequestPrivate
 * \brief The SetIdentityHeadersInNotificationsEnabledRequestPrivate class provides private implementation for SetIdentityHeadersInNotificationsEnabledRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a SetIdentityHeadersInNotificationsEnabledRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
SetIdentityHeadersInNotificationsEnabledRequestPrivate::SetIdentityHeadersInNotificationsEnabledRequestPrivate(
    const SesRequest::Action action, SetIdentityHeadersInNotificationsEnabledRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetIdentityHeadersInNotificationsEnabledRequest
 * class' copy constructor.
 */
SetIdentityHeadersInNotificationsEnabledRequestPrivate::SetIdentityHeadersInNotificationsEnabledRequestPrivate(
    const SetIdentityHeadersInNotificationsEnabledRequestPrivate &other, SetIdentityHeadersInNotificationsEnabledRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
