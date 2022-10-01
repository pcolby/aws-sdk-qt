// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteloggingconfigurationrequest.h"
#include "deleteloggingconfigurationrequest_p.h"
#include "deleteloggingconfigurationresponse.h"
#include "amprequest_p.h"

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::DeleteLoggingConfigurationRequest
 * \brief The DeleteLoggingConfigurationRequest class provides an interface for Amp DeleteLoggingConfiguration requests.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::deleteLoggingConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLoggingConfigurationRequest::DeleteLoggingConfigurationRequest(const DeleteLoggingConfigurationRequest &other)
    : AmpRequest(new DeleteLoggingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLoggingConfigurationRequest object.
 */
DeleteLoggingConfigurationRequest::DeleteLoggingConfigurationRequest()
    : AmpRequest(new DeleteLoggingConfigurationRequestPrivate(AmpRequest::DeleteLoggingConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLoggingConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLoggingConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLoggingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLoggingConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Amp::DeleteLoggingConfigurationRequestPrivate
 * \brief The DeleteLoggingConfigurationRequestPrivate class provides private implementation for DeleteLoggingConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a DeleteLoggingConfigurationRequestPrivate object for Amp \a action,
 * with public implementation \a q.
 */
DeleteLoggingConfigurationRequestPrivate::DeleteLoggingConfigurationRequestPrivate(
    const AmpRequest::Action action, DeleteLoggingConfigurationRequest * const q)
    : AmpRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLoggingConfigurationRequest
 * class' copy constructor.
 */
DeleteLoggingConfigurationRequestPrivate::DeleteLoggingConfigurationRequestPrivate(
    const DeleteLoggingConfigurationRequestPrivate &other, DeleteLoggingConfigurationRequest * const q)
    : AmpRequestPrivate(other, q)
{

}

} // namespace Amp
} // namespace QtAws
