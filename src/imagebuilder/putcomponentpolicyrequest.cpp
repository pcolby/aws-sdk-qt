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

#include "putcomponentpolicyrequest.h"
#include "putcomponentpolicyrequest_p.h"
#include "putcomponentpolicyresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace ImageBuilder {

/*!
 * \class QtAws::ImageBuilder::PutComponentPolicyRequest
 * \brief The PutComponentPolicyRequest class provides an interface for ImageBuilder PutComponentPolicy requests.
 *
 * \inmodule QtAwsImageBuilder
 *
 *  EC2 Image Builder is a fully managed Amazon Web Services service that makes it easier to automate the creation,
 *  management, and deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and
 *  pre-configured with software and settings to meet specific IT
 *
 * \sa ImageBuilderClient::putComponentPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutComponentPolicyRequest::PutComponentPolicyRequest(const PutComponentPolicyRequest &other)
    : ImageBuilderRequest(new PutComponentPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutComponentPolicyRequest object.
 */
PutComponentPolicyRequest::PutComponentPolicyRequest()
    : ImageBuilderRequest(new PutComponentPolicyRequestPrivate(ImageBuilderRequest::PutComponentPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutComponentPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutComponentPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutComponentPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutComponentPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::ImageBuilder::PutComponentPolicyRequestPrivate
 * \brief The PutComponentPolicyRequestPrivate class provides private implementation for PutComponentPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsImageBuilder
 */

/*!
 * Constructs a PutComponentPolicyRequestPrivate object for ImageBuilder \a action,
 * with public implementation \a q.
 */
PutComponentPolicyRequestPrivate::PutComponentPolicyRequestPrivate(
    const ImageBuilderRequest::Action action, PutComponentPolicyRequest * const q)
    : ImageBuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutComponentPolicyRequest
 * class' copy constructor.
 */
PutComponentPolicyRequestPrivate::PutComponentPolicyRequestPrivate(
    const PutComponentPolicyRequestPrivate &other, PutComponentPolicyRequest * const q)
    : ImageBuilderRequestPrivate(other, q)
{

}

} // namespace ImageBuilder
} // namespace QtAws
