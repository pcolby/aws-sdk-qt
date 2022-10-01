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

#include "describeaccesscontrolconfigurationrequest.h"
#include "describeaccesscontrolconfigurationrequest_p.h"
#include "describeaccesscontrolconfigurationresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::DescribeAccessControlConfigurationRequest
 * \brief The DescribeAccessControlConfigurationRequest class provides an interface for Kendra DescribeAccessControlConfiguration requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::describeAccessControlConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeAccessControlConfigurationRequest::DescribeAccessControlConfigurationRequest(const DescribeAccessControlConfigurationRequest &other)
    : KendraRequest(new DescribeAccessControlConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeAccessControlConfigurationRequest object.
 */
DescribeAccessControlConfigurationRequest::DescribeAccessControlConfigurationRequest()
    : KendraRequest(new DescribeAccessControlConfigurationRequestPrivate(KendraRequest::DescribeAccessControlConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeAccessControlConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeAccessControlConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeAccessControlConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeAccessControlConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::DescribeAccessControlConfigurationRequestPrivate
 * \brief The DescribeAccessControlConfigurationRequestPrivate class provides private implementation for DescribeAccessControlConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a DescribeAccessControlConfigurationRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
DescribeAccessControlConfigurationRequestPrivate::DescribeAccessControlConfigurationRequestPrivate(
    const KendraRequest::Action action, DescribeAccessControlConfigurationRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeAccessControlConfigurationRequest
 * class' copy constructor.
 */
DescribeAccessControlConfigurationRequestPrivate::DescribeAccessControlConfigurationRequestPrivate(
    const DescribeAccessControlConfigurationRequestPrivate &other, DescribeAccessControlConfigurationRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
