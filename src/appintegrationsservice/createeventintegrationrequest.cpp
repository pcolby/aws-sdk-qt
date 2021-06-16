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

#include "createeventintegrationrequest.h"
#include "createeventintegrationrequest_p.h"
#include "createeventintegrationresponse.h"
#include "appintegrationsservicerequest_p.h"

namespace QtAws {
namespace AppIntegrationsService {

/*!
 * \class QtAws::AppIntegrationsService::CreateEventIntegrationRequest
 * \brief The CreateEventIntegrationRequest class provides an interface for AppIntegrationsService CreateEventIntegration requests.
 *
 * \inmodule QtAwsAppIntegrationsService
 *
 *  The Amazon AppIntegrations APIs are in preview release and are subject to
 * 
 *  change>
 * 
 *  The Amazon AppIntegrations service enables you to configure and reuse connections to external
 * 
 *  applications>
 * 
 *  For information about how you can use external applications with Amazon Connect, see <a
 *  href="https://docs.aws.amazon.com/connect/latest/adminguide/crm.html">Set up pre-built integrations</a> in the <i>Amazon
 *  Connect Administrator
 *
 * \sa AppIntegrationsServiceClient::createEventIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateEventIntegrationRequest::CreateEventIntegrationRequest(const CreateEventIntegrationRequest &other)
    : AppIntegrationsServiceRequest(new CreateEventIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateEventIntegrationRequest object.
 */
CreateEventIntegrationRequest::CreateEventIntegrationRequest()
    : AppIntegrationsServiceRequest(new CreateEventIntegrationRequestPrivate(AppIntegrationsServiceRequest::CreateEventIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateEventIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateEventIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateEventIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new CreateEventIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::AppIntegrationsService::CreateEventIntegrationRequestPrivate
 * \brief The CreateEventIntegrationRequestPrivate class provides private implementation for CreateEventIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsAppIntegrationsService
 */

/*!
 * Constructs a CreateEventIntegrationRequestPrivate object for AppIntegrationsService \a action,
 * with public implementation \a q.
 */
CreateEventIntegrationRequestPrivate::CreateEventIntegrationRequestPrivate(
    const AppIntegrationsServiceRequest::Action action, CreateEventIntegrationRequest * const q)
    : AppIntegrationsServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateEventIntegrationRequest
 * class' copy constructor.
 */
CreateEventIntegrationRequestPrivate::CreateEventIntegrationRequestPrivate(
    const CreateEventIntegrationRequestPrivate &other, CreateEventIntegrationRequest * const q)
    : AppIntegrationsServiceRequestPrivate(other, q)
{

}

} // namespace AppIntegrationsService
} // namespace QtAws
