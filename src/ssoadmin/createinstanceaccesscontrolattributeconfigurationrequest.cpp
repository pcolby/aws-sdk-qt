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

#include "createinstanceaccesscontrolattributeconfigurationrequest.h"
#include "createinstanceaccesscontrolattributeconfigurationrequest_p.h"
#include "createinstanceaccesscontrolattributeconfigurationresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::CreateInstanceAccessControlAttributeConfigurationRequest
 * \brief The CreateInstanceAccessControlAttributeConfigurationRequest class provides an interface for SSOAdmin CreateInstanceAccessControlAttributeConfiguration requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::createInstanceAccessControlAttributeConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateInstanceAccessControlAttributeConfigurationRequest::CreateInstanceAccessControlAttributeConfigurationRequest(const CreateInstanceAccessControlAttributeConfigurationRequest &other)
    : SSOAdminRequest(new CreateInstanceAccessControlAttributeConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateInstanceAccessControlAttributeConfigurationRequest object.
 */
CreateInstanceAccessControlAttributeConfigurationRequest::CreateInstanceAccessControlAttributeConfigurationRequest()
    : SSOAdminRequest(new CreateInstanceAccessControlAttributeConfigurationRequestPrivate(SSOAdminRequest::CreateInstanceAccessControlAttributeConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateInstanceAccessControlAttributeConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateInstanceAccessControlAttributeConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInstanceAccessControlAttributeConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateInstanceAccessControlAttributeConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::CreateInstanceAccessControlAttributeConfigurationRequestPrivate
 * \brief The CreateInstanceAccessControlAttributeConfigurationRequestPrivate class provides private implementation for CreateInstanceAccessControlAttributeConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a CreateInstanceAccessControlAttributeConfigurationRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
CreateInstanceAccessControlAttributeConfigurationRequestPrivate::CreateInstanceAccessControlAttributeConfigurationRequestPrivate(
    const SSOAdminRequest::Action action, CreateInstanceAccessControlAttributeConfigurationRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateInstanceAccessControlAttributeConfigurationRequest
 * class' copy constructor.
 */
CreateInstanceAccessControlAttributeConfigurationRequestPrivate::CreateInstanceAccessControlAttributeConfigurationRequestPrivate(
    const CreateInstanceAccessControlAttributeConfigurationRequestPrivate &other, CreateInstanceAccessControlAttributeConfigurationRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
