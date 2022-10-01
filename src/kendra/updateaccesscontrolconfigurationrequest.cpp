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

#include "updateaccesscontrolconfigurationrequest.h"
#include "updateaccesscontrolconfigurationrequest_p.h"
#include "updateaccesscontrolconfigurationresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::UpdateAccessControlConfigurationRequest
 * \brief The UpdateAccessControlConfigurationRequest class provides an interface for Kendra UpdateAccessControlConfiguration requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::updateAccessControlConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAccessControlConfigurationRequest::UpdateAccessControlConfigurationRequest(const UpdateAccessControlConfigurationRequest &other)
    : KendraRequest(new UpdateAccessControlConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAccessControlConfigurationRequest object.
 */
UpdateAccessControlConfigurationRequest::UpdateAccessControlConfigurationRequest()
    : KendraRequest(new UpdateAccessControlConfigurationRequestPrivate(KendraRequest::UpdateAccessControlConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAccessControlConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAccessControlConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAccessControlConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAccessControlConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::UpdateAccessControlConfigurationRequestPrivate
 * \brief The UpdateAccessControlConfigurationRequestPrivate class provides private implementation for UpdateAccessControlConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a UpdateAccessControlConfigurationRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
UpdateAccessControlConfigurationRequestPrivate::UpdateAccessControlConfigurationRequestPrivate(
    const KendraRequest::Action action, UpdateAccessControlConfigurationRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAccessControlConfigurationRequest
 * class' copy constructor.
 */
UpdateAccessControlConfigurationRequestPrivate::UpdateAccessControlConfigurationRequestPrivate(
    const UpdateAccessControlConfigurationRequestPrivate &other, UpdateAccessControlConfigurationRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
