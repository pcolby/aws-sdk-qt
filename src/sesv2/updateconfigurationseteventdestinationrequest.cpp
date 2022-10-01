// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconfigurationseteventdestinationrequest.h"
#include "updateconfigurationseteventdestinationrequest_p.h"
#include "updateconfigurationseteventdestinationresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::UpdateConfigurationSetEventDestinationRequest
 * \brief The UpdateConfigurationSetEventDestinationRequest class provides an interface for SESv2 UpdateConfigurationSetEventDestination requests.
 *
 * \inmodule QtAwsSESv2
 *
 *  <fullname>Amazon SES API v2</fullname>
 * 
 *  <a href="http://aws.amazon.com/ses">Amazon SES</a> is an Amazon Web Services service that you can use to send email
 *  messages to your
 * 
 *  customers>
 * 
 *  If you're new to Amazon SES API v2, you might find it helpful to review the <a
 *  href="https://docs.aws.amazon.com/ses/latest/DeveloperGuide/">Amazon Simple Email Service Developer Guide</a>. The
 *  <i>Amazon SES Developer Guide</i> provides information and code samples that demonstrate how to use Amazon SES API v2
 *  features
 *
 * \sa SESv2Client::updateConfigurationSetEventDestination
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConfigurationSetEventDestinationRequest::UpdateConfigurationSetEventDestinationRequest(const UpdateConfigurationSetEventDestinationRequest &other)
    : SESv2Request(new UpdateConfigurationSetEventDestinationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConfigurationSetEventDestinationRequest object.
 */
UpdateConfigurationSetEventDestinationRequest::UpdateConfigurationSetEventDestinationRequest()
    : SESv2Request(new UpdateConfigurationSetEventDestinationRequestPrivate(SESv2Request::UpdateConfigurationSetEventDestinationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConfigurationSetEventDestinationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConfigurationSetEventDestinationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConfigurationSetEventDestinationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConfigurationSetEventDestinationResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::UpdateConfigurationSetEventDestinationRequestPrivate
 * \brief The UpdateConfigurationSetEventDestinationRequestPrivate class provides private implementation for UpdateConfigurationSetEventDestinationRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a UpdateConfigurationSetEventDestinationRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
UpdateConfigurationSetEventDestinationRequestPrivate::UpdateConfigurationSetEventDestinationRequestPrivate(
    const SESv2Request::Action action, UpdateConfigurationSetEventDestinationRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConfigurationSetEventDestinationRequest
 * class' copy constructor.
 */
UpdateConfigurationSetEventDestinationRequestPrivate::UpdateConfigurationSetEventDestinationRequestPrivate(
    const UpdateConfigurationSetEventDestinationRequestPrivate &other, UpdateConfigurationSetEventDestinationRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
