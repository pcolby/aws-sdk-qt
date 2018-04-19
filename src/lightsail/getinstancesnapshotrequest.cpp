/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getinstancesnapshotrequest.h"
#include "getinstancesnapshotrequest_p.h"
#include "getinstancesnapshotresponse.h"
#include "lightsailrequest_p.h"

namespace QtAws {
namespace Lightsail {

/*!
 * \class QtAws::Lightsail::GetInstanceSnapshotRequest
 * \brief The GetInstanceSnapshotRequest class provides an interface for Lightsail GetInstanceSnapshot requests.
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
 * \sa LightsailClient::getInstanceSnapshot
 */

/*!
 * Constructs a copy of \a other.
 */
GetInstanceSnapshotRequest::GetInstanceSnapshotRequest(const GetInstanceSnapshotRequest &other)
    : LightsailRequest(new GetInstanceSnapshotRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetInstanceSnapshotRequest object.
 */
GetInstanceSnapshotRequest::GetInstanceSnapshotRequest()
    : LightsailRequest(new GetInstanceSnapshotRequestPrivate(LightsailRequest::GetInstanceSnapshotAction, this))
{

}

/*!
 * \reimp
 */
bool GetInstanceSnapshotRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetInstanceSnapshotResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetInstanceSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new GetInstanceSnapshotResponse(*this, reply);
}

/*!
 * \class QtAws::Lightsail::GetInstanceSnapshotRequestPrivate
 * \brief The GetInstanceSnapshotRequestPrivate class provides private implementation for GetInstanceSnapshotRequest.
 * \internal
 *
 * \inmodule QtAwsLightsail
 */

/*!
 *
 * Constructs a GetInstanceSnapshotRequestPrivate object for Lightsail \a action with,
 * public implementation \a q.
 */
GetInstanceSnapshotRequestPrivate::GetInstanceSnapshotRequestPrivate(
    const LightsailRequest::Action action, GetInstanceSnapshotRequest * const q)
    : LightsailRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetInstanceSnapshotRequest
 * class' copy constructor.
 */
GetInstanceSnapshotRequestPrivate::GetInstanceSnapshotRequestPrivate(
    const GetInstanceSnapshotRequestPrivate &other, GetInstanceSnapshotRequest * const q)
    : LightsailRequestPrivate(other, q)
{

}

} // namespace Lightsail
} // namespace QtAws
