// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconfigurationseteventdestinationrequest.h"
#include "createconfigurationseteventdestinationrequest_p.h"
#include "createconfigurationseteventdestinationresponse.h"
#include "sesv2request_p.h"

namespace QtAws {
namespace SESv2 {

/*!
 * \class QtAws::SESv2::CreateConfigurationSetEventDestinationRequest
 * \brief The CreateConfigurationSetEventDestinationRequest class provides an interface for SESv2 CreateConfigurationSetEventDestination requests.
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
 * \sa SESv2Client::createConfigurationSetEventDestination
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConfigurationSetEventDestinationRequest::CreateConfigurationSetEventDestinationRequest(const CreateConfigurationSetEventDestinationRequest &other)
    : SESv2Request(new CreateConfigurationSetEventDestinationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConfigurationSetEventDestinationRequest object.
 */
CreateConfigurationSetEventDestinationRequest::CreateConfigurationSetEventDestinationRequest()
    : SESv2Request(new CreateConfigurationSetEventDestinationRequestPrivate(SESv2Request::CreateConfigurationSetEventDestinationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConfigurationSetEventDestinationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConfigurationSetEventDestinationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConfigurationSetEventDestinationRequest::response(QNetworkReply * const reply) const
{
    return new CreateConfigurationSetEventDestinationResponse(*this, reply);
}

/*!
 * \class QtAws::SESv2::CreateConfigurationSetEventDestinationRequestPrivate
 * \brief The CreateConfigurationSetEventDestinationRequestPrivate class provides private implementation for CreateConfigurationSetEventDestinationRequest.
 * \internal
 *
 * \inmodule QtAwsSESv2
 */

/*!
 * Constructs a CreateConfigurationSetEventDestinationRequestPrivate object for SESv2 \a action,
 * with public implementation \a q.
 */
CreateConfigurationSetEventDestinationRequestPrivate::CreateConfigurationSetEventDestinationRequestPrivate(
    const SESv2Request::Action action, CreateConfigurationSetEventDestinationRequest * const q)
    : SESv2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConfigurationSetEventDestinationRequest
 * class' copy constructor.
 */
CreateConfigurationSetEventDestinationRequestPrivate::CreateConfigurationSetEventDestinationRequestPrivate(
    const CreateConfigurationSetEventDestinationRequestPrivate &other, CreateConfigurationSetEventDestinationRequest * const q)
    : SESv2RequestPrivate(other, q)
{

}

} // namespace SESv2
} // namespace QtAws
