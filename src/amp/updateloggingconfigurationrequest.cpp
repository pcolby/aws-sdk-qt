// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateloggingconfigurationrequest.h"
#include "updateloggingconfigurationrequest_p.h"
#include "updateloggingconfigurationresponse.h"
#include "amprequest_p.h"

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::UpdateLoggingConfigurationRequest
 * \brief The UpdateLoggingConfigurationRequest class provides an interface for Amp UpdateLoggingConfiguration requests.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::updateLoggingConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateLoggingConfigurationRequest::UpdateLoggingConfigurationRequest(const UpdateLoggingConfigurationRequest &other)
    : AmpRequest(new UpdateLoggingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateLoggingConfigurationRequest object.
 */
UpdateLoggingConfigurationRequest::UpdateLoggingConfigurationRequest()
    : AmpRequest(new UpdateLoggingConfigurationRequestPrivate(AmpRequest::UpdateLoggingConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateLoggingConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateLoggingConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateLoggingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateLoggingConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Amp::UpdateLoggingConfigurationRequestPrivate
 * \brief The UpdateLoggingConfigurationRequestPrivate class provides private implementation for UpdateLoggingConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a UpdateLoggingConfigurationRequestPrivate object for Amp \a action,
 * with public implementation \a q.
 */
UpdateLoggingConfigurationRequestPrivate::UpdateLoggingConfigurationRequestPrivate(
    const AmpRequest::Action action, UpdateLoggingConfigurationRequest * const q)
    : AmpRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateLoggingConfigurationRequest
 * class' copy constructor.
 */
UpdateLoggingConfigurationRequestPrivate::UpdateLoggingConfigurationRequestPrivate(
    const UpdateLoggingConfigurationRequestPrivate &other, UpdateLoggingConfigurationRequest * const q)
    : AmpRequestPrivate(other, q)
{

}

} // namespace Amp
} // namespace QtAws
