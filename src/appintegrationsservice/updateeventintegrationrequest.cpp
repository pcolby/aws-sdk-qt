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

#include "updateeventintegrationrequest.h"
#include "updateeventintegrationrequest_p.h"
#include "updateeventintegrationresponse.h"
#include "appintegrationsservicerequest_p.h"

namespace QtAws {
namespace AppIntegrationsService {

/*!
 * \class QtAws::AppIntegrationsService::UpdateEventIntegrationRequest
 * \brief The UpdateEventIntegrationRequest class provides an interface for AppIntegrationsService UpdateEventIntegration requests.
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
 * \sa AppIntegrationsServiceClient::updateEventIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateEventIntegrationRequest::UpdateEventIntegrationRequest(const UpdateEventIntegrationRequest &other)
    : AppIntegrationsServiceRequest(new UpdateEventIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateEventIntegrationRequest object.
 */
UpdateEventIntegrationRequest::UpdateEventIntegrationRequest()
    : AppIntegrationsServiceRequest(new UpdateEventIntegrationRequestPrivate(AppIntegrationsServiceRequest::UpdateEventIntegrationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEventIntegrationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateEventIntegrationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEventIntegrationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEventIntegrationResponse(*this, reply);
}

/*!
 * \class QtAws::AppIntegrationsService::UpdateEventIntegrationRequestPrivate
 * \brief The UpdateEventIntegrationRequestPrivate class provides private implementation for UpdateEventIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsAppIntegrationsService
 */

/*!
 * Constructs a UpdateEventIntegrationRequestPrivate object for AppIntegrationsService \a action,
 * with public implementation \a q.
 */
UpdateEventIntegrationRequestPrivate::UpdateEventIntegrationRequestPrivate(
    const AppIntegrationsServiceRequest::Action action, UpdateEventIntegrationRequest * const q)
    : AppIntegrationsServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateEventIntegrationRequest
 * class' copy constructor.
 */
UpdateEventIntegrationRequestPrivate::UpdateEventIntegrationRequestPrivate(
    const UpdateEventIntegrationRequestPrivate &other, UpdateEventIntegrationRequest * const q)
    : AppIntegrationsServiceRequestPrivate(other, q)
{

}

} // namespace AppIntegrationsService
} // namespace QtAws
