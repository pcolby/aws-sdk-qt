// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getgroupversionrequest.h"
#include "getgroupversionrequest_p.h"
#include "getgroupversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::GetGroupVersionRequest
 * \brief The GetGroupVersionRequest class provides an interface for Greengrass GetGroupVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::getGroupVersion
 */

/*!
 * Constructs a copy of \a other.
 */
GetGroupVersionRequest::GetGroupVersionRequest(const GetGroupVersionRequest &other)
    : GreengrassRequest(new GetGroupVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetGroupVersionRequest object.
 */
GetGroupVersionRequest::GetGroupVersionRequest()
    : GreengrassRequest(new GetGroupVersionRequestPrivate(GreengrassRequest::GetGroupVersionAction, this))
{

}

/*!
 * \reimp
 */
bool GetGroupVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetGroupVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetGroupVersionRequest::response(QNetworkReply * const reply) const
{
    return new GetGroupVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::GetGroupVersionRequestPrivate
 * \brief The GetGroupVersionRequestPrivate class provides private implementation for GetGroupVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a GetGroupVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
GetGroupVersionRequestPrivate::GetGroupVersionRequestPrivate(
    const GreengrassRequest::Action action, GetGroupVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetGroupVersionRequest
 * class' copy constructor.
 */
GetGroupVersionRequestPrivate::GetGroupVersionRequestPrivate(
    const GetGroupVersionRequestPrivate &other, GetGroupVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
