/*
    Copyright 2013-2018 Paul Colby

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

#include "setidentityheadersinnotificationsenabledrequest.h"
#include "setidentityheadersinnotificationsenabledrequest_p.h"
#include "setidentityheadersinnotificationsenabledresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::SetIdentityHeadersInNotificationsEnabledRequest
 * \brief The SetIdentityHeadersInNotificationsEnabledRequest class provides an interface for SES SetIdentityHeadersInNotificationsEnabled requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This document contains reference information for the <a href="https://aws.amazon.com/ses/">Amazon Simple Email
 *  Service</a> (Amazon SES) API, version 2010-12-01. This document is best used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer
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
 * \class QtAws::SES::SetIdentityHeadersInNotificationsEnabledRequestPrivate
 * \brief The SetIdentityHeadersInNotificationsEnabledRequestPrivate class provides private implementation for SetIdentityHeadersInNotificationsEnabledRequest.
 * \internal
 *
 * \inmodule QtAwsSES
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

} // namespace SES
} // namespace QtAws
