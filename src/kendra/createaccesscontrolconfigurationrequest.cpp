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

#include "createaccesscontrolconfigurationrequest.h"
#include "createaccesscontrolconfigurationrequest_p.h"
#include "createaccesscontrolconfigurationresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::CreateAccessControlConfigurationRequest
 * \brief The CreateAccessControlConfigurationRequest class provides an interface for Kendra CreateAccessControlConfiguration requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::createAccessControlConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateAccessControlConfigurationRequest::CreateAccessControlConfigurationRequest(const CreateAccessControlConfigurationRequest &other)
    : KendraRequest(new CreateAccessControlConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateAccessControlConfigurationRequest object.
 */
CreateAccessControlConfigurationRequest::CreateAccessControlConfigurationRequest()
    : KendraRequest(new CreateAccessControlConfigurationRequestPrivate(KendraRequest::CreateAccessControlConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateAccessControlConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateAccessControlConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateAccessControlConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateAccessControlConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::CreateAccessControlConfigurationRequestPrivate
 * \brief The CreateAccessControlConfigurationRequestPrivate class provides private implementation for CreateAccessControlConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a CreateAccessControlConfigurationRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
CreateAccessControlConfigurationRequestPrivate::CreateAccessControlConfigurationRequestPrivate(
    const KendraRequest::Action action, CreateAccessControlConfigurationRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateAccessControlConfigurationRequest
 * class' copy constructor.
 */
CreateAccessControlConfigurationRequestPrivate::CreateAccessControlConfigurationRequestPrivate(
    const CreateAccessControlConfigurationRequestPrivate &other, CreateAccessControlConfigurationRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
