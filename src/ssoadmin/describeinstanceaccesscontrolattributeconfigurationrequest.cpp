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

#include "describeinstanceaccesscontrolattributeconfigurationrequest.h"
#include "describeinstanceaccesscontrolattributeconfigurationrequest_p.h"
#include "describeinstanceaccesscontrolattributeconfigurationresponse.h"
#include "ssoadminrequest_p.h"

namespace QtAws {
namespace SSOAdmin {

/*!
 * \class QtAws::SSOAdmin::DescribeInstanceAccessControlAttributeConfigurationRequest
 * \brief The DescribeInstanceAccessControlAttributeConfigurationRequest class provides an interface for SSOAdmin DescribeInstanceAccessControlAttributeConfiguration requests.
 *
 * \inmodule QtAwsSSOAdmin
 *
 *
 * \sa SSOAdminClient::describeInstanceAccessControlAttributeConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeInstanceAccessControlAttributeConfigurationRequest::DescribeInstanceAccessControlAttributeConfigurationRequest(const DescribeInstanceAccessControlAttributeConfigurationRequest &other)
    : SSOAdminRequest(new DescribeInstanceAccessControlAttributeConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeInstanceAccessControlAttributeConfigurationRequest object.
 */
DescribeInstanceAccessControlAttributeConfigurationRequest::DescribeInstanceAccessControlAttributeConfigurationRequest()
    : SSOAdminRequest(new DescribeInstanceAccessControlAttributeConfigurationRequestPrivate(SSOAdminRequest::DescribeInstanceAccessControlAttributeConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInstanceAccessControlAttributeConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeInstanceAccessControlAttributeConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInstanceAccessControlAttributeConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInstanceAccessControlAttributeConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::SSOAdmin::DescribeInstanceAccessControlAttributeConfigurationRequestPrivate
 * \brief The DescribeInstanceAccessControlAttributeConfigurationRequestPrivate class provides private implementation for DescribeInstanceAccessControlAttributeConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsSSOAdmin
 */

/*!
 * Constructs a DescribeInstanceAccessControlAttributeConfigurationRequestPrivate object for SSOAdmin \a action,
 * with public implementation \a q.
 */
DescribeInstanceAccessControlAttributeConfigurationRequestPrivate::DescribeInstanceAccessControlAttributeConfigurationRequestPrivate(
    const SSOAdminRequest::Action action, DescribeInstanceAccessControlAttributeConfigurationRequest * const q)
    : SSOAdminRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeInstanceAccessControlAttributeConfigurationRequest
 * class' copy constructor.
 */
DescribeInstanceAccessControlAttributeConfigurationRequestPrivate::DescribeInstanceAccessControlAttributeConfigurationRequestPrivate(
    const DescribeInstanceAccessControlAttributeConfigurationRequestPrivate &other, DescribeInstanceAccessControlAttributeConfigurationRequest * const q)
    : SSOAdminRequestPrivate(other, q)
{

}

} // namespace SSOAdmin
} // namespace QtAws
