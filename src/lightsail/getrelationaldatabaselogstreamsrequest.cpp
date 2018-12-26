/*
    Copyright 2013-2018 Paul Colby

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

#include "getrelationaldatabaselogstreamsrequest.h"
#include "getrelationaldatabaselogstreamsrequest_p.h"
#include "getrelationaldatabaselogstreamsresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::GetRelationalDatabaseLogStreamsRequest
 * \brief The GetRelationalDatabaseLogStreamsRequest class provides an interface for Lightsail GetRelationalDatabaseLogStreams requests.
 *
 * \inmodule QtAwsLightsail
 *
 *  Amazon Lightsail is the easiest way to get started with AWS for developers who just need virtual private servers.
 *  Lightsail includes everything you need to launch your project quickly - a virtual machine, SSD-based storage, data
 *  transfer, DNS management, and a static IP - for a low, predictable price. You manage those Lightsail servers through the
 *  Lightsail console or by using the API or command-line interface
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
 * \sa LightsailClient::getRelationalDatabaseLogStreams
 */

/*!
 * Constructs a copy of \a other.
 */
GetRelationalDatabaseLogStreamsRequest::GetRelationalDatabaseLogStreamsRequest(const GetRelationalDatabaseLogStreamsRequest &other)
    : LightsailRequest(new GetRelationalDatabaseLogStreamsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRelationalDatabaseLogStreamsRequest object.
 */
GetRelationalDatabaseLogStreamsRequest::GetRelationalDatabaseLogStreamsRequest()
    : LightsailRequest(new GetRelationalDatabaseLogStreamsRequestPrivate(LightsailRequest::GetRelationalDatabaseLogStreamsAction, this))
{

}

/*!
 * \reimp
 */
bool GetRelationalDatabaseLogStreamsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetRelationalDatabaseLogStreamsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRelationalDatabaseLogStreamsRequest::response(QNetworkReply * const reply) const
{
    return new GetRelationalDatabaseLogStreamsResponse(*this, reply);
}

/*!
 * \class QtAws::Lightsail::GetRelationalDatabaseLogStreamsRequestPrivate
 * \brief The GetRelationalDatabaseLogStreamsRequestPrivate class provides private implementation for GetRelationalDatabaseLogStreamsRequest.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a GetRelationalDatabaseLogStreamsRequestPrivate object for Lightsail \a action,
 * with public implementation \a q.
 */
GetRelationalDatabaseLogStreamsRequestPrivate::GetRelationalDatabaseLogStreamsRequestPrivate(
    const LightsailRequest::Action action, GetRelationalDatabaseLogStreamsRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRelationalDatabaseLogStreamsRequest
 * class' copy constructor.
 */
GetRelationalDatabaseLogStreamsRequestPrivate::GetRelationalDatabaseLogStreamsRequestPrivate(
    const GetRelationalDatabaseLogStreamsRequestPrivate &other, GetRelationalDatabaseLogStreamsRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
