// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getoperationrequest.h"
#include "getoperationrequest_p.h"
#include "getoperationresponse.h"
#include "servicediscoveryrequest_p.h"

namespace QtAws {
namespace ServiceDiscovery {

/*!
 * \class QtAws::ServiceDiscovery::GetOperationRequest
 * \brief The GetOperationRequest class provides an interface for ServiceDiscovery GetOperation requests.
 *
 * \inmodule QtAwsServiceDiscovery
 *
 *  <fullname>Cloud Map</fullname>
 * 
 *  With Cloud Map, you can configure public DNS, private DNS, or HTTP namespaces that your microservice applications run
 *  in. When an instance becomes available, you can call the Cloud Map API to register the instance with Cloud Map. For
 *  public or private DNS namespaces, Cloud Map automatically creates DNS records and an optional health check. Clients that
 *  submit public or private DNS queries, or HTTP requests, for the service receive an answer that contains up to eight
 *  healthy records.
 *
 * \sa ServiceDiscoveryClient::getOperation
 */

/*!
 * Constructs a copy of \a other.
 */
GetOperationRequest::GetOperationRequest(const GetOperationRequest &other)
    : ServiceDiscoveryRequest(new GetOperationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetOperationRequest object.
 */
GetOperationRequest::GetOperationRequest()
    : ServiceDiscoveryRequest(new GetOperationRequestPrivate(ServiceDiscoveryRequest::GetOperationAction, this))
{

}

/*!
 * \reimp
 */
bool GetOperationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetOperationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOperationRequest::response(QNetworkReply * const reply) const
{
    return new GetOperationResponse(*this, reply);
}

/*!
 * \class QtAws::ServiceDiscovery::GetOperationRequestPrivate
 * \brief The GetOperationRequestPrivate class provides private implementation for GetOperationRequest.
 * \internal
 *
 * \inmodule QtAwsServiceDiscovery
 */

/*!
 * Constructs a GetOperationRequestPrivate object for ServiceDiscovery \a action,
 * with public implementation \a q.
 */
GetOperationRequestPrivate::GetOperationRequestPrivate(
    const ServiceDiscoveryRequest::Action action, GetOperationRequest * const q)
    : ServiceDiscoveryRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetOperationRequest
 * class' copy constructor.
 */
GetOperationRequestPrivate::GetOperationRequestPrivate(
    const GetOperationRequestPrivate &other, GetOperationRequest * const q)
    : ServiceDiscoveryRequestPrivate(other, q)
{

}

} // namespace ServiceDiscovery
} // namespace QtAws
