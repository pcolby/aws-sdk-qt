// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletesecurityconfigurationrequest.h"
#include "deletesecurityconfigurationrequest_p.h"
#include "deletesecurityconfigurationresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteSecurityConfigurationRequest
 * \brief The DeleteSecurityConfigurationRequest class provides an interface for Glue DeleteSecurityConfiguration requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteSecurityConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSecurityConfigurationRequest::DeleteSecurityConfigurationRequest(const DeleteSecurityConfigurationRequest &other)
    : GlueRequest(new DeleteSecurityConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSecurityConfigurationRequest object.
 */
DeleteSecurityConfigurationRequest::DeleteSecurityConfigurationRequest()
    : GlueRequest(new DeleteSecurityConfigurationRequestPrivate(GlueRequest::DeleteSecurityConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSecurityConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSecurityConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSecurityConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSecurityConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteSecurityConfigurationRequestPrivate
 * \brief The DeleteSecurityConfigurationRequestPrivate class provides private implementation for DeleteSecurityConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteSecurityConfigurationRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteSecurityConfigurationRequestPrivate::DeleteSecurityConfigurationRequestPrivate(
    const GlueRequest::Action action, DeleteSecurityConfigurationRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSecurityConfigurationRequest
 * class' copy constructor.
 */
DeleteSecurityConfigurationRequestPrivate::DeleteSecurityConfigurationRequestPrivate(
    const DeleteSecurityConfigurationRequestPrivate &other, DeleteSecurityConfigurationRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
