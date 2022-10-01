// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateconfigurationsetreputationmetricsenabledrequest.h"
#include "updateconfigurationsetreputationmetricsenabledrequest_p.h"
#include "updateconfigurationsetreputationmetricsenabledresponse.h"
#include "sesrequest_p.h"

namespace QtAws {
namespace Ses {

/*!
 * \class QtAws::Ses::UpdateConfigurationSetReputationMetricsEnabledRequest
 * \brief The UpdateConfigurationSetReputationMetricsEnabledRequest class provides an interface for Ses UpdateConfigurationSetReputationMetricsEnabled requests.
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
 * \sa SesClient::updateConfigurationSetReputationMetricsEnabled
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateConfigurationSetReputationMetricsEnabledRequest::UpdateConfigurationSetReputationMetricsEnabledRequest(const UpdateConfigurationSetReputationMetricsEnabledRequest &other)
    : SesRequest(new UpdateConfigurationSetReputationMetricsEnabledRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateConfigurationSetReputationMetricsEnabledRequest object.
 */
UpdateConfigurationSetReputationMetricsEnabledRequest::UpdateConfigurationSetReputationMetricsEnabledRequest()
    : SesRequest(new UpdateConfigurationSetReputationMetricsEnabledRequestPrivate(SesRequest::UpdateConfigurationSetReputationMetricsEnabledAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateConfigurationSetReputationMetricsEnabledRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateConfigurationSetReputationMetricsEnabledResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateConfigurationSetReputationMetricsEnabledRequest::response(QNetworkReply * const reply) const
{
    return new UpdateConfigurationSetReputationMetricsEnabledResponse(*this, reply);
}

/*!
 * \class QtAws::Ses::UpdateConfigurationSetReputationMetricsEnabledRequestPrivate
 * \brief The UpdateConfigurationSetReputationMetricsEnabledRequestPrivate class provides private implementation for UpdateConfigurationSetReputationMetricsEnabledRequest.
 * \internal
 *
 * \inmodule QtAwsSes
 */

/*!
 * Constructs a UpdateConfigurationSetReputationMetricsEnabledRequestPrivate object for Ses \a action,
 * with public implementation \a q.
 */
UpdateConfigurationSetReputationMetricsEnabledRequestPrivate::UpdateConfigurationSetReputationMetricsEnabledRequestPrivate(
    const SesRequest::Action action, UpdateConfigurationSetReputationMetricsEnabledRequest * const q)
    : SesRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateConfigurationSetReputationMetricsEnabledRequest
 * class' copy constructor.
 */
UpdateConfigurationSetReputationMetricsEnabledRequestPrivate::UpdateConfigurationSetReputationMetricsEnabledRequestPrivate(
    const UpdateConfigurationSetReputationMetricsEnabledRequestPrivate &other, UpdateConfigurationSetReputationMetricsEnabledRequest * const q)
    : SesRequestPrivate(other, q)
{

}

} // namespace Ses
} // namespace QtAws
