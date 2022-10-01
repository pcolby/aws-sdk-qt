// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createsecurityconfigurationrequest.h"
#include "createsecurityconfigurationrequest_p.h"
#include "createsecurityconfigurationresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::CreateSecurityConfigurationRequest
 * \brief The CreateSecurityConfigurationRequest class provides an interface for Glue CreateSecurityConfiguration requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::createSecurityConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateSecurityConfigurationRequest::CreateSecurityConfigurationRequest(const CreateSecurityConfigurationRequest &other)
    : GlueRequest(new CreateSecurityConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateSecurityConfigurationRequest object.
 */
CreateSecurityConfigurationRequest::CreateSecurityConfigurationRequest()
    : GlueRequest(new CreateSecurityConfigurationRequestPrivate(GlueRequest::CreateSecurityConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateSecurityConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateSecurityConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateSecurityConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateSecurityConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::CreateSecurityConfigurationRequestPrivate
 * \brief The CreateSecurityConfigurationRequestPrivate class provides private implementation for CreateSecurityConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a CreateSecurityConfigurationRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
CreateSecurityConfigurationRequestPrivate::CreateSecurityConfigurationRequestPrivate(
    const GlueRequest::Action action, CreateSecurityConfigurationRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateSecurityConfigurationRequest
 * class' copy constructor.
 */
CreateSecurityConfigurationRequestPrivate::CreateSecurityConfigurationRequestPrivate(
    const CreateSecurityConfigurationRequestPrivate &other, CreateSecurityConfigurationRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
