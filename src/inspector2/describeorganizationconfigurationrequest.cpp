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

#include "describeorganizationconfigurationrequest.h"
#include "describeorganizationconfigurationrequest_p.h"
#include "describeorganizationconfigurationresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::DescribeOrganizationConfigurationRequest
 * \brief The DescribeOrganizationConfigurationRequest class provides an interface for Inspector2 DescribeOrganizationConfiguration requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::describeOrganizationConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeOrganizationConfigurationRequest::DescribeOrganizationConfigurationRequest(const DescribeOrganizationConfigurationRequest &other)
    : Inspector2Request(new DescribeOrganizationConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeOrganizationConfigurationRequest object.
 */
DescribeOrganizationConfigurationRequest::DescribeOrganizationConfigurationRequest()
    : Inspector2Request(new DescribeOrganizationConfigurationRequestPrivate(Inspector2Request::DescribeOrganizationConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeOrganizationConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeOrganizationConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeOrganizationConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DescribeOrganizationConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::DescribeOrganizationConfigurationRequestPrivate
 * \brief The DescribeOrganizationConfigurationRequestPrivate class provides private implementation for DescribeOrganizationConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a DescribeOrganizationConfigurationRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
DescribeOrganizationConfigurationRequestPrivate::DescribeOrganizationConfigurationRequestPrivate(
    const Inspector2Request::Action action, DescribeOrganizationConfigurationRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeOrganizationConfigurationRequest
 * class' copy constructor.
 */
DescribeOrganizationConfigurationRequestPrivate::DescribeOrganizationConfigurationRequestPrivate(
    const DescribeOrganizationConfigurationRequestPrivate &other, DescribeOrganizationConfigurationRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
