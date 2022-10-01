// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedataintegrationrequest.h"
#include "updatedataintegrationrequest_p.h"
#include "updatedataintegrationresponse.h"
#include "appintegrationsrequest_p.h"

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::UpdateDataIntegrationRequest
 * \brief The UpdateDataIntegrationRequest class provides an interface for AppIntegrations UpdateDataIntegration requests.
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
 * \sa AppIntegrationsClient::updateDataIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDataIntegrationRequest::UpdateDataIntegrationRequest(const UpdateDataIntegrationRequest &other)
    : AppIntegrationsRequest(new UpdateDataIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDataIntegrationRequest object.
 */
UpdateDataIntegrationRequest::UpdateDataIntegrationRequest()
    : AppIntegrationsRequest(new UpdateDataIntegrationRequestPrivate(AppIntegrationsRequest::UpdateDataIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDataIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDataIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDataIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDataIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::AppIntegrations::UpdateDataIntegrationRequestPrivate
 * \brief The UpdateDataIntegrationRequestPrivate class provides private implementation for UpdateDataIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a UpdateDataIntegrationRequestPrivate object for AppIntegrations \a action,
 * with public implementation \a q.
 */
UpdateDataIntegrationRequestPrivate::UpdateDataIntegrationRequestPrivate(
    const AppIntegrationsRequest::Action action, UpdateDataIntegrationRequest * const q)
    : AppIntegrationsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDataIntegrationRequest
 * class' copy constructor.
 */
UpdateDataIntegrationRequestPrivate::UpdateDataIntegrationRequestPrivate(
    const UpdateDataIntegrationRequestPrivate &other, UpdateDataIntegrationRequest * const q)
    : AppIntegrationsRequestPrivate(other, q)
{

}

} // namespace AppIntegrations
} // namespace QtAws
