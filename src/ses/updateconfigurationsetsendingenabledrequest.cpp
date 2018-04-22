/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updateconfigurationsetsendingenabledrequest.h"
#include "updateconfigurationsetsendingenabledrequest_p.h"
#include "updateconfigurationsetsendingenabledresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace SES {

/*!
 * \class QtAws::SES::UpdateConfigurationSetSendingEnabledRequest
 * \brief The UpdateConfigurationSetSendingEnabledRequest class provides an interface for SES UpdateConfigurationSetSendingEnabled requests.
 *
 * \inmodule QtAwsSES
 *
 *  <fullname>Amazon Simple Email Service</fullname>
 * 
 *  This is the API Reference for <a href="https://aws.amazon.com/ses/">Amazon Simple Email Service</a> (Amazon SES). This
 *  documentation is intended to be used in conjunction with the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 * 
 *  </p <note>
 * 
 *  For a list of Amazon SES endpoints to use in service requests, see <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/regions.html">Regions and Amazon SES</a> in the <a
 *  href="http://docs.aws.amazon.com/ses/latest/DeveloperGuide/Welcome.html">Amazon SES Developer Guide</a>.
 *
 * \sa SesClient::updateConfigurationSetSendingEnabled
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConfigurationSetSendingEnabledRequest::UpdateConfigurationSetSendingEnabledRequest(const UpdateConfigurationSetSendingEnabledRequest &other)
    : SesRequest(new UpdateConfigurationSetSendingEnabledRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConfigurationSetSendingEnabledRequest object.
 */
UpdateConfigurationSetSendingEnabledRequest::UpdateConfigurationSetSendingEnabledRequest()
    : SesRequest(new UpdateConfigurationSetSendingEnabledRequestPrivate(SesRequest::UpdateConfigurationSetSendingEnabledAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConfigurationSetSendingEnabledRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConfigurationSetSendingEnabledResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConfigurationSetSendingEnabledRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConfigurationSetSendingEnabledResponse(*this, reply);
}

/*!
 * \class QtAws::SES::UpdateConfigurationSetSendingEnabledRequestPrivate
 * \brief The UpdateConfigurationSetSendingEnabledRequestPrivate class provides private implementation for UpdateConfigurationSetSendingEnabledRequest.
 * \internal
 *
 * \inmodule QtAwsSES
 */

/*!
 * Constructs a UpdateConfigurationSetSendingEnabledRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
UpdateConfigurationSetSendingEnabledRequestPrivate::UpdateConfigurationSetSendingEnabledRequestPrivate(
    const SesRequest::Action action, UpdateConfigurationSetSendingEnabledRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConfigurationSetSendingEnabledRequest
 * class' copy constructor.
 */
UpdateConfigurationSetSendingEnabledRequestPrivate::UpdateConfigurationSetSendingEnabledRequestPrivate(
    const UpdateConfigurationSetSendingEnabledRequestPrivate &other, UpdateConfigurationSetSendingEnabledRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace SES
} // namespace QtAws
