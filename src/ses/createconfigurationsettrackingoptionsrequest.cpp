// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createconfigurationsettrackingoptionsrequest.h"
#include "createconfigurationsettrackingoptionsrequest_p.h"
#include "createconfigurationsettrackingoptionsresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::CreateConfigurationSetTrackingOptionsRequest
 * \brief The CreateConfigurationSetTrackingOptionsRequest class provides an interface for Ses CreateConfigurationSetTrackingOptions requests.
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
 * \sa SesClient::createConfigurationSetTrackingOptions
 */

/*!
 * Constructs a copy of \a other.
 */
CreateConfigurationSetTrackingOptionsRequest::CreateConfigurationSetTrackingOptionsRequest(const CreateConfigurationSetTrackingOptionsRequest &other)
    : SesRequest(new CreateConfigurationSetTrackingOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateConfigurationSetTrackingOptionsRequest object.
 */
CreateConfigurationSetTrackingOptionsRequest::CreateConfigurationSetTrackingOptionsRequest()
    : SesRequest(new CreateConfigurationSetTrackingOptionsRequestPrivate(SesRequest::CreateConfigurationSetTrackingOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateConfigurationSetTrackingOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateConfigurationSetTrackingOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateConfigurationSetTrackingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new CreateConfigurationSetTrackingOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::CreateConfigurationSetTrackingOptionsRequestPrivate
 * \brief The CreateConfigurationSetTrackingOptionsRequestPrivate class provides private implementation for CreateConfigurationSetTrackingOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a CreateConfigurationSetTrackingOptionsRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
CreateConfigurationSetTrackingOptionsRequestPrivate::CreateConfigurationSetTrackingOptionsRequestPrivate(
    const SesRequest::Action action, CreateConfigurationSetTrackingOptionsRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateConfigurationSetTrackingOptionsRequest
 * class' copy constructor.
 */
CreateConfigurationSetTrackingOptionsRequestPrivate::CreateConfigurationSetTrackingOptionsRequestPrivate(
    const CreateConfigurationSetTrackingOptionsRequestPrivate &other, CreateConfigurationSetTrackingOptionsRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
