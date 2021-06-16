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

#include "listinstalledcomponentsrequest.h"
#include "listinstalledcomponentsrequest_p.h"
#include "listinstalledcomponentsresponse.h"
#include "greengrassv2request_p.h"

namespace QtAws {
namespace GreengrassV2 {

/*!
 * \class QtAws::GreengrassV2::ListInstalledComponentsRequest
 * \brief The ListInstalledComponentsRequest class provides an interface for GreengrassV2 ListInstalledComponents requests.
 *
 * \inmodule QtAwsGreengrassV2
 *
 *  AWS IoT Greengrass brings local compute, messaging, data management, sync, and ML inference capabilities to edge
 *  devices. This enables devices to collect and analyze data closer to the source of information, react autonomously to
 *  local events, and communicate securely with each other on local networks. Local devices can also communicate securely
 *  with AWS IoT Core and export IoT data to the AWS Cloud. AWS IoT Greengrass developers can use AWS Lambda functions and
 *  components to create and deploy applications to fleets of edge devices for local
 * 
 *  operation>
 * 
 *  AWS IoT Greengrass Version 2 provides a new major version of the AWS IoT Greengrass Core software, new APIs, and a new
 *  console. Use this API reference to learn how to use the AWS IoT Greengrass V2 API operations to manage components,
 *  manage deployments, and core
 * 
 *  devices>
 * 
 *  For more information, see <a
 *  href="https://docs.aws.amazon.com/greengrass/v2/developerguide/what-is-iot-greengrass.html">What is AWS IoT
 *  Greengrass?</a> in the <i>AWS IoT Greengrass V2 Developer
 *
 * \sa GreengrassV2Client::listInstalledComponents
 */

/*!
 * Constructs a copy of \a other.
 */
ListInstalledComponentsRequest::ListInstalledComponentsRequest(const ListInstalledComponentsRequest &other)
    : GreengrassV2Request(new ListInstalledComponentsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListInstalledComponentsRequest object.
 */
ListInstalledComponentsRequest::ListInstalledComponentsRequest()
    : GreengrassV2Request(new ListInstalledComponentsRequestPrivate(GreengrassV2Request::ListInstalledComponentsAction, this))
{

}

/*!
 * \reimp
 */
bool ListInstalledComponentsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListInstalledComponentsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListInstalledComponentsRequest::response(QNetworkReply * const reply) const
{
    return new ListInstalledComponentsResponse(*this, reply);
}

/*!
 * \class QtAws::GreengrassV2::ListInstalledComponentsRequestPrivate
 * \brief The ListInstalledComponentsRequestPrivate class provides private implementation for ListInstalledComponentsRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrassV2
 */

/*!
 * Constructs a ListInstalledComponentsRequestPrivate object for GreengrassV2 \a action,
 * with public implementation \a q.
 */
ListInstalledComponentsRequestPrivate::ListInstalledComponentsRequestPrivate(
    const GreengrassV2Request::Action action, ListInstalledComponentsRequest * const q)
    : GreengrassV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListInstalledComponentsRequest
 * class' copy constructor.
 */
ListInstalledComponentsRequestPrivate::ListInstalledComponentsRequestPrivate(
    const ListInstalledComponentsRequestPrivate &other, ListInstalledComponentsRequest * const q)
    : GreengrassV2RequestPrivate(other, q)
{

}

} // namespace GreengrassV2
} // namespace QtAws
