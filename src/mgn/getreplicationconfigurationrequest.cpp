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

#include "getreplicationconfigurationrequest.h"
#include "getreplicationconfigurationrequest_p.h"
#include "getreplicationconfigurationresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::GetReplicationConfigurationRequest
 * \brief The GetReplicationConfigurationRequest class provides an interface for mgn GetReplicationConfiguration requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::getReplicationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
GetReplicationConfigurationRequest::GetReplicationConfigurationRequest(const GetReplicationConfigurationRequest &other)
    : mgnRequest(new GetReplicationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetReplicationConfigurationRequest object.
 */
GetReplicationConfigurationRequest::GetReplicationConfigurationRequest()
    : mgnRequest(new GetReplicationConfigurationRequestPrivate(mgnRequest::GetReplicationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool GetReplicationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetReplicationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetReplicationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new GetReplicationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::mgn::GetReplicationConfigurationRequestPrivate
 * \brief The GetReplicationConfigurationRequestPrivate class provides private implementation for GetReplicationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a GetReplicationConfigurationRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
GetReplicationConfigurationRequestPrivate::GetReplicationConfigurationRequestPrivate(
    const mgnRequest::Action action, GetReplicationConfigurationRequest * const q)
    : mgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetReplicationConfigurationRequest
 * class' copy constructor.
 */
GetReplicationConfigurationRequestPrivate::GetReplicationConfigurationRequestPrivate(
    const GetReplicationConfigurationRequestPrivate &other, GetReplicationConfigurationRequest * const q)
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
