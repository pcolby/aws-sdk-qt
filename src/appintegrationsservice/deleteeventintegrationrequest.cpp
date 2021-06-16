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

#include "deleteeventintegrationrequest.h"
#include "deleteeventintegrationrequest_p.h"
#include "deleteeventintegrationresponse.h"
#include "appintegrationsservicerequest_p.h"

namespace QtAws {
namespace AppIntegrationsService {

/*!
 * \class QtAws::AppIntegrationsService::DeleteEventIntegrationRequest
 * \brief The DeleteEventIntegrationRequest class provides an interface for AppIntegrationsService DeleteEventIntegration requests.
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
 * \sa AppIntegrationsServiceClient::deleteEventIntegration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteEventIntegrationRequest::DeleteEventIntegrationRequest(const DeleteEventIntegrationRequest &other)
    : AppIntegrationsServiceRequest(new DeleteEventIntegrationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteEventIntegrationRequest object.
 */
DeleteEventIntegrationRequest::DeleteEventIntegrationRequest()
    : AppIntegrationsServiceRequest(new DeleteEventIntegrationRequestPrivate(AppIntegrationsServiceRequest::DeleteEventIntegrationAction, this))
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
 * \class QtAws::AppIntegrationsService::DeleteEventIntegrationRequestPrivate
 * \brief The DeleteEventIntegrationRequestPrivate class provides private implementation for DeleteEventIntegrationRequest.
 * \internal
 *
 * \inmodule QtAwsAppIntegrationsService
 */

/*!
 * Constructs a DeleteEventIntegrationRequestPrivate object for AppIntegrationsService \a action,
 * with public implementation \a q.
 */
DeleteEventIntegrationRequestPrivate::DeleteEventIntegrationRequestPrivate(
    const AppIntegrationsServiceRequest::Action action, DeleteEventIntegrationRequest * const q)
    : AppIntegrationsServiceRequestPrivate(action, q)
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
    : AppIntegrationsServiceRequestPrivate(other, q)
{

}

} // namespace AppIntegrationsService
} // namespace QtAws
