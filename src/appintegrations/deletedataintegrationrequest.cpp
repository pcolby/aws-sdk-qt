// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedataintegrationrequest.h"
#include "deletedataintegrationrequest_p.h"
#include "deletedataintegrationresponse.h"
#include "appintegrationsrequest_p.h"

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::DeleteDataIntegrationRequest
 * \brief The DeleteDataIntegrationRequest class provides an interface for AppIntegrations DeleteDataIntegration requests.
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
 * \sa AppIntegrationsClient::deleteDataIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteDataIntegrationRequest::DeleteDataIntegrationRequest(const DeleteDataIntegrationRequest &other)
    : AppIntegrationsRequest(new DeleteDataIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteDataIntegrationRequest object.
 */
DeleteDataIntegrationRequest::DeleteDataIntegrationRequest()
    : AppIntegrationsRequest(new DeleteDataIntegrationRequestPrivate(AppIntegrationsRequest::DeleteDataIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteDataIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteDataIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDataIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDataIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::AppIntegrations::DeleteDataIntegrationRequestPrivate
 * \brief The DeleteDataIntegrationRequestPrivate class provides private implementation for DeleteDataIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a DeleteDataIntegrationRequestPrivate object for AppIntegrations \a action,
 * with public implementation \a q.
 */
DeleteDataIntegrationRequestPrivate::DeleteDataIntegrationRequestPrivate(
    const AppIntegrationsRequest::Action action, DeleteDataIntegrationRequest * const q)
    : AppIntegrationsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteDataIntegrationRequest
 * class' copy constructor.
 */
DeleteDataIntegrationRequestPrivate::DeleteDataIntegrationRequestPrivate(
    const DeleteDataIntegrationRequestPrivate &other, DeleteDataIntegrationRequest * const q)
    : AppIntegrationsRequestPrivate(other, q)
{

}

} // namespace AppIntegrations
} // namespace QtAws
