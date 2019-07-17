/*
    Copyright 2013-2019 Paul Colby

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

#include "setidentitydkimenabledrequest.h"
#include "setidentitydkimenabledrequest_p.h"
#include "setidentitydkimenabledresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::SetIdentityDkimEnabledRequest
 * \brief The SetIdentityDkimEnabledRequest class provides an interface for SES SetIdentityDkimEnabled requests.
 *
 * \inmodule QtAwsSES
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
 * \sa SesClient::setIdentityDkimEnabled
 */

/*!
 * Constructs a copy of \a other.
 */
SetIdentityDkimEnabledRequest::SetIdentityDkimEnabledRequest(const SetIdentityDkimEnabledRequest &other)
    : SesRequest(new SetIdentityDkimEnabledRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SetIdentityDkimEnabledRequest object.
 */
SetIdentityDkimEnabledRequest::SetIdentityDkimEnabledRequest()
    : SesRequest(new SetIdentityDkimEnabledRequestPrivate(SesRequest::SetIdentityDkimEnabledAction, this))
{

}

/*!
 * \reimp
 */
bool SetIdentityDkimEnabledRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SetIdentityDkimEnabledResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SetIdentityDkimEnabledRequest::response(QNetworkReply * const reply) const
{
    return new SetIdentityDkimEnabledResponse(*this, reply);
}

/*!
 * \class QtAws::SES::SetIdentityDkimEnabledRequestPrivate
 * \brief The SetIdentityDkimEnabledRequestPrivate class provides private implementation for SetIdentityDkimEnabledRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a SetIdentityDkimEnabledRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
SetIdentityDkimEnabledRequestPrivate::SetIdentityDkimEnabledRequestPrivate(
    const SesRequest::Action action, SetIdentityDkimEnabledRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SetIdentityDkimEnabledRequest
 * class' copy constructor.
 */
SetIdentityDkimEnabledRequestPrivate::SetIdentityDkimEnabledRequestPrivate(
    const SetIdentityDkimEnabledRequestPrivate &other, SetIdentityDkimEnabledRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
