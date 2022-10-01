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

#include "deleteaccesscontrolconfigurationrequest.h"
#include "deleteaccesscontrolconfigurationrequest_p.h"
#include "deleteaccesscontrolconfigurationresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DeleteAccessControlConfigurationRequest
 * \brief The DeleteAccessControlConfigurationRequest class provides an interface for Kendra DeleteAccessControlConfiguration requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::deleteAccessControlConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteAccessControlConfigurationRequest::DeleteAccessControlConfigurationRequest(const DeleteAccessControlConfigurationRequest &other)
    : KendraRequest(new DeleteAccessControlConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteAccessControlConfigurationRequest object.
 */
DeleteAccessControlConfigurationRequest::DeleteAccessControlConfigurationRequest()
    : KendraRequest(new DeleteAccessControlConfigurationRequestPrivate(KendraRequest::DeleteAccessControlConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteAccessControlConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteAccessControlConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteAccessControlConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteAccessControlConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DeleteAccessControlConfigurationRequestPrivate
 * \brief The DeleteAccessControlConfigurationRequestPrivate class provides private implementation for DeleteAccessControlConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DeleteAccessControlConfigurationRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DeleteAccessControlConfigurationRequestPrivate::DeleteAccessControlConfigurationRequestPrivate(
    const KendraRequest::Action action, DeleteAccessControlConfigurationRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteAccessControlConfigurationRequest
 * class' copy constructor.
 */
DeleteAccessControlConfigurationRequestPrivate::DeleteAccessControlConfigurationRequestPrivate(
    const DeleteAccessControlConfigurationRequestPrivate &other, DeleteAccessControlConfigurationRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
