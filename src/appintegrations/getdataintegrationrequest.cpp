/*
    Copyright 2013-2021 Paul Colby

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

#include "getdataintegrationrequest.h"
#include "getdataintegrationrequest_p.h"
#include "getdataintegrationresponse.h"
#include "appintegrationsrequest_p.h"

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::GetDataIntegrationRequest
 * \brief The GetDataIntegrationRequest class provides an interface for AppIntegrations GetDataIntegration requests.
 *
 * \inmodule QtAwsAppIntegrations
 *
 *  The Amazon AppIntegrations service enables you to configure and reuse connections to external
 * 
 *  applications>
 * 
 *  For information about how you can use external applications with Amazon Connect, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/crm.html">Set up pre-built integrations</a> and <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/amazon-connect-wisdom.html">Deliver information to agents
 *  using Amazon Connect Wisdom</a> in the <i>Amazon Connect Administrator
 *
 * \sa AppIntegrationsClient::getDataIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
GetDataIntegrationRequest::GetDataIntegrationRequest(const GetDataIntegrationRequest &other)
    : AppIntegrationsRequest(new GetDataIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDataIntegrationRequest object.
 */
GetDataIntegrationRequest::GetDataIntegrationRequest()
    : AppIntegrationsRequest(new GetDataIntegrationRequestPrivate(AppIntegrationsRequest::GetDataIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool GetDataIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDataIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDataIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new GetDataIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::AppIntegrations::GetDataIntegrationRequestPrivate
 * \brief The GetDataIntegrationRequestPrivate class provides private implementation for GetDataIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a GetDataIntegrationRequestPrivate object for AppIntegrations \a action,
 * with public implementation \a q.
 */
GetDataIntegrationRequestPrivate::GetDataIntegrationRequestPrivate(
    const AppIntegrationsRequest::Action action, GetDataIntegrationRequest * const q)
    : AppIntegrationsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDataIntegrationRequest
 * class' copy constructor.
 */
GetDataIntegrationRequestPrivate::GetDataIntegrationRequestPrivate(
    const GetDataIntegrationRequestPrivate &other, GetDataIntegrationRequest * const q)
    : AppIntegrationsRequestPrivate(other, q)
{

}

} // namespace AppIntegrations
} // namespace QtAws
