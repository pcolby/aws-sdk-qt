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

#include "updatereplicationconfigurationrequest.h"
#include "updatereplicationconfigurationrequest_p.h"
#include "updatereplicationconfigurationresponse.h"
#include "mgnrequest_p.h"

namespace QtAws {
namespace mgn {

/*!
 * \class QtAws::mgn::UpdateReplicationConfigurationRequest
 * \brief The UpdateReplicationConfigurationRequest class provides an interface for mgn UpdateReplicationConfiguration requests.
 *
 * \inmodule QtAwsmgn
 *
 *  The Application Migration Service
 *
 * \sa mgnClient::updateReplicationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateReplicationConfigurationRequest::UpdateReplicationConfigurationRequest(const UpdateReplicationConfigurationRequest &other)
    : mgnRequest(new UpdateReplicationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateReplicationConfigurationRequest object.
 */
UpdateReplicationConfigurationRequest::UpdateReplicationConfigurationRequest()
    : mgnRequest(new UpdateReplicationConfigurationRequestPrivate(mgnRequest::UpdateReplicationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateReplicationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateReplicationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateReplicationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateReplicationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::mgn::UpdateReplicationConfigurationRequestPrivate
 * \brief The UpdateReplicationConfigurationRequestPrivate class provides private implementation for UpdateReplicationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsmgn
 */

/*!
 * Constructs a UpdateReplicationConfigurationRequestPrivate object for mgn \a action,
 * with public implementation \a q.
 */
UpdateReplicationConfigurationRequestPrivate::UpdateReplicationConfigurationRequestPrivate(
    const mgnRequest::Action action, UpdateReplicationConfigurationRequest * const q)
    : mgnRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateReplicationConfigurationRequest
 * class' copy constructor.
 */
UpdateReplicationConfigurationRequestPrivate::UpdateReplicationConfigurationRequestPrivate(
    const UpdateReplicationConfigurationRequestPrivate &other, UpdateReplicationConfigurationRequest * const q)
    : mgnRequestPrivate(other, q)
{

}

} // namespace mgn
} // namespace QtAws
