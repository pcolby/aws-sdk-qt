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

#include "putcontainerrecipepolicyrequest.h"
#include "putcontainerrecipepolicyrequest_p.h"
#include "putcontainerrecipepolicyresponse.h"
#include "imagebuilderrequest_p.h"

namespace QtAws {
namespace imagebuilder {

/*!
 * \class QtAws::imagebuilder::PutContainerRecipePolicyRequest
 * \brief The PutContainerRecipePolicyRequest class provides an interface for imagebuilder PutContainerRecipePolicy requests.
 *
 * \inmodule QtAwsimagebuilder
 *
 *  EC2 Image Builder is a fully managed AWS service that makes it easier to automate the creation, management, and
 *  deployment of customized, secure, and up-to-date "golden" server images that are pre-installed and pre-configured with
 *  software and settings to meet specific IT
 *
 * \sa imagebuilderClient::putContainerRecipePolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutContainerRecipePolicyRequest::PutContainerRecipePolicyRequest(const PutContainerRecipePolicyRequest &other)
    : imagebuilderRequest(new PutContainerRecipePolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutContainerRecipePolicyRequest object.
 */
PutContainerRecipePolicyRequest::PutContainerRecipePolicyRequest()
    : imagebuilderRequest(new PutContainerRecipePolicyRequestPrivate(imagebuilderRequest::PutContainerRecipePolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutContainerRecipePolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutContainerRecipePolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutContainerRecipePolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutContainerRecipePolicyResponse(*this, reply);
}

/*!
 * \class QtAws::imagebuilder::PutContainerRecipePolicyRequestPrivate
 * \brief The PutContainerRecipePolicyRequestPrivate class provides private implementation for PutContainerRecipePolicyRequest.
 * \internal
 *
 * \inmodule QtAwsimagebuilder
 */

/*!
 * Constructs a PutContainerRecipePolicyRequestPrivate object for imagebuilder \a action,
 * with public implementation \a q.
 */
PutContainerRecipePolicyRequestPrivate::PutContainerRecipePolicyRequestPrivate(
    const imagebuilderRequest::Action action, PutContainerRecipePolicyRequest * const q)
    : imagebuilderRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutContainerRecipePolicyRequest
 * class' copy constructor.
 */
PutContainerRecipePolicyRequestPrivate::PutContainerRecipePolicyRequestPrivate(
    const PutContainerRecipePolicyRequestPrivate &other, PutContainerRecipePolicyRequest * const q)
    : imagebuilderRequestPrivate(other, q)
{

}

} // namespace imagebuilder
} // namespace QtAws
