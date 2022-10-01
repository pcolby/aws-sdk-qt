// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconfigurationsettrackingoptionsrequest.h"
#include "updateconfigurationsettrackingoptionsrequest_p.h"
#include "updateconfigurationsettrackingoptionsresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::UpdateConfigurationSetTrackingOptionsRequest
 * \brief The UpdateConfigurationSetTrackingOptionsRequest class provides an interface for Ses UpdateConfigurationSetTrackingOptions requests.
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
 * \sa SesClient::updateConfigurationSetTrackingOptions
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConfigurationSetTrackingOptionsRequest::UpdateConfigurationSetTrackingOptionsRequest(const UpdateConfigurationSetTrackingOptionsRequest &other)
    : SesRequest(new UpdateConfigurationSetTrackingOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConfigurationSetTrackingOptionsRequest object.
 */
UpdateConfigurationSetTrackingOptionsRequest::UpdateConfigurationSetTrackingOptionsRequest()
    : SesRequest(new UpdateConfigurationSetTrackingOptionsRequestPrivate(SesRequest::UpdateConfigurationSetTrackingOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConfigurationSetTrackingOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConfigurationSetTrackingOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConfigurationSetTrackingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConfigurationSetTrackingOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::UpdateConfigurationSetTrackingOptionsRequestPrivate
 * \brief The UpdateConfigurationSetTrackingOptionsRequestPrivate class provides private implementation for UpdateConfigurationSetTrackingOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a UpdateConfigurationSetTrackingOptionsRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
UpdateConfigurationSetTrackingOptionsRequestPrivate::UpdateConfigurationSetTrackingOptionsRequestPrivate(
    const SesRequest::Action action, UpdateConfigurationSetTrackingOptionsRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConfigurationSetTrackingOptionsRequest
 * class' copy constructor.
 */
UpdateConfigurationSetTrackingOptionsRequestPrivate::UpdateConfigurationSetTrackingOptionsRequestPrivate(
    const UpdateConfigurationSetTrackingOptionsRequestPrivate &other, UpdateConfigurationSetTrackingOptionsRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
