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
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::PutComponentPolicyRequest
 * \brief The PutComponentPolicyRequest class provides an interface for imagebuilder PutComponentPolicy requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::putComponentPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutComponentPolicyRequest::PutComponentPolicyRequest(const PutComponentPolicyRequest &other)
    : imagebuilderRequest(new PutComponentPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutComponentPolicyRequest object.
 */
PutComponentPolicyRequest::PutComponentPolicyRequest()
    : imagebuilderRequest(new PutComponentPolicyRequestPrivate(imagebuilderRequest::PutComponentPolicyAction, this))
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
 * \class QtAws::imagebuilder::PutComponentPolicyRequestPrivate
 * \brief The PutComponentPolicyRequestPrivate class provides private implementation for PutComponentPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a PutComponentPolicyRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
PutComponentPolicyRequestPrivate::PutComponentPolicyRequestPrivate(
    const imagebuilderRequest::Action action, PutComponentPolicyRequest * const q)
    : imagebuilderRequestPrivate(action, q)
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
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
