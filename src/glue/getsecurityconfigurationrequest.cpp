/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getsecurityconfigurationrequest.h"
#include "getsecurityconfigurationrequest_p.h"
#include "getsecurityconfigurationresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetSecurityConfigurationRequest
 * \brief The GetSecurityConfigurationRequest class provides an interface for Glue GetSecurityConfiguration requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getSecurityConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetSecurityConfigurationRequest::GetSecurityConfigurationRequest(const GetSecurityConfigurationRequest &other)
    : GlueRequest(new GetSecurityConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSecurityConfigurationRequest object.
 */
GetSecurityConfigurationRequest::GetSecurityConfigurationRequest()
    : GlueRequest(new GetSecurityConfigurationRequestPrivate(GlueRequest::GetSecurityConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetSecurityConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSecurityConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSecurityConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetSecurityConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetSecurityConfigurationRequestPrivate
 * \brief The GetSecurityConfigurationRequestPrivate class provides private implementation for GetSecurityConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetSecurityConfigurationRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetSecurityConfigurationRequestPrivate::GetSecurityConfigurationRequestPrivate(
    const GlueRequest::Action action, GetSecurityConfigurationRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSecurityConfigurationRequest
 * class' copy constructor.
 */
GetSecurityConfigurationRequestPrivate::GetSecurityConfigurationRequestPrivate(
    const GetSecurityConfigurationRequestPrivate &other, GetSecurityConfigurationRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
