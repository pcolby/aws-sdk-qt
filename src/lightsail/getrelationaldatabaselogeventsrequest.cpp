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

#include "getrelationaldatabaselogeventsrequest.h"
#include "getrelationaldatabaselogeventsrequest_p.h"
#include "getrelationaldatabaselogeventsresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::GetRelationalDatabaseLogEventsRequest
 * \brief The GetRelationalDatabaseLogEventsRequest class provides an interface for Lightsail GetRelationalDatabaseLogEvents requests.
 *
 * \inmodule QtAwsLightsail
 *
 *  Amazon Lightsail is the easiest way to get started with Amazon Web Services (AWS) for developers who need to build
 *  websites or web applications. It includes everything you need to launch your project quickly - instances (virtual
 *  private servers), container services, managed databases, SSD-based block storage, static IP addresses, load balancers,
 *  content delivery network (CDN) distributions, DNS management of registered domains, and resource snapshots (backups) -
 *  for a low, predictable monthly
 * 
 *  price>
 * 
 *  You can manage your Lightsail resources using the Lightsail console, Lightsail API, AWS Command Line Interface (AWS
 *  CLI), or SDKs. For more information about Lightsail concepts and tasks, see the <a
 *  href="http://lightsail.aws.amazon.com/ls/docs/how-to/article/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Lightsail
 *  Dev
 * 
 *  Guide</a>>
 * 
 *  This API Reference provides detailed information about the actions, data types, parameters, and errors of the Lightsail
 *  service. For more information about the supported AWS Regions, endpoints, and service quotas of the Lightsail service,
 *  see <a href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon Lightsail Endpoints and Quotas</a> in
 *  the <i>AWS General
 *
 * \sa LightsailClient::getRelationalDatabaseLogEvents
 */

/*!
 * Constructs a copy of \a other.
 */
GetRelationalDatabaseLogEventsRequest::GetRelationalDatabaseLogEventsRequest(const GetRelationalDatabaseLogEventsRequest &other)
    : LightsailRequest(new GetRelationalDatabaseLogEventsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRelationalDatabaseLogEventsRequest object.
 */
GetRelationalDatabaseLogEventsRequest::GetRelationalDatabaseLogEventsRequest()
    : LightsailRequest(new GetRelationalDatabaseLogEventsRequestPrivate(LightsailRequest::GetRelationalDatabaseLogEventsAction, this))
{

}

/*!
 * \reimp
 */
bool GetRelationalDatabaseLogEventsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRelationalDatabaseLogEventsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRelationalDatabaseLogEventsRequest::response(QNetworkReply * const reply) const
{
    return new GetRelationalDatabaseLogEventsResponse(*this, reply);
}

/*!
 * \class QtAws::Lightsail::GetRelationalDatabaseLogEventsRequestPrivate
 * \brief The GetRelationalDatabaseLogEventsRequestPrivate class provides private implementation for GetRelationalDatabaseLogEventsRequest.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a GetRelationalDatabaseLogEventsRequestPrivate object for Lightsail \a action,
 * with public implementation \a q.
 */
GetRelationalDatabaseLogEventsRequestPrivate::GetRelationalDatabaseLogEventsRequestPrivate(
    const LightsailRequest::Action action, GetRelationalDatabaseLogEventsRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRelationalDatabaseLogEventsRequest
 * class' copy constructor.
 */
GetRelationalDatabaseLogEventsRequestPrivate::GetRelationalDatabaseLogEventsRequestPrivate(
    const GetRelationalDatabaseLogEventsRequestPrivate &other, GetRelationalDatabaseLogEventsRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
