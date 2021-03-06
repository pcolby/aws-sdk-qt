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

#include "putimagepolicyrequest.h"
#include "putimagepolicyrequest_p.h"
#include "putimagepolicyresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::PutImagePolicyRequest
 * \brief The PutImagePolicyRequest class provides an interface for imagebuilder PutImagePolicy requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::putImagePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutImagePolicyRequest::PutImagePolicyRequest(const PutImagePolicyRequest &other)
    : imagebuilderRequest(new PutImagePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutImagePolicyRequest object.
 */
PutImagePolicyRequest::PutImagePolicyRequest()
    : imagebuilderRequest(new PutImagePolicyRequestPrivate(imagebuilderRequest::PutImagePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutImagePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutImagePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutImagePolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutImagePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::PutImagePolicyRequestPrivate
 * \brief The PutImagePolicyRequestPrivate class provides private implementation for PutImagePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a PutImagePolicyRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
PutImagePolicyRequestPrivate::PutImagePolicyRequestPrivate(
    const imagebuilderRequest::Action action, PutImagePolicyRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutImagePolicyRequest
 * class' copy constructor.
 */
PutImagePolicyRequestPrivate::PutImagePolicyRequestPrivate(
    const PutImagePolicyRequestPrivate &other, PutImagePolicyRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
