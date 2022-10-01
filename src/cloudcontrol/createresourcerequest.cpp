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

#include "createresourcerequest.h"
#include "createresourcerequest_p.h"
#include "createresourceresponse.h"
#include "cloudcontrolrequest_p.h"

namespace QtAws {
namespace CloudControl {

/*!
 * \class QtAws::CloudControl::CreateResourceRequest
 * \brief The CreateResourceRequest class provides an interface for CloudControl CreateResource requests.
 *
 * \inmodule QtAwsCloudControl
 *
 *  For more information about Amazon Web Services Cloud Control API, see the <a
 *  href="https://docs.aws.amazon.com/cloudcontrolapi/latest/userguide/what-is-cloudcontrolapi.html">Amazon Web Services
 *  Cloud Control API User
 *
 * \sa CloudControlClient::createResource
 */

/*!
 * Constructs a copy of \a other.
 */
CreateResourceRequest::CreateResourceRequest(const CreateResourceRequest &other)
    : CloudControlRequest(new CreateResourceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateResourceRequest object.
 */
CreateResourceRequest::CreateResourceRequest()
    : CloudControlRequest(new CreateResourceRequestPrivate(CloudControlRequest::CreateResourceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateResourceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateResourceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateResourceRequest::response(QNetworkReply * const reply) const
{
    return new CreateResourceResponse(*this, reply);
}

/*!
 * \class QtAws::CloudControl::CreateResourceRequestPrivate
 * \brief The CreateResourceRequestPrivate class provides private implementation for CreateResourceRequest.
 * \internal
 *
 * \inmodule QtAwsCloudControl
 */

/*!
 * Constructs a CreateResourceRequestPrivate object for CloudControl \a action,
 * with public implementation \a q.
 */
CreateResourceRequestPrivate::CreateResourceRequestPrivate(
    const CloudControlRequest::Action action, CreateResourceRequest * const q)
    : CloudControlRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateResourceRequest
 * class' copy constructor.
 */
CreateResourceRequestPrivate::CreateResourceRequestPrivate(
    const CreateResourceRequestPrivate &other, CreateResourceRequest * const q)
    : CloudControlRequestPrivate(other, q)
{

}

} // namespace CloudControl
} // namespace QtAws
