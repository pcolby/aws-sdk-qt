/*
    Copyright 2013-2019 Paul Colby

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
