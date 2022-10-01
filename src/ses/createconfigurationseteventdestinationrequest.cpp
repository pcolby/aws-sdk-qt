// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconfigurationseteventdestinationrequest.h"
#include "createconfigurationseteventdestinationrequest_p.h"
#include "createconfigurationseteventdestinationresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::CreateConfigurationSetEventDestinationRequest
 * \brief The CreateConfigurationSetEventDestinationRequest class provides an interface for Ses CreateConfigurationSetEventDestination requests.
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
 * \sa SesClient::createConfigurationSetEventDestination
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConfigurationSetEventDestinationRequest::CreateConfigurationSetEventDestinationRequest(const CreateConfigurationSetEventDestinationRequest &other)
    : SesRequest(new CreateConfigurationSetEventDestinationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConfigurationSetEventDestinationRequest object.
 */
CreateConfigurationSetEventDestinationRequest::CreateConfigurationSetEventDestinationRequest()
    : SesRequest(new CreateConfigurationSetEventDestinationRequestPrivate(SesRequest::CreateConfigurationSetEventDestinationAction, this))
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
 * \class QtAws::Ses::CreateConfigurationSetEventDestinationRequestPrivate
 * \brief The CreateConfigurationSetEventDestinationRequestPrivate class provides private implementation for CreateConfigurationSetEventDestinationRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a CreateConfigurationSetEventDestinationRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
CreateConfigurationSetEventDestinationRequestPrivate::CreateConfigurationSetEventDestinationRequestPrivate(
    const SesRequest::Action action, CreateConfigurationSetEventDestinationRequest * const q)
    : SesRequestPrivate(action, q)
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
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
