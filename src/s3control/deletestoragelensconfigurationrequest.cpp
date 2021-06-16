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

#include "deletestoragelensconfigurationrequest.h"
#include "deletestoragelensconfigurationrequest_p.h"
#include "deletestoragelensconfigurationresponse.h"
#include "s3controlrequest_p.h"

namespace QtAws {
namespace S3Control {

/*!
 * \class QtAws::S3Control::DeleteStorageLensConfigurationRequest
 * \brief The DeleteStorageLensConfigurationRequest class provides an interface for S3Control DeleteStorageLensConfiguration requests.
 *
 * \inmodule QtAwsS3Control
 *
 *  AWS S3 Control provides access to Amazon S3 control plane actions.
 *
 * \sa S3ControlClient::deleteStorageLensConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteStorageLensConfigurationRequest::DeleteStorageLensConfigurationRequest(const DeleteStorageLensConfigurationRequest &other)
    : S3ControlRequest(new DeleteStorageLensConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteStorageLensConfigurationRequest object.
 */
DeleteStorageLensConfigurationRequest::DeleteStorageLensConfigurationRequest()
    : S3ControlRequest(new DeleteStorageLensConfigurationRequestPrivate(S3ControlRequest::DeleteStorageLensConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteStorageLensConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteStorageLensConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteStorageLensConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteStorageLensConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::S3Control::DeleteStorageLensConfigurationRequestPrivate
 * \brief The DeleteStorageLensConfigurationRequestPrivate class provides private implementation for DeleteStorageLensConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsS3Control
 */

/*!
 * Constructs a DeleteStorageLensConfigurationRequestPrivate object for S3Control \a action,
 * with public implementation \a q.
 */
DeleteStorageLensConfigurationRequestPrivate::DeleteStorageLensConfigurationRequestPrivate(
    const S3ControlRequest::Action action, DeleteStorageLensConfigurationRequest * const q)
    : S3ControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteStorageLensConfigurationRequest
 * class' copy constructor.
 */
DeleteStorageLensConfigurationRequestPrivate::DeleteStorageLensConfigurationRequestPrivate(
    const DeleteStorageLensConfigurationRequestPrivate &other, DeleteStorageLensConfigurationRequest * const q)
    : S3ControlRequestPrivate(other, q)
{

}

} // namespace S3Control
} // namespace QtAws
