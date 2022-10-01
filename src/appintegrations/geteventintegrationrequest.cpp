// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "geteventintegrationrequest.h"
#include "geteventintegrationrequest_p.h"
#include "geteventintegrationresponse.h"
#include "appintegrationsrequest_p.h"

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::GetEventIntegrationRequest
 * \brief The GetEventIntegrationRequest class provides an interface for AppIntegrations GetEventIntegration requests.
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
 * \sa AppIntegrationsClient::getEventIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
GetEventIntegrationRequest::GetEventIntegrationRequest(const GetEventIntegrationRequest &other)
    : AppIntegrationsRequest(new GetEventIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetEventIntegrationRequest object.
 */
GetEventIntegrationRequest::GetEventIntegrationRequest()
    : AppIntegrationsRequest(new GetEventIntegrationRequestPrivate(AppIntegrationsRequest::GetEventIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool GetEventIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetEventIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetEventIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new GetEventIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::AppIntegrations::GetEventIntegrationRequestPrivate
 * \brief The GetEventIntegrationRequestPrivate class provides private implementation for GetEventIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a GetEventIntegrationRequestPrivate object for AppIntegrations \a action,
 * with public implementation \a q.
 */
GetEventIntegrationRequestPrivate::GetEventIntegrationRequestPrivate(
    const AppIntegrationsRequest::Action action, GetEventIntegrationRequest * const q)
    : AppIntegrationsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetEventIntegrationRequest
 * class' copy constructor.
 */
GetEventIntegrationRequestPrivate::GetEventIntegrationRequestPrivate(
    const GetEventIntegrationRequestPrivate &other, GetEventIntegrationRequest * const q)
    : AppIntegrationsRequestPrivate(other, q)
{

}

} // namespace AppIntegrations
} // namespace QtAws
