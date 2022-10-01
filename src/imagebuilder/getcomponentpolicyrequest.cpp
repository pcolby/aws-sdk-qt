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

#include "getcomponentpolicyrequest.h"
#include "getcomponentpolicyrequest_p.h"
#include "getcomponentpolicyresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::GetComponentPolicyRequest
 * \brief The GetComponentPolicyRequest class provides an interface for ImageBuilder GetComponentPolicy requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::getComponentPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetComponentPolicyRequest::GetComponentPolicyRequest(const GetComponentPolicyRequest &other)
    : ImageBuilderRequest(new GetComponentPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetComponentPolicyRequest object.
 */
GetComponentPolicyRequest::GetComponentPolicyRequest()
    : ImageBuilderRequest(new GetComponentPolicyRequestPrivate(ImageBuilderRequest::GetComponentPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetComponentPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetComponentPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetComponentPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetComponentPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::GetComponentPolicyRequestPrivate
 * \brief The GetComponentPolicyRequestPrivate class provides private implementation for GetComponentPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a GetComponentPolicyRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
GetComponentPolicyRequestPrivate::GetComponentPolicyRequestPrivate(
    const ImageBuilderRequest::Action action, GetComponentPolicyRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetComponentPolicyRequest
 * class' copy constructor.
 */
GetComponentPolicyRequestPrivate::GetComponentPolicyRequestPrivate(
    const GetComponentPolicyRequestPrivate &other, GetComponentPolicyRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
