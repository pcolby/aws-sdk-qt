// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createdataintegrationrequest.h"
#include "createdataintegrationrequest_p.h"
#include "createdataintegrationresponse.h"
#include "appintegrationsrequest_p.h"

namespace QtAws {
namespace AppIntegrations {

/*!
 * \class QtAws::AppIntegrations::CreateDataIntegrationRequest
 * \brief The CreateDataIntegrationRequest class provides an interface for AppIntegrations CreateDataIntegration requests.
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
 * \sa AppIntegrationsClient::createDataIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateDataIntegrationRequest::CreateDataIntegrationRequest(const CreateDataIntegrationRequest &other)
    : AppIntegrationsRequest(new CreateDataIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateDataIntegrationRequest object.
 */
CreateDataIntegrationRequest::CreateDataIntegrationRequest()
    : AppIntegrationsRequest(new CreateDataIntegrationRequestPrivate(AppIntegrationsRequest::CreateDataIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateDataIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateDataIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateDataIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new CreateDataIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::AppIntegrations::CreateDataIntegrationRequestPrivate
 * \brief The CreateDataIntegrationRequestPrivate class provides private implementation for CreateDataIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsAppIntegrations
 */

/*!
 * Constructs a CreateDataIntegrationRequestPrivate object for AppIntegrations \a action,
 * with public implementation \a q.
 */
CreateDataIntegrationRequestPrivate::CreateDataIntegrationRequestPrivate(
    const AppIntegrationsRequest::Action action, CreateDataIntegrationRequest * const q)
    : AppIntegrationsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateDataIntegrationRequest
 * class' copy constructor.
 */
CreateDataIntegrationRequestPrivate::CreateDataIntegrationRequestPrivate(
    const CreateDataIntegrationRequestPrivate &other, CreateDataIntegrationRequest * const q)
    : AppIntegrationsRequestPrivate(other, q)
{

}

} // namespace AppIntegrations
} // namespace QtAws
