// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createloggingconfigurationrequest.h"
#include "createloggingconfigurationrequest_p.h"
#include "createloggingconfigurationresponse.h"
#include "amprequest_p.h"

namespace QtAws {
namespace Amp {

/*!
 * \class QtAws::Amp::CreateLoggingConfigurationRequest
 * \brief The CreateLoggingConfigurationRequest class provides an interface for Amp CreateLoggingConfiguration requests.
 *
 * \inmodule QtAwsAmp
 *
 *
 * \sa AmpClient::createLoggingConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLoggingConfigurationRequest::CreateLoggingConfigurationRequest(const CreateLoggingConfigurationRequest &other)
    : AmpRequest(new CreateLoggingConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLoggingConfigurationRequest object.
 */
CreateLoggingConfigurationRequest::CreateLoggingConfigurationRequest()
    : AmpRequest(new CreateLoggingConfigurationRequestPrivate(AmpRequest::CreateLoggingConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLoggingConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLoggingConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLoggingConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateLoggingConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Amp::CreateLoggingConfigurationRequestPrivate
 * \brief The CreateLoggingConfigurationRequestPrivate class provides private implementation for CreateLoggingConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsAmp
 */

/*!
 * Constructs a CreateLoggingConfigurationRequestPrivate object for Amp \a action,
 * with public implementation \a q.
 */
CreateLoggingConfigurationRequestPrivate::CreateLoggingConfigurationRequestPrivate(
    const AmpRequest::Action action, CreateLoggingConfigurationRequest * const q)
    : AmpRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLoggingConfigurationRequest
 * class' copy constructor.
 */
CreateLoggingConfigurationRequestPrivate::CreateLoggingConfigurationRequestPrivate(
    const CreateLoggingConfigurationRequestPrivate &other, CreateLoggingConfigurationRequest * const q)
    : AmpRequestPrivate(other, q)
{

}

} // namespace Amp
} // namespace QtAws
