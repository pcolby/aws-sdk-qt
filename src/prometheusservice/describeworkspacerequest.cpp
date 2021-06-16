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

#include "describeworkspacerequest.h"
#include "describeworkspacerequest_p.h"
#include "describeworkspaceresponse.h"
#include "prometheusservicerequest_p.h"

namespace QtAws {
namespace PrometheusService {

/*!
 * \class QtAws::PrometheusService::DescribeWorkspaceRequest
 * \brief The DescribeWorkspaceRequest class provides an interface for PrometheusService DescribeWorkspace requests.
 *
 * \inmodule QtAwsPrometheusService
 *
 *  Amazon Managed Service for
 *
 * \sa PrometheusServiceClient::describeWorkspace
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeWorkspaceRequest::DescribeWorkspaceRequest(const DescribeWorkspaceRequest &other)
    : PrometheusServiceRequest(new DescribeWorkspaceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeWorkspaceRequest object.
 */
DescribeWorkspaceRequest::DescribeWorkspaceRequest()
    : PrometheusServiceRequest(new DescribeWorkspaceRequestPrivate(PrometheusServiceRequest::DescribeWorkspaceAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeWorkspaceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeWorkspaceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeWorkspaceRequest::response(QNetworkReply * const reply) const
{
    return new DescribeWorkspaceResponse(*this, reply);
}

/*!
 * \class QtAws::PrometheusService::DescribeWorkspaceRequestPrivate
 * \brief The DescribeWorkspaceRequestPrivate class provides private implementation for DescribeWorkspaceRequest.
 * \internal
 *
 * \inmodule QtAwsPrometheusService
 */

/*!
 * Constructs a DescribeWorkspaceRequestPrivate object for PrometheusService \a action,
 * with public implementation \a q.
 */
DescribeWorkspaceRequestPrivate::DescribeWorkspaceRequestPrivate(
    const PrometheusServiceRequest::Action action, DescribeWorkspaceRequest * const q)
    : PrometheusServiceRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeWorkspaceRequest
 * class' copy constructor.
 */
DescribeWorkspaceRequestPrivate::DescribeWorkspaceRequestPrivate(
    const DescribeWorkspaceRequestPrivate &other, DescribeWorkspaceRequest * const q)
    : PrometheusServiceRequestPrivate(other, q)
{

}

} // namespace PrometheusService
} // namespace QtAws
