// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconfigurationsetsendingenabledrequest.h"
#include "updateconfigurationsetsendingenabledrequest_p.h"
#include "updateconfigurationsetsendingenabledresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::UpdateConfigurationSetSendingEnabledRequest
 * \brief The UpdateConfigurationSetSendingEnabledRequest class provides an interface for Ses UpdateConfigurationSetSendingEnabled requests.
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
 * \class QtAws::Ses::UpdateConfigurationSetSendingEnabledRequestPrivate
 * \brief The UpdateConfigurationSetSendingEnabledRequestPrivate class provides private implementation for UpdateConfigurationSetSendingEnabledRequest.
 * \internal
 *
 * \inmodule QtAwsSes
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

} // namespace Ses
} // namespace QtAws
