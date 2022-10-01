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

#include "getdisksnapshotsrequest.h"
#include "getdisksnapshotsrequest_p.h"
#include "getdisksnapshotsresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::GetDiskSnapshotsRequest
 * \brief The GetDiskSnapshotsRequest class provides an interface for Lightsail GetDiskSnapshots requests.
 *
 * \inmodule QtAwsLightsail
 *
 *  Amazon Lightsail is the easiest way to get started with Amazon Web Services (Amazon Web Services) for developers who
 *  need to build websites or web applications. It includes everything you need to launch your project quickly - instances
 *  (virtual private servers), container services, storage buckets, managed databases, SSD-based block storage, static IP
 *  addresses, load balancers, content delivery network (CDN) distributions, DNS management of registered domains, and
 *  resource snapshots (backups) - for a low, predictable monthly
 * 
 *  price>
 * 
 *  You can manage your Lightsail resources using the Lightsail console, Lightsail API, AWS Command Line Interface (AWS
 *  CLI), or SDKs. For more information about Lightsail concepts and tasks, see the <a
 *  href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/lightsail-how-to-set-up-access-keys-to-use-sdk-api-cli">Amazon
 *  Lightsail Developer
 * 
 *  Guide</a>>
 * 
 *  This API Reference provides detailed information about the actions, data types, parameters, and errors of the Lightsail
 *  service. For more information about the supported Amazon Web Services Regions, endpoints, and service quotas of the
 *  Lightsail service, see <a href="https://docs.aws.amazon.com/general/latest/gr/lightsail.html">Amazon Lightsail Endpoints
 *  and Quotas</a> in the <i>Amazon Web Services General
 *
 * \sa LightsailClient::getDiskSnapshots
 */

/*!
 * Constructs a copy of \a other.
 */
GetDiskSnapshotsRequest::GetDiskSnapshotsRequest(const GetDiskSnapshotsRequest &other)
    : LightsailRequest(new GetDiskSnapshotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDiskSnapshotsRequest object.
 */
GetDiskSnapshotsRequest::GetDiskSnapshotsRequest()
    : LightsailRequest(new GetDiskSnapshotsRequestPrivate(LightsailRequest::GetDiskSnapshotsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDiskSnapshotsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDiskSnapshotsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDiskSnapshotsRequest::response(QNetworkReply * const reply) const
{
    return new GetDiskSnapshotsResponse(*this, reply);
}

/*!
 * \class QtAws::Lightsail::GetDiskSnapshotsRequestPrivate
 * \brief The GetDiskSnapshotsRequestPrivate class provides private implementation for GetDiskSnapshotsRequest.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 * Constructs a GetDiskSnapshotsRequestPrivate object for Lightsail \a action,
 * with public implementation \a q.
 */
GetDiskSnapshotsRequestPrivate::GetDiskSnapshotsRequestPrivate(
    const LightsailRequest::Action action, GetDiskSnapshotsRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDiskSnapshotsRequest
 * class' copy constructor.
 */
GetDiskSnapshotsRequestPrivate::GetDiskSnapshotsRequestPrivate(
    const GetDiskSnapshotsRequestPrivate &other, GetDiskSnapshotsRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
