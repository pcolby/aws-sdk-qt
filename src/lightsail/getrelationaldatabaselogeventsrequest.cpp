/*
    Copyright 2013-2019 Paul Colby

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
 *  Amazon Lightsail is the easiest way to get started with AWS for developers who just need virtual private servers.
 *  Lightsail includes everything you need to launch your project quickly - a virtual machine, a managed database, SSD-based
 *  storage, data transfer, DNS management, and a static IP - for a low, predictable price. You manage those Lightsail
 *  servers through the Lightsail console or by using the API or command-line interface
 * 
 *  (CLI)>
 * 
 *  For more information about Lightsail concepts and tasks, see the <a
 *  href="https://lightsail.aws.amazon.com/ls/docs/all">Lightsail Dev
 * 
 *  Guide</a>>
 * 
 *  To use the Lightsail API or the CLI, you will need to use AWS Identity and Access Management (IAM) to generate access
 *  keys. For details about how to set this up, see the <a
 *  href="http://lightsail.aws.amazon.com/ls/docs/how-to/article/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Lightsail
 *  Dev
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
