// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "creategroupversionrequest.h"
#include "creategroupversionrequest_p.h"
#include "creategroupversionresponse.h"
#include "greengrassrequest_p.h"

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::CreateGroupVersionRequest
 * \brief The CreateGroupVersionRequest class provides an interface for Greengrass CreateGroupVersion requests.
 *
 * \inmodule QtAwsGreengrass
 *
 *  AWS IoT Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS IoT Greengrass ensures your devices can
 *  respond quickly to local events and operate with intermittent connectivity. AWS IoT Greengrass minimizes the cost of
 *
 * \sa GreengrassClient::createGroupVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateGroupVersionRequest::CreateGroupVersionRequest(const CreateGroupVersionRequest &other)
    : GreengrassRequest(new CreateGroupVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateGroupVersionRequest object.
 */
CreateGroupVersionRequest::CreateGroupVersionRequest()
    : GreengrassRequest(new CreateGroupVersionRequestPrivate(GreengrassRequest::CreateGroupVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateGroupVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateGroupVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateGroupVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateGroupVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Greengrass::CreateGroupVersionRequestPrivate
 * \brief The CreateGroupVersionRequestPrivate class provides private implementation for CreateGroupVersionRequest.
 * \internal
 *
 * \inmodule QtAwsGreengrass
 */

/*!
 * Constructs a CreateGroupVersionRequestPrivate object for Greengrass \a action,
 * with public implementation \a q.
 */
CreateGroupVersionRequestPrivate::CreateGroupVersionRequestPrivate(
    const GreengrassRequest::Action action, CreateGroupVersionRequest * const q)
    : GreengrassRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateGroupVersionRequest
 * class' copy constructor.
 */
CreateGroupVersionRequestPrivate::CreateGroupVersionRequestPrivate(
    const CreateGroupVersionRequestPrivate &other, CreateGroupVersionRequest * const q)
    : GreengrassRequestPrivate(other, q)
{

}

} // namespace Greengrass
} // namespace QtAws
