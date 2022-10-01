// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdeviceresourcesrequest.h"
#include "listdeviceresourcesrequest_p.h"
#include "listdeviceresourcesresponse.h"
#include "snowdevicemanagementrequest_p.h"

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::ListDeviceResourcesRequest
 * \brief The ListDeviceResourcesRequest class provides an interface for SnowDeviceManagement ListDeviceResources requests.
 *
 * \inmodule QtAwsSnowDeviceManagement
 *
 *  Amazon Web Services Snow Device Management
 *
 * \sa SnowDeviceManagementClient::listDeviceResources
 */

/*!
 * Constructs a copy of \a other.
 */
ListDeviceResourcesRequest::ListDeviceResourcesRequest(const ListDeviceResourcesRequest &other)
    : SnowDeviceManagementRequest(new ListDeviceResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeviceResourcesRequest object.
 */
ListDeviceResourcesRequest::ListDeviceResourcesRequest()
    : SnowDeviceManagementRequest(new ListDeviceResourcesRequestPrivate(SnowDeviceManagementRequest::ListDeviceResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDeviceResourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDeviceResourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeviceResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListDeviceResourcesResponse(*this, reply);
}

/*!
 * \class QtAws::SnowDeviceManagement::ListDeviceResourcesRequestPrivate
 * \brief The ListDeviceResourcesRequestPrivate class provides private implementation for ListDeviceResourcesRequest.
 * \internal
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a ListDeviceResourcesRequestPrivate object for SnowDeviceManagement \a action,
 * with public implementation \a q.
 */
ListDeviceResourcesRequestPrivate::ListDeviceResourcesRequestPrivate(
    const SnowDeviceManagementRequest::Action action, ListDeviceResourcesRequest * const q)
    : SnowDeviceManagementRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDeviceResourcesRequest
 * class' copy constructor.
 */
ListDeviceResourcesRequestPrivate::ListDeviceResourcesRequestPrivate(
    const ListDeviceResourcesRequestPrivate &other, ListDeviceResourcesRequest * const q)
    : SnowDeviceManagementRequestPrivate(other, q)
{

}

} // namespace SnowDeviceManagement
} // namespace QtAws
