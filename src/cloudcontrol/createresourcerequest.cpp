// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
