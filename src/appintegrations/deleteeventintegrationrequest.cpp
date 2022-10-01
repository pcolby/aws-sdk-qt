// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteeventintegrationrequest.h"
#include "deleteeventintegrationrequest_p.h"
#include "deleteeventintegrationresponse.h"
#include "appintegrationsrequest_p.h"

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::DeleteEventIntegrationRequest
 * \brief The DeleteEventIntegrationRequest class provides an interface for AppIntegrations DeleteEventIntegration requests.
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
 * \sa AppIntegrationsClient::deleteEventIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEventIntegrationRequest::DeleteEventIntegrationRequest(const DeleteEventIntegrationRequest &other)
    : AppIntegrationsRequest(new DeleteEventIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEventIntegrationRequest object.
 */
DeleteEventIntegrationRequest::DeleteEventIntegrationRequest()
    : AppIntegrationsRequest(new DeleteEventIntegrationRequestPrivate(AppIntegrationsRequest::DeleteEventIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteEventIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteEventIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteEventIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEventIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::AppIntegrations::DeleteEventIntegrationRequestPrivate
 * \brief The DeleteEventIntegrationRequestPrivate class provides private implementation for DeleteEventIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a DeleteEventIntegrationRequestPrivate object for AppIntegrations \a action,
 * with public implementation \a q.
 */
DeleteEventIntegrationRequestPrivate::DeleteEventIntegrationRequestPrivate(
    const AppIntegrationsRequest::Action action, DeleteEventIntegrationRequest * const q)
    : AppIntegrationsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteEventIntegrationRequest
 * class' copy constructor.
 */
DeleteEventIntegrationRequestPrivate::DeleteEventIntegrationRequestPrivate(
    const DeleteEventIntegrationRequestPrivate &other, DeleteEventIntegrationRequest * const q)
    : AppIntegrationsRequestPrivate(other, q)
{

}

} // namespace AppIntegrations
} // namespace QtAws
