// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsecurityconfigurationsrequest.h"
#include "getsecurityconfigurationsrequest_p.h"
#include "getsecurityconfigurationsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSecurityConfigurationsRequest
 * \brief The GetSecurityConfigurationsRequest class provides an interface for Glue GetSecurityConfigurations requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getSecurityConfigurations
 */

/*!
 * Constructs a copy of \a other.
 */
GetSecurityConfigurationsRequest::GetSecurityConfigurationsRequest(const GetSecurityConfigurationsRequest &other)
    : GlueRequest(new GetSecurityConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSecurityConfigurationsRequest object.
 */
GetSecurityConfigurationsRequest::GetSecurityConfigurationsRequest()
    : GlueRequest(new GetSecurityConfigurationsRequestPrivate(GlueRequest::GetSecurityConfigurationsAction, this))
{

}

/*!
 * \reimp
 */
bool GetSecurityConfigurationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSecurityConfigurationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSecurityConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new GetSecurityConfigurationsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetSecurityConfigurationsRequestPrivate
 * \brief The GetSecurityConfigurationsRequestPrivate class provides private implementation for GetSecurityConfigurationsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSecurityConfigurationsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetSecurityConfigurationsRequestPrivate::GetSecurityConfigurationsRequestPrivate(
    const GlueRequest::Action action, GetSecurityConfigurationsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSecurityConfigurationsRequest
 * class' copy constructor.
 */
GetSecurityConfigurationsRequestPrivate::GetSecurityConfigurationsRequestPrivate(
    const GetSecurityConfigurationsRequestPrivate &other, GetSecurityConfigurationsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
