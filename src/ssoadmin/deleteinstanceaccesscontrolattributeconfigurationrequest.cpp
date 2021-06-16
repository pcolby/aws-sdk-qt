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

#include "deleteinstanceaccesscontrolattributeconfigurationrequest.h"
#include "deleteinstanceaccesscontrolattributeconfigurationrequest_p.h"
#include "deleteinstanceaccesscontrolattributeconfigurationresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DeleteInstanceAccessControlAttributeConfigurationRequest
 * \brief The DeleteInstanceAccessControlAttributeConfigurationRequest class provides an interface for SSOAdmin DeleteInstanceAccessControlAttributeConfiguration requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::deleteInstanceAccessControlAttributeConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInstanceAccessControlAttributeConfigurationRequest::DeleteInstanceAccessControlAttributeConfigurationRequest(const DeleteInstanceAccessControlAttributeConfigurationRequest &other)
    : SSOAdminRequest(new DeleteInstanceAccessControlAttributeConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInstanceAccessControlAttributeConfigurationRequest object.
 */
DeleteInstanceAccessControlAttributeConfigurationRequest::DeleteInstanceAccessControlAttributeConfigurationRequest()
    : SSOAdminRequest(new DeleteInstanceAccessControlAttributeConfigurationRequestPrivate(SSOAdminRequest::DeleteInstanceAccessControlAttributeConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInstanceAccessControlAttributeConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInstanceAccessControlAttributeConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInstanceAccessControlAttributeConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInstanceAccessControlAttributeConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::DeleteInstanceAccessControlAttributeConfigurationRequestPrivate
 * \brief The DeleteInstanceAccessControlAttributeConfigurationRequestPrivate class provides private implementation for DeleteInstanceAccessControlAttributeConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DeleteInstanceAccessControlAttributeConfigurationRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
DeleteInstanceAccessControlAttributeConfigurationRequestPrivate::DeleteInstanceAccessControlAttributeConfigurationRequestPrivate(
    const SSOAdminRequest::Action action, DeleteInstanceAccessControlAttributeConfigurationRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInstanceAccessControlAttributeConfigurationRequest
 * class' copy constructor.
 */
DeleteInstanceAccessControlAttributeConfigurationRequestPrivate::DeleteInstanceAccessControlAttributeConfigurationRequestPrivate(
    const DeleteInstanceAccessControlAttributeConfigurationRequestPrivate &other, DeleteInstanceAccessControlAttributeConfigurationRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
