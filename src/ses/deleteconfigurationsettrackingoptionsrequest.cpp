// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteconfigurationsettrackingoptionsrequest.h"
#include "deleteconfigurationsettrackingoptionsrequest_p.h"
#include "deleteconfigurationsettrackingoptionsresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::DeleteConfigurationSetTrackingOptionsRequest
 * \brief The DeleteConfigurationSetTrackingOptionsRequest class provides an interface for Ses DeleteConfigurationSetTrackingOptions requests.
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
 * \sa SesClient::deleteConfigurationSetTrackingOptions
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteConfigurationSetTrackingOptionsRequest::DeleteConfigurationSetTrackingOptionsRequest(const DeleteConfigurationSetTrackingOptionsRequest &other)
    : SesRequest(new DeleteConfigurationSetTrackingOptionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteConfigurationSetTrackingOptionsRequest object.
 */
DeleteConfigurationSetTrackingOptionsRequest::DeleteConfigurationSetTrackingOptionsRequest()
    : SesRequest(new DeleteConfigurationSetTrackingOptionsRequestPrivate(SesRequest::DeleteConfigurationSetTrackingOptionsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteConfigurationSetTrackingOptionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteConfigurationSetTrackingOptionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteConfigurationSetTrackingOptionsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteConfigurationSetTrackingOptionsResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::DeleteConfigurationSetTrackingOptionsRequestPrivate
 * \brief The DeleteConfigurationSetTrackingOptionsRequestPrivate class provides private implementation for DeleteConfigurationSetTrackingOptionsRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a DeleteConfigurationSetTrackingOptionsRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
DeleteConfigurationSetTrackingOptionsRequestPrivate::DeleteConfigurationSetTrackingOptionsRequestPrivate(
    const SesRequest::Action action, DeleteConfigurationSetTrackingOptionsRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteConfigurationSetTrackingOptionsRequest
 * class' copy constructor.
 */
DeleteConfigurationSetTrackingOptionsRequestPrivate::DeleteConfigurationSetTrackingOptionsRequestPrivate(
    const DeleteConfigurationSetTrackingOptionsRequestPrivate &other, DeleteConfigurationSetTrackingOptionsRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
