// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listexecutionsrequest.h"
#include "listexecutionsrequest_p.h"
#include "listexecutionsresponse.h"
#include "snowdevicemanagementrequest_p.h"

namespace QtAws {
namespace SnowDeviceManagement {

/*!
 * \class QtAws::SnowDeviceManagement::ListExecutionsRequest
 * \brief The ListExecutionsRequest class provides an interface for SnowDeviceManagement ListExecutions requests.
 *
 * \inmodule QtAwsSnowDeviceManagement
 *
 *  Amazon Web Services Snow Device Management
 *
 * \sa SnowDeviceManagementClient::listExecutions
 */

/*!
 * Constructs a copy of \a other.
 */
ListExecutionsRequest::ListExecutionsRequest(const ListExecutionsRequest &other)
    : SnowDeviceManagementRequest(new ListExecutionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListExecutionsRequest object.
 */
ListExecutionsRequest::ListExecutionsRequest()
    : SnowDeviceManagementRequest(new ListExecutionsRequestPrivate(SnowDeviceManagementRequest::ListExecutionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListExecutionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListExecutionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListExecutionsResponse(*this, reply);
}

/*!
 * \class QtAws::SnowDeviceManagement::ListExecutionsRequestPrivate
 * \brief The ListExecutionsRequestPrivate class provides private implementation for ListExecutionsRequest.
 * \internal
 *
 * \inmodule QtAwsSnowDeviceManagement
 */

/*!
 * Constructs a ListExecutionsRequestPrivate object for SnowDeviceManagement \a action,
 * with public implementation \a q.
 */
ListExecutionsRequestPrivate::ListExecutionsRequestPrivate(
    const SnowDeviceManagementRequest::Action action, ListExecutionsRequest * const q)
    : SnowDeviceManagementRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListExecutionsRequest
 * class' copy constructor.
 */
ListExecutionsRequestPrivate::ListExecutionsRequestPrivate(
    const ListExecutionsRequestPrivate &other, ListExecutionsRequest * const q)
    : SnowDeviceManagementRequestPrivate(other, q)
{

}

} // namespace SnowDeviceManagement
} // namespace QtAws
