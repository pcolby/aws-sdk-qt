// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
